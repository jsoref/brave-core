// Copyright (c) 2020 The Brave Authors. All rights reserved.
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this file,
// you can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef BRAVE_BROWSER_NTP_SPONSORED_IMAGES_VIEW_COUNTER_MODEL_H_
#define BRAVE_BROWSER_NTP_SPONSORED_IMAGES_VIEW_COUNTER_MODEL_H_

class ViewCounterModel {
 public:
  ViewCounterModel();
  ~ViewCounterModel();

  ViewCounterModel(const ViewCounterModel&) = delete;
  ViewCounterModel& operator=(const ViewCounterModel&) = delete;

  int current_wallpaper_image_index() const {
    return current_wallpaper_image_index_;
  }

  void set_total_image_count(int count) { total_image_count_ = count; }

  bool ShouldShowBrandedWallpaper() const;
  void RegisterPageView();
  void Reset();

 private:
  int current_wallpaper_image_index_ = 0;
  int count_to_branded_wallpaper_;
  int total_image_count_ = -1;
};

#endif  // BRAVE_BROWSER_NTP_SPONSORED_IMAGES_VIEW_COUNTER_MODEL_H_
