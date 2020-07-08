//  -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <vector>
#include <Eigen/Dense>

#include <cam/atan_camera_cal.h>

namespace cam {
namespace atan_camera_cal {

/**
 * C++ StorageOps implementation for <class 'symforce.cam.atan_camera_cal.ATANCameraCal'>.
 */
template <typename Scalar>
struct StorageOps {
  static constexpr int32_t StorageDim() {
    return 5;
  }

  static void ToStorage(const cam::ATANCameraCal<Scalar>& a, std::vector<Scalar>* vec);
  static cam::ATANCameraCal<Scalar> FromStorage(const std::vector<Scalar>& vec);
};

}  // namespace atan_camera_cal
}  // namespace cam

// Wrapper to specialize the public concept
namespace geo {

template <>
struct StorageOps<cam::ATANCameraCal<double>> : public cam::atan_camera_cal::StorageOps<double> {};
template <>
struct StorageOps<cam::ATANCameraCal<float>> : public cam::atan_camera_cal::StorageOps<float> {};

}  // namespace geo
