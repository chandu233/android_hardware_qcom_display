/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

namespace pxlw {

class IrisFeature {
 public:
  static IrisFeature *getInstance();

  ~IrisFeature() = default;

  bool hasSoftIris();

 private:
  IrisFeature() = default;

  IrisFeature(const IrisFeature &) = delete;
  IrisFeature &operator=(const IrisFeature &) = delete;
  IrisFeature(IrisFeature &&) = delete;
  IrisFeature &operator=(IrisFeature &&) = delete;
};

}  // namespace pxlw
