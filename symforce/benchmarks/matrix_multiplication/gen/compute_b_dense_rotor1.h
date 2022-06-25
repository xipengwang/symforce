// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     backends/cpp/templates/function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Dense>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*     x2: Scalar
*     x3: Scalar
*     x4: Scalar
*
* Outputs:
*     result: Matrix100_100
*/
template <typename Scalar>
Eigen::Matrix<Scalar, 100, 100> ComputeBDenseRotor1(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 1043

    // Input arrays

    // Intermediate terms (213)
    const Scalar _tmp0 = 4*x3;
    const Scalar _tmp1 = std::pow(x0, Scalar(2));
    const Scalar _tmp2 = _tmp1*x4;
    const Scalar _tmp3 = x0 - 4;
    const Scalar _tmp4 = x2 + 2;
    const Scalar _tmp5 = _tmp4*x4;
    const Scalar _tmp6 = 2*x1;
    const Scalar _tmp7 = _tmp6 + 2;
    const Scalar _tmp8 = x3 + 2;
    const Scalar _tmp9 = x3 - 2;
    const Scalar _tmp10 = _tmp9 + x4;
    const Scalar _tmp11 = x1*x2;
    const Scalar _tmp12 = Scalar(1.0) / (x2);
    const Scalar _tmp13 = x4 + 4;
    const Scalar _tmp14 = x2 - 3;
    const Scalar _tmp15 = -_tmp14;
    const Scalar _tmp16 = x1 - 2;
    const Scalar _tmp17 = -x2;
    const Scalar _tmp18 = _tmp17 + x1;
    const Scalar _tmp19 = _tmp18 + 2;
    const Scalar _tmp20 = std::pow(x4, Scalar(2));
    const Scalar _tmp21 = Scalar(1.0) / (x1);
    const Scalar _tmp22 = (Scalar(1)/Scalar(2))*_tmp21;
    const Scalar _tmp23 = 2*x0;
    const Scalar _tmp24 = _tmp23 + x1;
    const Scalar _tmp25 = (Scalar(1)/Scalar(2))*x4;
    const Scalar _tmp26 = -_tmp25;
    const Scalar _tmp27 = x3 - 3;
    const Scalar _tmp28 = Scalar(1.0) / (x3);
    const Scalar _tmp29 = 2*_tmp28;
    const Scalar _tmp30 = -x3;
    const Scalar _tmp31 = x3 + x4;
    const Scalar _tmp32 = x4 - 1;
    const Scalar _tmp33 = -_tmp32;
    const Scalar _tmp34 = x0 + x3;
    const Scalar _tmp35 = x1 + x3;
    const Scalar _tmp36 = x1 + 1;
    const Scalar _tmp37 = 2*x3;
    const Scalar _tmp38 = _tmp37 - 1;
    const Scalar _tmp39 = x0 - 1;
    const Scalar _tmp40 = -_tmp39;
    const Scalar _tmp41 = std::pow(x2, Scalar(2));
    const Scalar _tmp42 = 2*x4;
    const Scalar _tmp43 = _tmp8 + x4;
    const Scalar _tmp44 = _tmp6*x4;
    const Scalar _tmp45 = -x4;
    const Scalar _tmp46 = x2 + 1;
    const Scalar _tmp47 = _tmp46*x4;
    const Scalar _tmp48 = x0 + 1;
    const Scalar _tmp49 = _tmp45 + x0;
    const Scalar _tmp50 = (Scalar(1)/Scalar(2))*x1;
    const Scalar _tmp51 = _tmp50 + 2;
    const Scalar _tmp52 = x2 + x4;
    const Scalar _tmp53 = x0 + 2;
    const Scalar _tmp54 = _tmp53 + x1;
    const Scalar _tmp55 = x2 - 2;
    const Scalar _tmp56 = Scalar(1.0) / (x0);
    const Scalar _tmp57 = 4*x2;
    const Scalar _tmp58 = _tmp46 + x0;
    const Scalar _tmp59 = 8*_tmp20;
    const Scalar _tmp60 = -_tmp23;
    const Scalar _tmp61 = x1 + x4;
    const Scalar _tmp62 = _tmp45 + x2;
    const Scalar _tmp63 = _tmp6 - 2;
    const Scalar _tmp64 = 2*_tmp20;
    const Scalar _tmp65 = (Scalar(1)/Scalar(2))*_tmp28;
    const Scalar _tmp66 = 4*x0;
    const Scalar _tmp67 = -x0;
    const Scalar _tmp68 = x3*x4;
    const Scalar _tmp69 = _tmp68 + x3;
    const Scalar _tmp70 = x0 + x4;
    const Scalar _tmp71 = x4 + 2;
    const Scalar _tmp72 = _tmp71*x1;
    const Scalar _tmp73 = x2 + 3;
    const Scalar _tmp74 = _tmp11*x0;
    const Scalar _tmp75 = -x1;
    const Scalar _tmp76 = _tmp30 + x1;
    const Scalar _tmp77 = 2*x2;
    const Scalar _tmp78 = _tmp77 + 1;
    const Scalar _tmp79 = _tmp6*x3;
    const Scalar _tmp80 = x2*x3;
    const Scalar _tmp81 = std::pow(x1, Scalar(2));
    const Scalar _tmp82 = x0*x4;
    const Scalar _tmp83 = _tmp36 + x0;
    const Scalar _tmp84 = x1 - 1;
    const Scalar _tmp85 = x1 + 2;
    const Scalar _tmp86 = _tmp85*x2;
    const Scalar _tmp87 = -_tmp42;
    const Scalar _tmp88 = _tmp37 + _tmp87;
    const Scalar _tmp89 = x1*x4;
    const Scalar _tmp90 = Scalar(1.0) / (x4);
    const Scalar _tmp91 = -_tmp6;
    const Scalar _tmp92 = std::pow(x3, Scalar(2));
    const Scalar _tmp93 = _tmp92*x2;
    const Scalar _tmp94 = x0 - 2;
    const Scalar _tmp95 = x3 - 1;
    const Scalar _tmp96 = _tmp30 + x2;
    const Scalar _tmp97 = x0 - 3;
    const Scalar _tmp98 = _tmp37*x2;
    const Scalar _tmp99 = -_tmp98;
    const Scalar _tmp100 = x0*x3;
    const Scalar _tmp101 = x2*x4;
    const Scalar _tmp102 = _tmp8 + x1;
    const Scalar _tmp103 = _tmp34 - 2;
    const Scalar _tmp104 = x0*x1;
    const Scalar _tmp105 = -_tmp104;
    const Scalar _tmp106 = _tmp30 + x0;
    const Scalar _tmp107 = _tmp68*x0;
    const Scalar _tmp108 = _tmp68 + 1;
    const Scalar _tmp109 = 2*_tmp56;
    const Scalar _tmp110 = _tmp37 + _tmp42;
    const Scalar _tmp111 = -_tmp46;
    const Scalar _tmp112 = _tmp17 + _tmp70;
    const Scalar _tmp113 = x1 + x2;
    const Scalar _tmp114 = _tmp42 + _tmp66;
    const Scalar _tmp115 = _tmp95*x3;
    const Scalar _tmp116 = _tmp90*x0;
    const Scalar _tmp117 = x2 - 1;
    const Scalar _tmp118 = (Scalar(1)/Scalar(2))*x3;
    const Scalar _tmp119 = -_tmp28;
    const Scalar _tmp120 = 3*x4;
    const Scalar _tmp121 = _tmp6*x2;
    const Scalar _tmp122 = _tmp4 + _tmp67;
    const Scalar _tmp123 = _tmp42 + x2;
    const Scalar _tmp124 = -_tmp109;
    const Scalar _tmp125 = x4 + 1;
    const Scalar _tmp126 = _tmp125*x1;
    const Scalar _tmp127 = _tmp48 + x4;
    const Scalar _tmp128 = _tmp56*x3;
    const Scalar _tmp129 = -_tmp128;
    const Scalar _tmp130 = _tmp41*_tmp90;
    const Scalar _tmp131 = _tmp6 + 1;
    const Scalar _tmp132 = -_tmp131;
    const Scalar _tmp133 = x3/_tmp32;
    const Scalar _tmp134 = _tmp106*x2;
    const Scalar _tmp135 = -_tmp81;
    const Scalar _tmp136 = _tmp81*x3;
    const Scalar _tmp137 = _tmp37 + 2;
    const Scalar _tmp138 = _tmp41*x4;
    const Scalar _tmp139 = -_tmp138;
    const Scalar _tmp140 = 4*x1;
    const Scalar _tmp141 = -_tmp84;
    const Scalar _tmp142 = _tmp95*x2;
    const Scalar _tmp143 = 2*_tmp92;
    const Scalar _tmp144 = (Scalar(1)/Scalar(2))*x2;
    const Scalar _tmp145 = -_tmp144;
    const Scalar _tmp146 = -_tmp57;
    const Scalar _tmp147 = -_tmp77;
    const Scalar _tmp148 = _tmp77 + 4;
    const Scalar _tmp149 = x3 + 1;
    const Scalar _tmp150 = _tmp23*x3;
    const Scalar _tmp151 = -_tmp150;
    const Scalar _tmp152 = x1 + 3;
    const Scalar _tmp153 = _tmp30 + _tmp46;
    const Scalar _tmp154 = _tmp17 + _tmp71;
    const Scalar _tmp155 = _tmp17 + x0;
    const Scalar _tmp156 = -_tmp37;
    const Scalar _tmp157 = x2 + x3;
    const Scalar _tmp158 = _tmp42 + 2;
    const Scalar _tmp159 = _tmp6*x0;
    const Scalar _tmp160 = _tmp85*x1;
    const Scalar _tmp161 = _tmp52 + _tmp75;
    const Scalar _tmp162 = _tmp116*_tmp80;
    const Scalar _tmp163 = x4 - 2;
    const Scalar _tmp164 = _tmp163*x1;
    const Scalar _tmp165 = 6*x1;
    const Scalar _tmp166 = x0*x2;
    const Scalar _tmp167 = -_tmp154;
    const Scalar _tmp168 = _tmp34 + _tmp75;
    const Scalar _tmp169 = _tmp77 - 1;
    const Scalar _tmp170 = 4*x4;
    const Scalar _tmp171 = x1*x3;
    const Scalar _tmp172 = _tmp117*x2;
    const Scalar _tmp173 = -_tmp8;
    const Scalar _tmp174 = _tmp30 + _tmp4;
    const Scalar _tmp175 = (Scalar(1)/Scalar(2))*x0;
    const Scalar _tmp176 = _tmp16 + x4;
    const Scalar _tmp177 = _tmp45 + x1;
    const Scalar _tmp178 = x0 + 3;
    const Scalar _tmp179 = -_tmp178 - _tmp75;
    const Scalar _tmp180 = _tmp23*x4;
    const Scalar _tmp181 = _tmp38*x0;
    const Scalar _tmp182 = _tmp32 + x1;
    const Scalar _tmp183 = -_tmp80;
    const Scalar _tmp184 = _tmp23 - 2;
    const Scalar _tmp185 = x4 - 4;
    const Scalar _tmp186 = _tmp4 + x4;
    const Scalar _tmp187 = _tmp20*x1;
    const Scalar _tmp188 = _tmp16*x0;
    const Scalar _tmp189 = _tmp23 + _tmp42;
    const Scalar _tmp190 = _tmp52*x4;
    const Scalar _tmp191 = x0 + x2;
    const Scalar _tmp192 = 3*x3;
    const Scalar _tmp193 = -_tmp45 - _tmp92;
    const Scalar _tmp194 = 2*_tmp21;
    const Scalar _tmp195 = _tmp46*x3;
    const Scalar _tmp196 = -_tmp37 - _tmp6;
    const Scalar _tmp197 = _tmp17 + _tmp34;
    const Scalar _tmp198 = _tmp46 + _tmp75;
    const Scalar _tmp199 = 2*_tmp90;
    const Scalar _tmp200 = -_tmp9;
    const Scalar _tmp201 = _tmp75 + _tmp8;
    const Scalar _tmp202 = x3 + 4;
    const Scalar _tmp203 = _tmp120 + 2;
    const Scalar _tmp204 = -_tmp192;
    const Scalar _tmp205 = _tmp21*x4;
    const Scalar _tmp206 = _tmp23*x2;
    const Scalar _tmp207 = _tmp149 + _tmp75;
    const Scalar _tmp208 = _tmp37 + 1;
    const Scalar _tmp209 = 3*x0;
    const Scalar _tmp210 = -_tmp50 + x0;
    const Scalar _tmp211 = Scalar(1.0)*x0;
    const Scalar _tmp212 = _tmp37*x4;

    // Output terms (1)
    Eigen::Matrix<Scalar, 100, 100> _result;

    _result.setZero();

    _result(60, 0) = _tmp0 + x2;
    _result(66, 0) = _tmp2*x3;
    _result(61, 1) = _tmp3;
    _result(67, 1) = _tmp5;
    _result(62, 2) = -_tmp7;
    _result(68, 2) = -x2/_tmp8;
    _result(3, 3) = -_tmp10*_tmp11;
    _result(4, 3) = -_tmp12 + x0;
    _result(5, 3) = _tmp13;
    _result(9, 3) = _tmp15;
    _result(10, 3) = -x2/_tmp16;
    _result(11, 3) = _tmp19;
    _result(63, 3) = _tmp20 - 5;
    _result(69, 3) = -_tmp11*x3 - _tmp4;
    _result(70, 3) = _tmp16 + _tmp22;
    _result(71, 3) = -_tmp24;
    _result(3, 4) = _tmp23 + _tmp6;
    _result(4, 4) = _tmp12*(_tmp26 + x1);
    _result(5, 4) = _tmp27;
    _result(9, 4) = _tmp29 - 1;
    _result(10, 4) = _tmp30;
    _result(11, 4) = x3;
    _result(64, 4) = x4;
    _result(69, 4) = _tmp31 - 4;
    _result(70, 4) = _tmp33;
    _result(71, 4) = -_tmp34;
    _result(3, 5) = _tmp35*x3;
    _result(4, 5) = _tmp36/_tmp38;
    _result(5, 5) = _tmp40;
    _result(9, 5) = -_tmp30 - _tmp41;
    _result(10, 5) = x4;
    _result(11, 5) = _tmp21*_tmp42 - x0;
    _result(65, 5) = -_tmp42 - _tmp6 - 3;
    _result(69, 5) = _tmp9;
    _result(70, 5) = x0*(_tmp17 + _tmp43);
    _result(71, 5) = -1/(_tmp17 + _tmp44);
    _result(66, 6) = -x3*(_tmp45 + _tmp46) + 1;
    _result(72, 6) = _tmp34 + x4;
    _result(75, 6) = -_tmp35;
    _result(79, 6) = -_tmp47;
    _result(82, 6) = _tmp48*_tmp49;
    _result(86, 6) = _tmp12*_tmp6;
    _result(89, 6) = _tmp51;
    _result(93, 6) = _tmp52*_tmp54*x2;
    _result(96, 6) = _tmp23;
    _result(67, 7) = Scalar(0.5);
    _result(73, 7) = _tmp55;
    _result(76, 7) = _tmp56*(_tmp57 + 2);
    _result(80, 7) = x1;
    _result(87, 7) = -_tmp2;
    _result(90, 7) = -_tmp52 - x0;
    _result(94, 7) = _tmp37*_tmp58;
    _result(97, 7) = _tmp59*x0;
    _result(68, 8) = _tmp60;
    _result(74, 8) = _tmp12*_tmp27*_tmp61;
    _result(77, 8) = _tmp11 - 2;
    _result(81, 8) = -_tmp62;
    _result(84, 8) = -1;
    _result(88, 8) = 8*x4;
    _result(91, 8) = 1 - _tmp0;
    _result(95, 8) = -_tmp49 - _tmp63;
    _result(98, 8) = -_tmp30 - _tmp44;
    _result(3, 9) = _tmp0 + 8*x2;
    _result(4, 9) = 2;
    _result(5, 9) = _tmp64;
    _result(9, 9) = _tmp65;
    _result(10, 9) = -_tmp66 - 4;
    _result(11, 9) = _tmp63;
    _result(21, 9) = 1;
    _result(22, 9) = _tmp67 + _tmp69;
    _result(23, 9) = -Scalar(1.0)*_tmp21 + x3;
    _result(33, 9) = Scalar(-0.5);
    _result(34, 9) = -_tmp12*x0/_tmp70;
    _result(35, 9) = -_tmp19;
    _result(45, 9) = _tmp61 + 3;
    _result(46, 9) = -_tmp72;
    _result(47, 9) = 1 - _tmp42;
    _result(57, 9) = _tmp53;
    _result(58, 9) = _tmp73;
    _result(59, 9) = -_tmp67 - _tmp8;
    _result(69, 9) = Scalar(2.0)*_tmp28*_tmp52;
    _result(70, 9) = -_tmp18*_tmp74;
    _result(71, 9) = _tmp75;
    _result(73, 9) = x1 + Scalar(-2.0);
    _result(74, 9) = (Scalar(2)/Scalar(3))*x2 + (Scalar(2)/Scalar(3))*x4;
    _result(76, 9) = -_tmp76*x4;
    _result(77, 9) = _tmp78;
    _result(80, 9) = _tmp79;
    _result(81, 9) = x3;
    _result(84, 9) = -x4*(_tmp80 + 2);
    _result(87, 9) = _tmp17;
    _result(88, 9) = -_tmp81*_tmp82 + 2;
    _result(90, 9) = _tmp42 + _tmp77;
    _result(91, 9) = _tmp83;
    _result(94, 9) = _tmp84*_tmp86 + x2;
    _result(95, 9) = _tmp88;
    _result(97, 9) = -_tmp36 - _tmp89;
    _result(98, 9) = -_tmp90 - 1;
    _result(3, 10) = _tmp23 + _tmp91;
    _result(4, 10) = 1 - x0/_tmp31;
    _result(5, 10) = x3*(_tmp93 + x0);
    _result(9, 10) = -_tmp4*_tmp94*x1;
    _result(10, 10) = _tmp60;
    _result(11, 10) = -_tmp95;
    _result(21, 10) = -_tmp96*x2 - x4;
    _result(22, 10) = _tmp97;
    _result(23, 10) = _tmp42 + _tmp54;
    _result(34, 10) = -_tmp70;
    _result(35, 10) = _tmp99;
    _result(45, 10) = _tmp39 + _tmp62;
    _result(46, 10) = _tmp100*x1;
    _result(47, 10) = -4;
    _result(57, 10) = -_tmp76 - _tmp97;
    _result(58, 10) = -x4*(_tmp101 - 2) + 1;
    _result(59, 10) = -_tmp13 - _tmp17;
    _result(69, 10) = _tmp16;
    _result(70, 10) = -_tmp21*_tmp41*_tmp8;
    _result(71, 10) = 2 - _tmp52;
    _result(72, 10) = _tmp33;
    _result(74, 10) = _tmp102*_tmp55;
    _result(75, 10) = -_tmp103*x1;
    _result(77, 10) = -_tmp100 - _tmp101;
    _result(79, 10) = x4*(_tmp68 + x0);
    _result(81, 10) = Scalar(-0.33333333333333331);
    _result(82, 10) = 1;
    _result(84, 10) = -_tmp41 + _tmp71;
    _result(86, 10) = -_tmp6*_tmp95;
    _result(88, 10) = _tmp105;
    _result(89, 10) = -_tmp106;
    _result(91, 10) = -_tmp107;
    _result(93, 10) = _tmp94;
    _result(95, 10) = _tmp45 + _tmp50;
    _result(96, 10) = -_tmp108 - _tmp35;
    _result(98, 10) = _tmp109*_tmp16;
    _result(3, 11) = x3*(_tmp21*_tmp32*x2 + x2);
    _result(4, 11) = -_tmp110 - _tmp23;
    _result(5, 11) = _tmp111;
    _result(9, 11) = -_tmp46*_tmp81;
    _result(10, 11) = x2*(_tmp112 + _tmp30);
    _result(11, 11) = _tmp113;
    _result(21, 11) = _tmp6;
    _result(22, 11) = _tmp67;
    _result(23, 11) = -_tmp114 - _tmp91;
    _result(33, 11) = _tmp95;
    _result(34, 11) = x3*(_tmp115 + 1);
    _result(35, 11) = _tmp23;
    _result(45, 11) = _tmp34*x1 - 1;
    _result(46, 11) = -_tmp116;
    _result(47, 11) = -_tmp117*_tmp71 + x1;
    _result(57, 11) = -_tmp49 - x2;
    _result(58, 11) = _tmp118 + _tmp119;
    _result(59, 11) = _tmp120;
    _result(69, 11) = _tmp35;
    _result(70, 11) = x4;
    _result(71, 11) = _tmp121;
    _result(72, 11) = -_tmp122;
    _result(73, 11) = _tmp123;
    _result(75, 11) = _tmp124 + _tmp46 + x3;
    _result(76, 11) = _tmp30 + _tmp81;
    _result(79, 11) = _tmp126;
    _result(80, 11) = _tmp127 - _tmp89;
    _result(82, 11) = -_tmp3 - _tmp42;
    _result(83, 11) = _tmp48*_tmp71*x2;
    _result(86, 11) = _tmp129;
    _result(87, 11) = _tmp130*x3;
    _result(89, 11) = x0;
    _result(90, 11) = -_tmp97 - x1;
    _result(93, 11) = _tmp132;
    _result(94, 11) = _tmp84*(_tmp8 + x0);
    _result(96, 11) = _tmp133 - 2;
    _result(97, 11) = _tmp91;
    _result(12, 12) = -2;
    _result(16, 12) = _tmp39;
    _result(17, 12) = _tmp73;
    _result(22, 12) = -_tmp134;
    _result(23, 12) = _tmp135;
    _result(72, 12) = x4/_tmp48;
    _result(75, 12) = -_tmp136;
    _result(13, 13) = _tmp86;
    _result(17, 13) = -_tmp37*_tmp55 + x2;
    _result(21, 13) = -_tmp26 - x3;
    _result(23, 13) = -4;
    _result(73, 13) = -_tmp37*_tmp81;
    _result(76, 13) = _tmp137*x0;
    _result(14, 14) = _tmp23 + 2;
    _result(15, 14) = Scalar(1.0) / (_tmp36);
    _result(16, 14) = -_tmp101*_tmp22*_tmp56;
    _result(21, 14) = _tmp1 + _tmp125*x4;
    _result(22, 14) = -_tmp49 - 3;
    _result(74, 14) = -3;
    _result(77, 14) = -_tmp34 + _tmp82;
    _result(9, 15) = -_tmp122*(x4 + Scalar(0.5));
    _result(11, 15) = -_tmp6*_tmp68;
    _result(13, 15) = _tmp139;
    _result(14, 15) = _tmp75;
    _result(15, 15) = _tmp140*_tmp8;
    _result(16, 15) = _tmp23*_tmp96;
    _result(17, 15) = -1;
    _result(21, 15) = _tmp77 + _tmp82;
    _result(22, 15) = _tmp37*_tmp43;
    _result(23, 15) = _tmp30 + _tmp6;
    _result(76, 15) = _tmp141;
    _result(77, 15) = -_tmp39 - _tmp96;
    _result(9, 16) = _tmp142;
    _result(10, 16) = -_tmp9*x3;
    _result(11, 16) = _tmp82;
    _result(12, 16) = _tmp84;
    _result(14, 16) = _tmp143 + _tmp90;
    _result(15, 16) = _tmp0*x2 + x4;
    _result(16, 16) = _tmp53*x2 + _tmp70;
    _result(17, 16) = _tmp3 + _tmp75 + x3;
    _result(21, 16) = _tmp145;
    _result(22, 16) = _tmp146;
    _result(23, 16) = _tmp67 + _tmp80*_tmp84 + x1;
    _result(75, 16) = _tmp13*x3;
    _result(77, 16) = _tmp147;
    _result(9, 17) = _tmp55*x4;
    _result(10, 17) = -_tmp144 - _tmp50*_tmp53;
    _result(11, 17) = -_tmp28*_tmp9;
    _result(12, 17) = 1 - _tmp144;
    _result(13, 17) = _tmp148;
    _result(15, 17) = _tmp68 - 2;
    _result(16, 17) = _tmp148;
    _result(17, 17) = _tmp36;
    _result(21, 17) = -_tmp149*_tmp20*x3;
    _result(22, 17) = -x2/(_tmp53 + _tmp75);
    _result(23, 17) = -_tmp56*_tmp77 + 1;
    _result(75, 17) = -_tmp151 - _tmp8;
    _result(76, 17) = -_tmp152*_tmp85;
    _result(12, 18) = _tmp66;
    _result(18, 18) = x1;
    _result(22, 18) = -_tmp153*x3;
    _result(23, 18) = x1*(_tmp42 + Scalar(2.0));
    _result(13, 19) = -_tmp154*x4;
    _result(19, 19) = _tmp101 + _tmp155;
    _result(21, 19) = _tmp15;
    _result(23, 19) = _tmp47*x2;
    _result(14, 20) = _tmp156 + _tmp66;
    _result(20, 20) = _tmp77*(_tmp45 + _tmp90*x1 + 2);
    _result(21, 20) = _tmp13*_tmp144;
    _result(22, 20) = -_tmp157 - _tmp16;
    _result(15, 21) = 2*_tmp149*_tmp53;
    _result(21, 21) = _tmp90*(_tmp45 + _tmp8);
    _result(16, 22) = -_tmp158*_tmp46;
    _result(22, 22) = _tmp85;
    _result(17, 23) = -_tmp159 - _tmp23;
    _result(23, 23) = -4*_tmp90 + x1;
    _result(24, 24) = -_tmp160 - _tmp45;
    _result(28, 24) = -_tmp45 - x3;
    _result(29, 24) = _tmp140 + _tmp156;
    _result(34, 24) = _tmp161;
    _result(35, 24) = _tmp42;
    _result(79, 24) = -_tmp162;
    _result(82, 24) = 2 - _tmp144;
    _result(25, 25) = _tmp140*_tmp39;
    _result(27, 25) = _tmp164;
    _result(29, 25) = -_tmp37 - _tmp77;
    _result(33, 25) = _tmp165 + 6;
    _result(35, 25) = -_tmp61*x2 + 2;
    _result(80, 25) = _tmp9;
    _result(83, 25) = -_tmp125 - _tmp30;
    _result(26, 26) = _tmp157*(_tmp166 + 2);
    _result(27, 26) = _tmp133*_tmp90;
    _result(28, 26) = _tmp167;
    _result(33, 26) = _tmp83;
    _result(34, 26) = -_tmp168*x0 + 2;
    _result(81, 26) = _tmp46 + _tmp70;
    _result(84, 26) = _tmp149 + _tmp89;
    _result(9, 27) = _tmp169*_tmp37;
    _result(10, 27) = _tmp17 + _tmp48 + _tmp75;
    _result(11, 27) = _tmp116 + 1;
    _result(25, 27) = _tmp0 + _tmp146 + _tmp170;
    _result(26, 27) = _tmp34*_tmp89;
    _result(27, 27) = _tmp135;
    _result(28, 27) = -x2*(x1 + 8);
    _result(29, 27) = _tmp0;
    _result(33, 27) = -_tmp41*_tmp70 - x2;
    _result(34, 27) = -_tmp94;
    _result(35, 27) = _tmp171 + _tmp75;
    _result(83, 27) = _tmp52;
    _result(84, 27) = _tmp98;
    _result(9, 28) = _tmp136;
    _result(10, 28) = -_tmp137 - _tmp23;
    _result(11, 28) = _tmp77 + 2;
    _result(26, 28) = -_tmp117*_tmp56;
    _result(27, 28) = -x1*(_tmp17 + _tmp172);
    _result(28, 28) = -_tmp48 - _tmp6;
    _result(29, 28) = _tmp35 + (Scalar(3)/Scalar(2))*x4;
    _result(33, 28) = -_tmp125*(_tmp70 + 2);
    _result(34, 28) = _tmp134 + x0;
    _result(35, 28) = _tmp166 - _tmp68*x2;
    _result(82, 28) = -x0*(_tmp6 + x3);
    _result(84, 28) = _tmp52;
    _result(9, 29) = _tmp171;
    _result(10, 29) = (Scalar(2)/Scalar(3))*_tmp21*x0;
    _result(11, 29) = _tmp23 + 6;
    _result(24, 29) = _tmp99;
    _result(25, 29) = -_tmp125 - _tmp64;
    _result(27, 29) = -_tmp113;
    _result(28, 29) = -_tmp46 - x4;
    _result(29, 29) = x3;
    _result(33, 29) = _tmp173;
    _result(34, 29) = 2*_tmp12;
    _result(35, 29) = x2*(_tmp23 + x4);
    _result(82, 29) = -_tmp142;
    _result(83, 29) = -_tmp121 - x1;
    _result(24, 30) = _tmp35 + 3;
    _result(30, 30) = x3;
    _result(34, 30) = -_tmp37/_tmp84;
    _result(35, 30) = _tmp157;
    _result(25, 31) = _tmp87;
    _result(31, 31) = Scalar(0.5)*_tmp171;
    _result(33, 31) = 2;
    _result(35, 31) = _tmp50 + x3;
    _result(26, 32) = -_tmp168;
    _result(32, 32) = -_tmp174*x0;
    _result(33, 32) = _tmp175 + 1;
    _result(34, 32) = _tmp149*x0 - 1;
    _result(27, 33) = -3;
    _result(33, 33) = _tmp176;
    _result(28, 34) = _tmp86 - x0;
    _result(34, 34) = -x2*(_tmp155 + _tmp166);
    _result(29, 35) = _tmp11 - _tmp36;
    _result(35, 35) = 2 - _tmp5;
    _result(36, 36) = x0 - Scalar(1.0)*x4;
    _result(40, 36) = _tmp71;
    _result(41, 36) = x0*(_tmp23 + x3 - 4);
    _result(46, 36) = -_tmp177 - _tmp29 - _tmp8;
    _result(47, 36) = -4;
    _result(86, 36) = -_tmp67 - _tmp82;
    _result(89, 36) = _tmp61;
    _result(37, 37) = 2 - _tmp110;
    _result(39, 37) = -4*_tmp12 - 2;
    _result(41, 37) = -Scalar(1)/Scalar(2)*_tmp130;
    _result(45, 37) = -_tmp90*x2;
    _result(47, 37) = x1;
    _result(87, 37) = _tmp179;
    _result(90, 37) = -_tmp6 - _tmp87;
    _result(38, 38) = _tmp180 + _tmp75;
    _result(39, 38) = _tmp119 + x2;
    _result(40, 38) = _tmp37;
    _result(45, 38) = _tmp79;
    _result(46, 38) = -_tmp37 - x4 - 3;
    _result(88, 38) = _tmp181;
    _result(91, 38) = _tmp166 + 1;
    _result(9, 39) = 2 - _tmp59;
    _result(10, 39) = _tmp182;
    _result(11, 39) = _tmp36;
    _result(37, 39) = -5;
    _result(38, 39) = _tmp166 + (Scalar(3)/Scalar(2))*x3;
    _result(39, 39) = _tmp182;
    _result(40, 39) = -_tmp58*x1;
    _result(41, 39) = _tmp81 + _tmp9;
    _result(45, 39) = _tmp115;
    _result(46, 39) = -_tmp169;
    _result(47, 39) = -x0*(_tmp35 - 1) - x2;
    _result(90, 39) = -1;
    _result(91, 39) = _tmp36*x2;
    _result(9, 40) = _tmp158 + _tmp60;
    _result(10, 40) = _tmp1*_tmp77;
    _result(11, 40) = _tmp66;
    _result(36, 40) = -2;
    _result(38, 40) = -_tmp36 - _tmp77;
    _result(39, 40) = _tmp23;
    _result(40, 40) = -_tmp149*_tmp22*x2 + x0;
    _result(41, 40) = x1*(_tmp17 + _tmp36);
    _result(45, 40) = -_tmp101 - _tmp178;
    _result(46, 40) = -x4*(_tmp183 + x0);
    _result(47, 40) = _tmp44*_tmp92;
    _result(89, 40) = _tmp184;
    _result(91, 40) = -_tmp185;
    _result(9, 41) = _tmp166/_tmp3;
    _result(10, 41) = _tmp114*x2;
    _result(11, 41) = _tmp186 + _tmp89;
    _result(36, 41) = _tmp32 + x0;
    _result(37, 41) = _tmp151;
    _result(39, 41) = _tmp187;
    _result(41, 41) = -_tmp187;
    _result(45, 41) = _tmp156;
    _result(46, 41) = _tmp167;
    _result(47, 41) = _tmp63;
    _result(89, 41) = x1 + Scalar(1.0);
    _result(90, 41) = _tmp82;
    _result(36, 42) = -_tmp21 + x4;
    _result(42, 42) = -_tmp90*(_tmp6 + x4) + x0;
    _result(46, 42) = -_tmp188;
    _result(47, 42) = -_tmp152*x4 + x2;
    _result(37, 43) = _tmp111;
    _result(43, 43) = -_tmp103;
    _result(45, 43) = _tmp62*x0;
    _result(47, 43) = _tmp141;
    _result(38, 44) = Scalar(-1.0);
    _result(44, 44) = -_tmp112*x4 - x4;
    _result(45, 44) = -Scalar(1.5)*x0 + Scalar(3.0)*x2;
    _result(46, 44) = -_tmp143 - _tmp189;
    _result(39, 45) = 4;
    _result(45, 45) = _tmp18 - _tmp62*x2 + x0;
    _result(40, 46) = -_tmp190/(_tmp77 - 2);
    _result(46, 46) = -_tmp191 - _tmp36;
    _result(41, 47) = -x2*(_tmp17 + _tmp35);
    _result(47, 47) = -_tmp121;
    _result(48, 48) = -_tmp172;
    _result(52, 48) = _tmp129;
    _result(53, 48) = 2;
    _result(58, 48) = _tmp14*x1;
    _result(59, 48) = _tmp34 + 3;
    _result(93, 48) = _tmp109*_tmp12*_tmp21*_tmp90;
    _result(96, 48) = _tmp147 + _tmp7;
    _result(49, 49) = _tmp192 - 6;
    _result(51, 49) = 1;
    _result(53, 49) = _tmp152 + _tmp45;
    _result(57, 49) = _tmp183 + _tmp36;
    _result(59, 49) = -_tmp118*(_tmp166 - 1);
    _result(94, 49) = _tmp9;
    _result(97, 49) = _tmp193;
    _result(50, 50) = -_tmp171 - _tmp92*x1;
    _result(51, 50) = _tmp119 + x0;
    _result(52, 50) = _tmp1*_tmp194;
    _result(57, 50) = x3;
    _result(58, 50) = _tmp77 + Scalar(1.0) / (_tmp95);
    _result(95, 50) = -_tmp96 - 4;
    _result(98, 50) = x2;
    _result(9, 51) = -2*_tmp81;
    _result(10, 51) = -_tmp98 - x2;
    _result(11, 51) = _tmp195 - 1;
    _result(49, 51) = _tmp126 + _tmp62;
    _result(50, 51) = -_tmp96 - x0;
    _result(51, 51) = Scalar(4.0);
    _result(53, 51) = _tmp196;
    _result(57, 51) = _tmp150;
    _result(58, 51) = _tmp163 + _tmp34;
    _result(59, 51) = _tmp37 - 6;
    _result(97, 51) = _tmp51;
    _result(98, 51) = _tmp170;
    _result(9, 52) = x0*(_tmp16 + x2);
    _result(10, 52) = 3;
    _result(11, 52) = _tmp197*_tmp81;
    _result(48, 52) = -_tmp118 - 2;
    _result(50, 52) = -_tmp198*x0;
    _result(51, 52) = -_tmp46 - _tmp87;
    _result(52, 52) = -_tmp12*_tmp71;
    _result(53, 52) = _tmp186*x3;
    _result(57, 52) = _tmp56*_tmp6;
    _result(58, 52) = _tmp170 + 8;
    _result(59, 52) = -x1*(_tmp79 + 1);
    _result(96, 52) = _tmp95*x0;
    _result(98, 52) = -x0*(_tmp17 + _tmp180);
    _result(9, 53) = -_tmp37 - _tmp45;
    _result(10, 53) = -_tmp138 - 2;
    _result(11, 53) = -Scalar(1)/Scalar(2)*_tmp116 - _tmp75;
    _result(48, 53) = _tmp176*x1;
    _result(49, 53) = _tmp108*_tmp11*_tmp28;
    _result(51, 53) = -_tmp35*x0;
    _result(52, 53) = -1/_tmp35;
    _result(53, 53) = _tmp3*x3;
    _result(57, 53) = -_tmp163 - Scalar(1)/Scalar(2)*_tmp80;
    _result(58, 53) = -x2*(_tmp17 + _tmp175);
    _result(59, 53) = _tmp121;
    _result(96, 53) = -_tmp76 - 4;
    _result(97, 53) = _tmp98 + x0;
    _result(48, 54) = _tmp199 - _tmp46;
    _result(54, 54) = _tmp166;
    _result(58, 54) = -4;
    _result(59, 54) = _tmp200;
    _result(49, 55) = -_tmp70*(_tmp20 + x3);
    _result(55, 55) = _tmp40;
    _result(57, 55) = _tmp12*_tmp181;
    _result(59, 55) = -x0/_tmp201;
    _result(50, 56) = Scalar(1.0) / (_tmp39);
    _result(56, 56) = _tmp151;
    _result(57, 56) = 4;
    _result(58, 56) = -_tmp45 - _tmp77;
    _result(51, 57) = _tmp160 + 1;
    _result(57, 57) = _tmp31*_tmp82 - 2;
    _result(52, 58) = -_tmp97;
    _result(58, 58) = x2;
    _result(53, 59) = -_tmp32*x0 - _tmp85;
    _result(59, 59) = x3*(-_tmp12*x4 + 2);
    _result(0, 60) = _tmp52;
    _result(1, 61) = -_tmp202 - _tmp67;
    _result(2, 62) = _tmp105 + _tmp149;
    _result(3, 63) = _tmp100 + _tmp17 + 2;
    _result(4, 64) = _tmp74;
    _result(5, 65) = _tmp159 - 4;
    _result(0, 66) = 2/_tmp163;
    _result(6, 66) = _tmp166*_tmp8 - 1;
    _result(1, 67) = _tmp179;
    _result(7, 67) = -x0/_tmp125;
    _result(2, 68) = 4;
    _result(8, 68) = -_tmp71;
    _result(3, 69) = _tmp42 + x0;
    _result(4, 69) = -2/(_tmp191 + _tmp32);
    _result(5, 69) = _tmp200;
    _result(9, 69) = _tmp196;
    _result(10, 69) = _tmp198;
    _result(11, 69) = _tmp34;
    _result(3, 70) = -x2*(_tmp0 - 2);
    _result(4, 70) = -_tmp174;
    _result(5, 70) = _tmp38 + _tmp68;
    _result(9, 70) = -_tmp110;
    _result(10, 70) = _tmp45 + _tmp89;
    _result(3, 71) = _tmp121*_tmp125;
    _result(4, 71) = -Scalar(2.5)*_tmp90;
    _result(5, 71) = -x2 + Scalar(1.0) / (_tmp4);
    _result(9, 71) = 2/_tmp9;
    _result(10, 71) = -1;
    _result(11, 71) = _tmp91;
    _result(6, 72) = Scalar(1.0)*x3 - 2;
    _result(10, 72) = _tmp11;
    _result(11, 72) = 3 - _tmp66;
    _result(18, 72) = 1 - _tmp197;
    _result(7, 73) = -_tmp203;
    _result(9, 73) = _tmp4 + x0;
    _result(11, 73) = 3;
    _result(19, 73) = _tmp72*_tmp82 + x2;
    _result(8, 74) = _tmp204;
    _result(9, 74) = _tmp28*x2/_tmp76 - 2;
    _result(10, 74) = -_tmp11*_tmp190;
    _result(20, 74) = x1/(_tmp20 - 2);
    _result(6, 75) = -_tmp201*x4;
    _result(10, 75) = -_tmp149;
    _result(11, 75) = _tmp205 + 1;
    _result(18, 75) = -_tmp10;
    _result(22, 75) = _tmp145;
    _result(23, 75) = _tmp125*(_tmp206 - 4);
    _result(75, 75) = -_tmp46*_tmp94 - x4;
    _result(78, 75) = x4;
    _result(7, 76) = _tmp79 + x4;
    _result(9, 76) = _tmp77 - 4;
    _result(11, 76) = _tmp52*x0 - _tmp53;
    _result(19, 76) = _tmp177*_tmp37;
    _result(21, 76) = x2*(x0 + 4);
    _result(23, 76) = -_tmp207*_tmp23;
    _result(76, 76) = _tmp165 + 6*x0;
    _result(78, 76) = x3 - 4/_tmp81;
    _result(8, 77) = _tmp101*_tmp28 + 1;
    _result(9, 77) = -_tmp9*x0;
    _result(10, 77) = -_tmp208*_tmp56;
    _result(20, 77) = -x2*(_tmp82 - 2);
    _result(21, 77) = _tmp149 + _tmp45;
    _result(22, 77) = -_tmp71*x0 - x4;
    _result(77, 77) = -_tmp175*_tmp81 + 1;
    _result(78, 77) = _tmp117 + _tmp171;
    _result(6, 78) = -_tmp56*_tmp57 - 4;
    _result(7, 78) = _tmp48;
    _result(8, 78) = 4;
    _result(9, 78) = _tmp173;
    _result(10, 78) = -_tmp57*x4;
    _result(11, 78) = -4;
    _result(18, 78) = -_tmp209 - x2;
    _result(19, 78) = _tmp209;
    _result(20, 78) = 1;
    _result(21, 78) = _tmp208;
    _result(22, 78) = _tmp60;
    _result(23, 78) = _tmp108*x3;
    _result(6, 79) = _tmp204;
    _result(10, 79) = _tmp162;
    _result(11, 79) = _tmp142;
    _result(30, 79) = 2*[&]() { const Scalar base = x1; return base * base * base; }();
    _result(7, 80) = _tmp159;
    _result(9, 80) = -_tmp70*x1;
    _result(11, 80) = _tmp91;
    _result(31, 80) = -_tmp88*x2;
    _result(8, 81) = _tmp203;
    _result(9, 81) = -_tmp180;
    _result(10, 81) = 2 - _tmp80;
    _result(32, 81) = -7*x0;
    _result(6, 82) = -x2*(_tmp39 + _tmp75 + _tmp77);
    _result(10, 82) = -_tmp67 - _tmp78;
    _result(11, 82) = _tmp149 + _tmp67;
    _result(30, 82) = _tmp107;
    _result(34, 82) = _tmp185*_tmp80;
    _result(35, 82) = -_tmp70 - _tmp75 + 2;
    _result(82, 82) = -2;
    _result(85, 82) = _tmp32;
    _result(7, 83) = _tmp0*x0;
    _result(9, 83) = _tmp104;
    _result(11, 83) = 4;
    _result(31, 83) = _tmp17 + _tmp42 + 4;
    _result(33, 83) = -x1/_tmp210;
    _result(35, 83) = -_tmp20*x0 + _tmp68;
    _result(83, 83) = -Scalar(0.5)*x3;
    _result(85, 83) = -x1/(_tmp211 + x2);
    _result(8, 84) = -_tmp124 - 1;
    _result(9, 84) = _tmp93*x4;
    _result(10, 84) = _tmp24 + 1;
    _result(32, 84) = _tmp4 + _tmp88;
    _result(33, 84) = (Scalar(1)/Scalar(4))*_tmp11;
    _result(34, 84) = -_tmp159;
    _result(84, 84) = -_tmp80 - 1;
    _result(85, 84) = -_tmp21*_tmp35 - x3;
    _result(6, 85) = _tmp164;
    _result(7, 85) = _tmp199 + _tmp23 + _tmp30;
    _result(8, 85) = -_tmp48*x4;
    _result(9, 85) = -_tmp12/_tmp1;
    _result(10, 85) = _tmp66;
    _result(11, 85) = 1;
    _result(30, 85) = -x1*(_tmp61 + 2) + 2;
    _result(31, 85) = _tmp39 + Scalar(4.0)*x2;
    _result(32, 85) = 3;
    _result(33, 85) = _tmp118*_tmp84;
    _result(34, 85) = -x3*(_tmp66*x4 - 4);
    _result(35, 85) = _tmp209;
    _result(6, 86) = _tmp189 + 4;
    _result(10, 86) = _tmp205*_tmp71;
    _result(11, 86) = _tmp184*_tmp56;
    _result(42, 86) = _tmp16 + x0;
    _result(7, 87) = _tmp0;
    _result(9, 87) = -_tmp69*x1;
    _result(11, 87) = _tmp101*x0 + _tmp67;
    _result(43, 87) = -_tmp12 - _tmp48;
    _result(8, 88) = -x3/(_tmp192 + x2);
    _result(9, 88) = _tmp23*_tmp41;
    _result(10, 88) = _tmp75 + _tmp81 + 2;
    _result(44, 88) = -x3*(_tmp104 + _tmp45);
    _result(6, 89) = _tmp37*(_tmp34 - 1);
    _result(10, 89) = -_tmp32*x1;
    _result(11, 89) = -_tmp207;
    _result(42, 89) = 1 - _tmp24;
    _result(46, 89) = _tmp211 + Scalar(-2.0);
    _result(47, 89) = 4*_tmp28 - 2;
    _result(89, 89) = _tmp139;
    _result(92, 89) = _tmp23 - 3;
    _result(7, 90) = 5 - x2;
    _result(9, 90) = _tmp156 + x0;
    _result(11, 90) = -_tmp28*_tmp46;
    _result(43, 90) = _tmp80;
    _result(45, 90) = Scalar(2.0);
    _result(47, 90) = _tmp31 + 3;
    _result(90, 90) = _tmp177*x2 - _tmp23;
    _result(92, 90) = -_tmp161;
    _result(8, 91) = _tmp8;
    _result(9, 91) = -_tmp50*_tmp97;
    _result(10, 91) = x4*(_tmp104 + _tmp75);
    _result(44, 91) = -_tmp191;
    _result(45, 91) = -x0/_tmp123;
    _result(46, 91) = -_tmp202;
    _result(91, 91) = Scalar(-1.0);
    _result(92, 91) = -_tmp12*_tmp155;
    _result(6, 92) = _tmp23 + _tmp9;
    _result(7, 92) = -_tmp113 - x0;
    _result(8, 92) = x0;
    _result(9, 92) = 2 - _tmp41;
    _result(10, 92) = _tmp28*x4/_tmp137;
    _result(11, 92) = Scalar(-8.0);
    _result(42, 92) = _tmp67;
    _result(43, 92) = _tmp25*_tmp56*x1;
    _result(44, 92) = -2*_tmp41;
    _result(45, 92) = _tmp212;
    _result(46, 92) = _tmp188 + 2;
    _result(47, 92) = -_tmp13;
    _result(6, 93) = 4;
    _result(10, 93) = -x0*(_tmp206 + _tmp67);
    _result(11, 93) = Scalar(1.0);
    _result(7, 94) = _tmp23 + _tmp73;
    _result(9, 94) = x3/(_tmp128 + 1);
    _result(11, 94) = _tmp132;
    _result(55, 94) = -_tmp65*x0 - 1;
    _result(8, 95) = _tmp32*x4;
    _result(9, 95) = -_tmp96*x3;
    _result(10, 95) = -_tmp195;
    _result(56, 95) = _tmp32 + x2;
    _result(6, 96) = -_tmp171;
    _result(10, 96) = Scalar(2.0);
    _result(11, 96) = _tmp106 + _tmp140;
    _result(54, 96) = -_tmp37 - _tmp62;
    _result(58, 96) = _tmp153 + _tmp42;
    _result(59, 96) = -_tmp4 - _tmp56;
    _result(96, 96) = Scalar(-0.5);
    _result(99, 96) = -_tmp53*_tmp71;
    _result(7, 97) = _tmp41;
    _result(9, 97) = _tmp102;
    _result(11, 97) = _tmp150/_tmp41;
    _result(55, 97) = -_tmp140 - _tmp87 - 4;
    _result(57, 97) = -_tmp63 - _tmp77;
    _result(59, 97) = _tmp194 - _tmp46;
    _result(97, 97) = -_tmp166*_tmp9;
    _result(99, 97) = x2*(x0 + x1) - 2;
    _result(8, 98) = _tmp37 + 8*x0;
    _result(9, 98) = -_tmp131*x2;
    _result(10, 98) = -_tmp41*_tmp56;
    _result(56, 98) = -_tmp212;
    _result(57, 98) = -x2*(_tmp48*x3 + 2);
    _result(58, 98) = _tmp193;
    _result(98, 98) = _tmp157 + _tmp166;
    _result(99, 98) = _tmp0 - x2;
    _result(6, 99) = _tmp94*x3;
    _result(7, 99) = -_tmp36 - _tmp37;
    _result(8, 99) = Scalar(4.0);
    _result(9, 99) = _tmp30 + _tmp71;
    _result(10, 99) = _tmp82 + x3;
    _result(11, 99) = -_tmp79*_tmp85;
    _result(54, 99) = -1/(_tmp36 + _tmp67);
    _result(55, 99) = _tmp95;
    _result(56, 99) = -Scalar(1.0)*x1;
    _result(57, 99) = _tmp127;
    _result(58, 99) = -_tmp118 - _tmp210 - _tmp26;
    _result(59, 99) = -_tmp30 - _tmp89;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym