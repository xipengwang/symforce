//  ----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include <algorithm>
#include <cmath>

#include "./lie_group_ops.h"

namespace geo {
namespace rot2 {

template <typename Scalar>
geo::Rot2<Scalar> LieGroupOps<Scalar>::FromTangent(const Eigen::Matrix<Scalar, 1, 1>& vec, const Scalar epsilon) {
    // Input arrays

    // Intermediate terms (0)

    // Output terms (1)
    Eigen::Matrix<Scalar, 2, 1> _res;

    _res[0] = std::cos(vec(0, 0));
    _res[1] = std::sin(vec(0, 0));


    return geo::Rot2<Scalar>(_res);
}

template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> LieGroupOps<Scalar>::ToTangent(const geo::Rot2<Scalar>& a, const Scalar epsilon) {
    // Input arrays
    const Eigen::Matrix<Scalar, 2, 1>& _a = a.Data();

    // Intermediate terms (0)

    // Output terms (1)
    Eigen::Matrix<Scalar, 1, 1> _res;

    _res(0, 0) = std::atan2(_a[1], _a[0]);


    return _res;
}

template <typename Scalar>
geo::Rot2<Scalar> LieGroupOps<Scalar>::Retract(const geo::Rot2<Scalar>& a, const Eigen::Matrix<Scalar, 1, 1>& vec, const Scalar epsilon) {
    // Input arrays
    const Eigen::Matrix<Scalar, 2, 1>& _a = a.Data();

    // Intermediate terms (2)
    const Scalar _tmp0 = std::sin(vec(0, 0));
    const Scalar _tmp1 = std::cos(vec(0, 0));

    // Output terms (1)
    Eigen::Matrix<Scalar, 2, 1> _res;

    _res[0] = _a[0]*_tmp1 - _a[1]*_tmp0;
    _res[1] = _a[0]*_tmp0 + _a[1]*_tmp1;


    return geo::Rot2<Scalar>(_res);
}

template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> LieGroupOps<Scalar>::LocalCoordinates(const geo::Rot2<Scalar>& a, const geo::Rot2<Scalar>& b, const Scalar epsilon) {
    // Input arrays
    const Eigen::Matrix<Scalar, 2, 1>& _a = a.Data();
    const Eigen::Matrix<Scalar, 2, 1>& _b = b.Data();

    // Intermediate terms (3)
    const Scalar _tmp0 = 1.0 / ((_a[0] * _a[0]) + (_a[1] * _a[1]));
    const Scalar _tmp1 = _a[0]*_tmp0;
    const Scalar _tmp2 = _a[1]*_tmp0;

    // Output terms (1)
    Eigen::Matrix<Scalar, 1, 1> _res;

    _res(0, 0) = std::atan2(-_b[0]*_tmp2 + _b[1]*_tmp1, _b[0]*_tmp1 + _b[1]*_tmp2);


    return _res;
}


}  // namespace rot2
}  // namespace geo

// Explicit instantiation
template struct geo::rot2::LieGroupOps<double>;
template struct geo::rot2::LieGroupOps<float>;
