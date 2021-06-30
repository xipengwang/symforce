// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>
#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym {

/**
 * Residual that penalizes the difference between between(a, b) and a_R_b.
 *
 * In vector space terms that would be:
 *     (b - a) - a_R_b
 *
 * In lie group terms:
 *     local_coordinates(a_R_b, between(a, b))
 *     to_tangent(compose(inverse(a_R_b), compose(inverse(a), b)))
 *
 * Args:
 *     sqrt_info: Square root information matrix to whiten residual. This can be computed from
 *                a covariance matrix as the cholesky decomposition of the inverse. In the case
 *                of a diagonal it will contain 1/sigma values. Must match the tangent dim.
 *     geo.Matrix: Jacobian for args 0 (a), 1 (b)
 */
template <typename Scalar>
void BetweenFactorPose3Rotation(const sym::Pose3<Scalar>& a, const sym::Pose3<Scalar>& b,
                                const sym::Rot3<Scalar>& a_R_b,
                                const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
                                Eigen::Matrix<Scalar, 3, 1>* const res = nullptr,
                                Eigen::Matrix<Scalar, 3, 12>* const jacobian = nullptr) {
  // Total ops: 982

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b = b.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _a_R_b = a_R_b.Data();

  // Intermediate terms (203)
  const Scalar _tmp0 = _a[0] * _b[0] + _a[1] * _b[1] + _a[2] * _b[2] + _a[3] * _b[3];
  const Scalar _tmp1 = -_a[0] * _b[3] - _a[1] * _b[2] + _a[2] * _b[1] + _a[3] * _b[0];
  const Scalar _tmp2 = _a[0] * _b[2] - _a[1] * _b[3] - _a[2] * _b[0] + _a[3] * _b[1];
  const Scalar _tmp3 = -_a[0] * _b[1] + _a[1] * _b[0] - _a[2] * _b[3] + _a[3] * _b[2];
  const Scalar _tmp4 =
      _a_R_b[0] * _tmp3 - _a_R_b[1] * _tmp0 - _a_R_b[2] * _tmp1 + _a_R_b[3] * _tmp2;
  const Scalar _tmp5 =
      _a_R_b[0] * _tmp1 + _a_R_b[1] * _tmp2 + _a_R_b[2] * _tmp3 + _a_R_b[3] * _tmp0;
  const Scalar _tmp6 = std::fabs(_tmp5);
  const Scalar _tmp7 = 1 - epsilon;
  const Scalar _tmp8 = std::min<Scalar>(_tmp6, _tmp7);
  const Scalar _tmp9 = std::acos(_tmp8);
  const Scalar _tmp10 = (((_tmp5) > 0) - ((_tmp5) < 0));
  const Scalar _tmp11 = 2 * std::min<Scalar>(0, _tmp10) + 1;
  const Scalar _tmp12 = _tmp11 * sqrt_info(0, 1);
  const Scalar _tmp13 = _tmp12 * _tmp9;
  const Scalar _tmp14 = 1 - std::pow<Scalar>(_tmp8, 2);
  const Scalar _tmp15 = 2 / std::sqrt(_tmp14);
  const Scalar _tmp16 = _tmp13 * _tmp15;
  const Scalar _tmp17 =
      -_a_R_b[0] * _tmp0 - _a_R_b[1] * _tmp3 + _a_R_b[2] * _tmp2 + _a_R_b[3] * _tmp1;
  const Scalar _tmp18 = _tmp11 * _tmp9;
  const Scalar _tmp19 = _tmp15 * _tmp18;
  const Scalar _tmp20 = _tmp17 * _tmp19;
  const Scalar _tmp21 =
      -_a_R_b[0] * _tmp2 + _a_R_b[1] * _tmp1 - _a_R_b[2] * _tmp0 + _a_R_b[3] * _tmp3;
  const Scalar _tmp22 = _tmp19 * _tmp21;
  const Scalar _tmp23 = _tmp19 * sqrt_info(1, 1);
  const Scalar _tmp24 = _tmp19 * sqrt_info(1, 2);
  const Scalar _tmp25 = _tmp18 * sqrt_info(2, 1);
  const Scalar _tmp26 = _tmp15 * _tmp25;
  const Scalar _tmp27 = _a_R_b[1] * _b[1];
  const Scalar _tmp28 = _a_R_b[0] * _b[0];
  const Scalar _tmp29 = _a_R_b[2] * _b[2];
  const Scalar _tmp30 = _a_R_b[3] * _b[3];
  const Scalar _tmp31 = -_tmp30;
  const Scalar _tmp32 = _tmp29 + _tmp31;
  const Scalar _tmp33 = -_tmp27 + _tmp28 + _tmp32;
  const Scalar _tmp34 = _a_R_b[3] * _b[1];
  const Scalar _tmp35 = _a_R_b[2] * _b[0];
  const Scalar _tmp36 = _a_R_b[1] * _b[3];
  const Scalar _tmp37 = -_tmp36;
  const Scalar _tmp38 = _a_R_b[0] * _b[2];
  const Scalar _tmp39 = -_tmp38;
  const Scalar _tmp40 = _tmp37 + _tmp39;
  const Scalar _tmp41 = _tmp34 + _tmp35 + _tmp40;
  const Scalar _tmp42 = _tmp4 * _tmp41;
  const Scalar _tmp43 = _tmp10 * ((((-_tmp6 + _tmp7) > 0) - ((-_tmp6 + _tmp7) < 0)) + 1);
  const Scalar _tmp44 = _tmp43 * _tmp8 / (_tmp14 * std::sqrt(_tmp14));
  const Scalar _tmp45 = _tmp42 * _tmp44;
  const Scalar _tmp46 = _tmp18 * _tmp44;
  const Scalar _tmp47 = _tmp41 * _tmp46;
  const Scalar _tmp48 = _tmp21 * _tmp47;
  const Scalar _tmp49 = _tmp17 * sqrt_info(0, 0);
  const Scalar _tmp50 = _tmp46 * _tmp49;
  const Scalar _tmp51 = _tmp43 / _tmp14;
  const Scalar _tmp52 = _tmp11 * _tmp51;
  const Scalar _tmp53 = _tmp21 * _tmp52;
  const Scalar _tmp54 = _tmp53 * sqrt_info(0, 2);
  const Scalar _tmp55 = _a_R_b[0] * _b[1];
  const Scalar _tmp56 = -_tmp55;
  const Scalar _tmp57 = _a_R_b[3] * _b[2];
  const Scalar _tmp58 = _a_R_b[1] * _b[0];
  const Scalar _tmp59 = -_tmp58;
  const Scalar _tmp60 = _a_R_b[2] * _b[3];
  const Scalar _tmp61 = -_tmp60;
  const Scalar _tmp62 = _tmp59 + _tmp61;
  const Scalar _tmp63 = _tmp19 * (_tmp56 - _tmp57 + _tmp62);
  const Scalar _tmp64 = _a_R_b[3] * _b[0];
  const Scalar _tmp65 = _a_R_b[0] * _b[3];
  const Scalar _tmp66 = _a_R_b[1] * _b[2];
  const Scalar _tmp67 = -_tmp66;
  const Scalar _tmp68 = _a_R_b[2] * _b[1];
  const Scalar _tmp69 = -_tmp68;
  const Scalar _tmp70 = _tmp67 + _tmp69;
  const Scalar _tmp71 = _tmp64 + _tmp65 + _tmp70;
  const Scalar _tmp72 = _tmp19 * _tmp71;
  const Scalar _tmp73 = _tmp12 * _tmp51;
  const Scalar _tmp74 = _tmp41 * _tmp52;
  const Scalar _tmp75 = _tmp13 * _tmp45 + _tmp16 * _tmp33 + _tmp41 * _tmp50 - _tmp41 * _tmp54 -
                        _tmp42 * _tmp73 + _tmp48 * sqrt_info(0, 2) - _tmp49 * _tmp74 +
                        _tmp63 * sqrt_info(0, 0) + _tmp72 * sqrt_info(0, 2);
  const Scalar _tmp76 = (1.0 / 2.0) * _a[2];
  const Scalar _tmp77 = -_tmp35;
  const Scalar _tmp78 = _tmp34 + _tmp77;
  const Scalar _tmp79 = _tmp15 * (_tmp37 + _tmp38 + _tmp78);
  const Scalar _tmp80 = _tmp27 + _tmp28;
  const Scalar _tmp81 = _tmp29 + _tmp30 + _tmp80;
  const Scalar _tmp82 = _tmp4 * _tmp44;
  const Scalar _tmp83 = _tmp81 * _tmp82;
  const Scalar _tmp84 = _tmp21 * _tmp46;
  const Scalar _tmp85 = _tmp81 * _tmp84;
  const Scalar _tmp86 = _tmp56 + _tmp57;
  const Scalar _tmp87 = _tmp19 * (_tmp58 + _tmp61 + _tmp86);
  const Scalar _tmp88 = -_tmp65;
  const Scalar _tmp89 = _tmp64 + _tmp88;
  const Scalar _tmp90 = _tmp19 * (_tmp67 + _tmp68 + _tmp89);
  const Scalar _tmp91 = _tmp52 * _tmp81;
  const Scalar _tmp92 = _tmp21 * _tmp91;
  const Scalar _tmp93 = _tmp4 * _tmp73;
  const Scalar _tmp94 = _tmp13 * _tmp79 + _tmp13 * _tmp83 - _tmp49 * _tmp91 + _tmp50 * _tmp81 -
                        _tmp81 * _tmp93 + _tmp85 * sqrt_info(0, 2) + _tmp87 * sqrt_info(0, 2) +
                        _tmp90 * sqrt_info(0, 0) - _tmp92 * sqrt_info(0, 2);
  const Scalar _tmp95 = (1.0 / 2.0) * _a[0];
  const Scalar _tmp96 = _tmp36 + _tmp39 + _tmp78;
  const Scalar _tmp97 = _tmp19 * _tmp96;
  const Scalar _tmp98 = _tmp19 * (-_tmp29 + _tmp31 + _tmp80);
  const Scalar _tmp99 = _tmp55 + _tmp57 + _tmp62;
  const Scalar _tmp100 = _tmp52 * _tmp99;
  const Scalar _tmp101 = -_tmp64 + _tmp70 + _tmp88;
  const Scalar _tmp102 = _tmp84 * sqrt_info(0, 2);
  const Scalar _tmp103 = _tmp82 * _tmp99;
  const Scalar _tmp104 = -_tmp100 * _tmp49 + _tmp101 * _tmp16 + _tmp102 * _tmp99 +
                         _tmp103 * _tmp13 + _tmp50 * _tmp99 - _tmp54 * _tmp99 - _tmp93 * _tmp99 +
                         _tmp97 * sqrt_info(0, 0) + _tmp98 * sqrt_info(0, 2);
  const Scalar _tmp105 = (1.0 / 2.0) * _a[1];
  const Scalar _tmp106 = _tmp66 + _tmp69 + _tmp89;
  const Scalar _tmp107 = _tmp106 * _tmp46;
  const Scalar _tmp108 = _tmp106 * _tmp82;
  const Scalar _tmp109 = _tmp107 * _tmp21;
  const Scalar _tmp110 = _tmp19 * (-_tmp34 + _tmp40 + _tmp77);
  const Scalar _tmp111 = _tmp49 * _tmp52;
  const Scalar _tmp112 = _tmp59 + _tmp60 + _tmp86;
  const Scalar _tmp113 = _tmp112 * _tmp15;
  const Scalar _tmp114 = _tmp106 * _tmp53;
  const Scalar _tmp115 = _tmp27 - _tmp28 + _tmp32;
  const Scalar _tmp116 = _tmp115 * _tmp19;
  const Scalar _tmp117 = -_tmp106 * _tmp111 - _tmp106 * _tmp93 + _tmp107 * _tmp49 +
                         _tmp108 * _tmp13 + _tmp109 * sqrt_info(0, 2) + _tmp110 * sqrt_info(0, 2) +
                         _tmp113 * _tmp13 - _tmp114 * sqrt_info(0, 2) + _tmp116 * sqrt_info(0, 0);
  const Scalar _tmp118 = (1.0 / 2.0) * _a[3];
  const Scalar _tmp119 = _a[3] * _a_R_b[0];
  const Scalar _tmp120 = _a[1] * _a_R_b[2];
  const Scalar _tmp121 = _a[0] * _a_R_b[3];
  const Scalar _tmp122 = _a[2] * _a_R_b[1];
  const Scalar _tmp123 = -_tmp119 - _tmp120 - _tmp121 + _tmp122;
  const Scalar _tmp124 = _tmp123 * _tmp19;
  const Scalar _tmp125 = _a[3] * _a_R_b[2];
  const Scalar _tmp126 = _a[1] * _a_R_b[0];
  const Scalar _tmp127 = _a[0] * _a_R_b[1];
  const Scalar _tmp128 = _a[2] * _a_R_b[3];
  const Scalar _tmp129 = _tmp15 * (-_tmp125 + _tmp126 - _tmp127 - _tmp128);
  const Scalar _tmp130 = _tmp129 * _tmp18;
  const Scalar _tmp131 =
      -_a[0] * _a_R_b[0] - _a[1] * _a_R_b[1] - _a[2] * _a_R_b[2] + _a[3] * _a_R_b[3];
  const Scalar _tmp132 = _tmp131 * _tmp82;
  const Scalar _tmp133 = _a[3] * _a_R_b[1];
  const Scalar _tmp134 = _a[1] * _a_R_b[3];
  const Scalar _tmp135 = _a[0] * _a_R_b[2];
  const Scalar _tmp136 = _a[2] * _a_R_b[0];
  const Scalar _tmp137 = -_tmp133 - _tmp134 + _tmp135 - _tmp136;
  const Scalar _tmp138 = _tmp131 * _tmp52;
  const Scalar _tmp139 = _tmp131 * _tmp53;
  const Scalar _tmp140 = _tmp102 * _tmp131 + _tmp124 * sqrt_info(0, 0) + _tmp13 * _tmp132 +
                         _tmp130 * sqrt_info(0, 2) + _tmp131 * _tmp50 - _tmp131 * _tmp93 +
                         _tmp137 * _tmp16 - _tmp138 * _tmp49 - _tmp139 * sqrt_info(0, 2);
  const Scalar _tmp141 = (1.0 / 2.0) * _b[0];
  const Scalar _tmp142 = _tmp119 + _tmp120 + _tmp121 - _tmp122;
  const Scalar _tmp143 = _tmp131 * _tmp19;
  const Scalar _tmp144 = _tmp125 - _tmp126 + _tmp127 + _tmp128;
  const Scalar _tmp145 = _tmp144 * _tmp82;
  const Scalar _tmp146 = _tmp137 * _tmp19;
  const Scalar _tmp147 = _tmp102 * _tmp144 - _tmp111 * _tmp144 + _tmp13 * _tmp145 +
                         _tmp142 * _tmp16 + _tmp143 * sqrt_info(0, 2) + _tmp144 * _tmp50 -
                         _tmp144 * _tmp54 - _tmp144 * _tmp93 + _tmp146 * sqrt_info(0, 0);
  const Scalar _tmp148 = (1.0 / 2.0) * _b[1];
  const Scalar _tmp149 = _tmp133 + _tmp134 - _tmp135 + _tmp136;
  const Scalar _tmp150 = _tmp149 * _tmp82;
  const Scalar _tmp151 = _tmp149 * _tmp84;
  const Scalar _tmp152 = _tmp144 * _tmp19;
  const Scalar _tmp153 = -1.0 / 2.0 * _tmp111 * _tmp149 + (1.0 / 2.0) * _tmp124 * sqrt_info(0, 2) +
                         (1.0 / 2.0) * _tmp13 * _tmp150 + (1.0 / 2.0) * _tmp131 * _tmp16 +
                         (1.0 / 2.0) * _tmp149 * _tmp50 - 1.0 / 2.0 * _tmp149 * _tmp54 -
                         1.0 / 2.0 * _tmp149 * _tmp93 + (1.0 / 2.0) * _tmp151 * sqrt_info(0, 2) +
                         (1.0 / 2.0) * _tmp152 * sqrt_info(0, 0);
  const Scalar _tmp154 = _tmp142 * _tmp46;
  const Scalar _tmp155 = _tmp154 * _tmp21;
  const Scalar _tmp156 = _tmp142 * _tmp82;
  const Scalar _tmp157 = _tmp149 * _tmp19;
  const Scalar _tmp158 = -_tmp111 * _tmp142 + _tmp129 * _tmp13 + _tmp13 * _tmp156 +
                         _tmp142 * _tmp50 - _tmp142 * _tmp54 - _tmp142 * _tmp93 +
                         _tmp143 * sqrt_info(0, 0) + _tmp155 * sqrt_info(0, 2) +
                         _tmp157 * sqrt_info(0, 2);
  const Scalar _tmp159 = (1.0 / 2.0) * _b[3];
  const Scalar _tmp160 = (1.0 / 2.0) * _b[2];
  const Scalar _tmp161 = _tmp18 * sqrt_info(1, 1);
  const Scalar _tmp162 = _tmp17 * sqrt_info(1, 0);
  const Scalar _tmp163 = _tmp162 * _tmp46;
  const Scalar _tmp164 = _tmp53 * sqrt_info(1, 2);
  const Scalar _tmp165 = _tmp42 * _tmp52;
  const Scalar _tmp166 = _tmp161 * _tmp45 - _tmp162 * _tmp74 + _tmp163 * _tmp41 - _tmp164 * _tmp41 -
                         _tmp165 * sqrt_info(1, 1) + _tmp23 * _tmp33 + _tmp24 * _tmp71 +
                         _tmp48 * sqrt_info(1, 2) + _tmp63 * sqrt_info(1, 0);
  const Scalar _tmp167 = _tmp4 * _tmp91;
  const Scalar _tmp168 = _tmp161 * _tmp79 + _tmp161 * _tmp83 - _tmp162 * _tmp91 + _tmp163 * _tmp81 -
                         _tmp167 * sqrt_info(1, 1) + _tmp85 * sqrt_info(1, 2) +
                         _tmp87 * sqrt_info(1, 2) + _tmp90 * sqrt_info(1, 0) -
                         _tmp92 * sqrt_info(1, 2);
  const Scalar _tmp169 = _tmp162 * _tmp52;
  const Scalar _tmp170 = _tmp100 * _tmp4;
  const Scalar _tmp171 = _tmp53 * _tmp99;
  const Scalar _tmp172 = _tmp84 * sqrt_info(1, 2);
  const Scalar _tmp173 = _tmp101 * _tmp23 + _tmp103 * _tmp161 + _tmp163 * _tmp99 -
                         _tmp169 * _tmp99 - _tmp170 * sqrt_info(1, 1) - _tmp171 * sqrt_info(1, 2) +
                         _tmp172 * _tmp99 + _tmp97 * sqrt_info(1, 0) + _tmp98 * sqrt_info(1, 2);
  const Scalar _tmp174 = _tmp4 * sqrt_info(1, 1);
  const Scalar _tmp175 = _tmp106 * _tmp52;
  const Scalar _tmp176 = -_tmp106 * _tmp169 + _tmp107 * _tmp162 + _tmp108 * _tmp161 +
                         _tmp109 * sqrt_info(1, 2) + _tmp110 * sqrt_info(1, 2) + _tmp112 * _tmp23 -
                         _tmp114 * sqrt_info(1, 2) + _tmp116 * sqrt_info(1, 0) - _tmp174 * _tmp175;
  const Scalar _tmp177 = _tmp138 * _tmp4;
  const Scalar _tmp178 = _tmp124 * sqrt_info(1, 0) + _tmp130 * sqrt_info(1, 2) + _tmp131 * _tmp163 -
                         _tmp131 * _tmp169 + _tmp131 * _tmp172 + _tmp132 * _tmp161 +
                         _tmp137 * _tmp23 - _tmp139 * sqrt_info(1, 2) - _tmp177 * sqrt_info(1, 1);
  const Scalar _tmp179 = _tmp144 * sqrt_info(1, 0);
  const Scalar _tmp180 = _tmp17 * _tmp179;
  const Scalar _tmp181 = _tmp144 * _tmp53;
  const Scalar _tmp182 = _tmp144 * _tmp52;
  const Scalar _tmp183 = _tmp142 * _tmp23 + _tmp143 * sqrt_info(1, 2) + _tmp144 * _tmp172 +
                         _tmp145 * _tmp161 + _tmp146 * sqrt_info(1, 0) - _tmp174 * _tmp182 +
                         _tmp180 * _tmp46 - _tmp180 * _tmp52 - _tmp181 * sqrt_info(1, 2);
  const Scalar _tmp184 = _tmp149 * _tmp52;
  const Scalar _tmp185 = (1.0 / 2.0) * _tmp123 * _tmp24 + (1.0 / 2.0) * _tmp131 * _tmp23 +
                         (1.0 / 2.0) * _tmp149 * _tmp163 - 1.0 / 2.0 * _tmp149 * _tmp164 -
                         1.0 / 2.0 * _tmp149 * _tmp169 + (1.0 / 2.0) * _tmp150 * _tmp161 +
                         (1.0 / 2.0) * _tmp151 * sqrt_info(1, 2) - 1.0 / 2.0 * _tmp174 * _tmp184 +
                         (1.0 / 2.0) * _tmp179 * _tmp19;
  const Scalar _tmp186 = _tmp142 * _tmp52;
  const Scalar _tmp187 = _tmp130 * sqrt_info(1, 1) + _tmp142 * _tmp163 - _tmp142 * _tmp164 -
                         _tmp142 * _tmp169 + _tmp143 * sqrt_info(1, 0) + _tmp149 * _tmp24 +
                         _tmp155 * sqrt_info(1, 2) + _tmp156 * _tmp161 - _tmp174 * _tmp186;
  const Scalar _tmp188 = _tmp17 * sqrt_info(2, 0);
  const Scalar _tmp189 = _tmp53 * sqrt_info(2, 2);
  const Scalar _tmp190 = -_tmp165 * sqrt_info(2, 1) + _tmp188 * _tmp47 - _tmp188 * _tmp74 -
                         _tmp189 * _tmp41 + _tmp25 * _tmp45 + _tmp26 * _tmp33 +
                         _tmp48 * sqrt_info(2, 2) + _tmp63 * sqrt_info(2, 0) +
                         _tmp72 * sqrt_info(2, 2);
  const Scalar _tmp191 = _tmp188 * _tmp46;
  const Scalar _tmp192 = _tmp25 * _tmp82;
  const Scalar _tmp193 = _tmp84 * sqrt_info(2, 2);
  const Scalar _tmp194 = -_tmp167 * sqrt_info(2, 1) - _tmp188 * _tmp91 + _tmp191 * _tmp81 +
                         _tmp192 * _tmp81 + _tmp193 * _tmp81 + _tmp25 * _tmp79 +
                         _tmp87 * sqrt_info(2, 2) + _tmp90 * sqrt_info(2, 0) -
                         _tmp92 * sqrt_info(2, 2);
  const Scalar _tmp195 = _tmp19 * sqrt_info(2, 0);
  const Scalar _tmp196 = -_tmp100 * _tmp188 + _tmp101 * _tmp26 - _tmp170 * sqrt_info(2, 1) -
                         _tmp171 * sqrt_info(2, 2) + _tmp191 * _tmp99 + _tmp192 * _tmp99 +
                         _tmp193 * _tmp99 + _tmp195 * _tmp96 + _tmp98 * sqrt_info(2, 2);
  const Scalar _tmp197 = _tmp4 * sqrt_info(2, 1);
  const Scalar _tmp198 = _tmp107 * _tmp188 + _tmp108 * _tmp25 + _tmp109 * sqrt_info(2, 2) +
                         _tmp110 * sqrt_info(2, 2) + _tmp113 * _tmp25 - _tmp114 * sqrt_info(2, 2) +
                         _tmp115 * _tmp195 - _tmp175 * _tmp188 - _tmp175 * _tmp197;
  const Scalar _tmp199 = _tmp123 * _tmp195 + _tmp130 * sqrt_info(2, 2) + _tmp131 * _tmp191 +
                         _tmp131 * _tmp192 + _tmp131 * _tmp193 + _tmp137 * _tmp26 -
                         _tmp138 * _tmp188 - _tmp139 * sqrt_info(2, 2) - _tmp177 * sqrt_info(2, 1);
  const Scalar _tmp200 = _tmp137 * _tmp195 + _tmp142 * _tmp26 + _tmp143 * sqrt_info(2, 2) +
                         _tmp144 * _tmp191 + _tmp144 * _tmp193 + _tmp145 * _tmp25 -
                         _tmp181 * sqrt_info(2, 2) - _tmp182 * _tmp188 - _tmp182 * _tmp197;
  const Scalar _tmp201 = (1.0 / 2.0) * _tmp124 * sqrt_info(2, 2) + (1.0 / 2.0) * _tmp131 * _tmp26 -
                         1.0 / 2.0 * _tmp149 * _tmp189 + (1.0 / 2.0) * _tmp149 * _tmp191 +
                         (1.0 / 2.0) * _tmp149 * _tmp192 + (1.0 / 2.0) * _tmp149 * _tmp193 +
                         (1.0 / 2.0) * _tmp152 * sqrt_info(2, 0) - 1.0 / 2.0 * _tmp184 * _tmp188 -
                         1.0 / 2.0 * _tmp184 * _tmp197;
  const Scalar _tmp202 = _tmp129 * _tmp25 - _tmp142 * _tmp189 + _tmp142 * _tmp192 +
                         _tmp143 * sqrt_info(2, 0) + _tmp154 * _tmp188 + _tmp155 * sqrt_info(2, 2) +
                         _tmp157 * sqrt_info(2, 2) - _tmp186 * _tmp188 - _tmp186 * _tmp197;

  // Output terms (2)
  if (res != nullptr) {
    Eigen::Matrix<Scalar, 3, 1>& _res = (*res);

    _res(0, 0) = _tmp16 * _tmp4 + _tmp20 * sqrt_info(0, 0) + _tmp22 * sqrt_info(0, 2);
    _res(1, 0) = _tmp20 * sqrt_info(1, 0) + _tmp21 * _tmp24 + _tmp23 * _tmp4;
    _res(2, 0) = _tmp20 * sqrt_info(2, 0) + _tmp22 * sqrt_info(2, 2) + _tmp26 * _tmp4;
  }

  if (jacobian != nullptr) {
    Eigen::Matrix<Scalar, 3, 12>& _jacobian = (*jacobian);

    _jacobian(0, 0) = -_tmp104 * _tmp105 + _tmp117 * _tmp118 + _tmp75 * _tmp76 - _tmp94 * _tmp95;
    _jacobian(0, 1) = _tmp104 * _tmp95 - _tmp105 * _tmp94 - _tmp117 * _tmp76 + _tmp118 * _tmp75;
    _jacobian(0, 2) = _tmp104 * _tmp118 + _tmp105 * _tmp117 - _tmp75 * _tmp95 - _tmp76 * _tmp94;
    _jacobian(0, 3) = 0;
    _jacobian(0, 4) = 0;
    _jacobian(0, 5) = 0;
    _jacobian(0, 6) = _b[2] * _tmp153 - _tmp140 * _tmp141 - _tmp147 * _tmp148 + _tmp158 * _tmp159;
    _jacobian(0, 7) = _b[3] * _tmp153 - _tmp140 * _tmp148 + _tmp141 * _tmp147 - _tmp158 * _tmp160;
    _jacobian(0, 8) = -_b[0] * _tmp153 - _tmp140 * _tmp160 + _tmp147 * _tmp159 + _tmp148 * _tmp158;
    _jacobian(0, 9) = 0;
    _jacobian(0, 10) = 0;
    _jacobian(0, 11) = 0;
    _jacobian(1, 0) = -_tmp105 * _tmp173 + _tmp118 * _tmp176 + _tmp166 * _tmp76 - _tmp168 * _tmp95;
    _jacobian(1, 1) = -_tmp105 * _tmp168 + _tmp118 * _tmp166 + _tmp173 * _tmp95 - _tmp176 * _tmp76;
    _jacobian(1, 2) = _tmp105 * _tmp176 + _tmp118 * _tmp173 - _tmp166 * _tmp95 - _tmp168 * _tmp76;
    _jacobian(1, 3) = 0;
    _jacobian(1, 4) = 0;
    _jacobian(1, 5) = 0;
    _jacobian(1, 6) = _b[2] * _tmp185 - _tmp141 * _tmp178 - _tmp148 * _tmp183 + _tmp159 * _tmp187;
    _jacobian(1, 7) = _b[3] * _tmp185 + _tmp141 * _tmp183 - _tmp148 * _tmp178 - _tmp160 * _tmp187;
    _jacobian(1, 8) = -_b[0] * _tmp185 + _tmp148 * _tmp187 + _tmp159 * _tmp183 - _tmp160 * _tmp178;
    _jacobian(1, 9) = 0;
    _jacobian(1, 10) = 0;
    _jacobian(1, 11) = 0;
    _jacobian(2, 0) = -_tmp105 * _tmp196 + _tmp118 * _tmp198 + _tmp190 * _tmp76 - _tmp194 * _tmp95;
    _jacobian(2, 1) = -_tmp105 * _tmp194 + _tmp118 * _tmp190 + _tmp196 * _tmp95 - _tmp198 * _tmp76;
    _jacobian(2, 2) = _tmp105 * _tmp198 + _tmp118 * _tmp196 - _tmp190 * _tmp95 - _tmp194 * _tmp76;
    _jacobian(2, 3) = 0;
    _jacobian(2, 4) = 0;
    _jacobian(2, 5) = 0;
    _jacobian(2, 6) = _b[2] * _tmp201 - _tmp141 * _tmp199 - _tmp148 * _tmp200 + _tmp159 * _tmp202;
    _jacobian(2, 7) = _b[3] * _tmp201 + _tmp141 * _tmp200 - _tmp148 * _tmp199 - _tmp160 * _tmp202;
    _jacobian(2, 8) = -_b[0] * _tmp201 + _tmp148 * _tmp202 + _tmp159 * _tmp200 - _tmp160 * _tmp199;
    _jacobian(2, 9) = 0;
    _jacobian(2, 10) = 0;
    _jacobian(2, 11) = 0;
  }
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
