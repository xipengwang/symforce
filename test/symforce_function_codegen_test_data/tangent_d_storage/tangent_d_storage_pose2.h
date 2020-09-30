// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>

#include <geo/pose2.h>


namespace sym {


/**
* Computes the jacobian of the tangent space around an element with respect to the storage space of
* that element.
*
*/
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 4> Tangent_D_Storage(const geo::Pose2<Scalar>& a, const Scalar epsilon) {
    // Input arrays
    const Eigen::Matrix<Scalar, 4, 1>& _a = a.Data();

    // Intermediate terms (1)
    const Scalar _tmp0 = -_a[1];

    // Output terms (1)
    Eigen::Matrix<Scalar, 3, 4> _res;

    _res(0, 0) = 0;
    _res(0, 1) = 0;
    _res(0, 2) = _a[0];
    _res(0, 3) = _a[1];
    _res(1, 0) = 0;
    _res(1, 1) = 0;
    _res(1, 2) = _tmp0;
    _res(1, 3) = _a[0];
    _res(2, 0) = _tmp0;
    _res(2, 1) = _a[0];
    _res(2, 2) = 0;
    _res(2, 3) = 0;


    return _res;
}

}  // namespace sym
