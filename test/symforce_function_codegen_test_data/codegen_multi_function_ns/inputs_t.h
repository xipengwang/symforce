// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <array>

#include "./storage_ops.h"

#include "inputs_constants_t.h"
#include "inputs_states_t.h"

namespace codegen_multi_function_ns {

class inputs_t {
 public:
  double x{};
  double y{};
  std::array<double, 4> rot{};
  inputs_constants_t constants{};
  inputs_states_t states{};
};

}  // namespace codegen_multi_function_ns

// Include StorageOps specialization
#include "./storage_ops/inputs_t.h"