//===- Passes.h - Pass Entrypoints ------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This header file defines prototypes that expose pass constructors.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_DIALECT_LOOPOPS_PASSES_H_
#define MLIR_DIALECT_LOOPOPS_PASSES_H_

#include "llvm/ADT/ArrayRef.h"
#include <memory>

namespace mlir {

class Pass;

/// Creates a loop fusion pass which fuses parallel loops.
std::unique_ptr<Pass> createParallelLoopFusionPass();

/// Creates a pass which tiles innermost parallel loops.
std::unique_ptr<Pass>
createParallelLoopTilingPass(llvm::ArrayRef<int64_t> tileSize = {});

} // namespace mlir

#endif // MLIR_DIALECT_LOOPOPS_PASSES_H_
