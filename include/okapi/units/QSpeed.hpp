/**
 * @author Mikhail Semenov
 * @author Benjamin Jurke
 * @author Ryan Benasutti, WPI
 *
 * This code is a modified version of Benjamin Jurke's work in 2015. You can read his blog post
 * here:
 * https://benjaminjurke.com/content/articles/2015/compile-time-numerical-unit-dimension-checking/
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _OKAPI_QSPEED_HPP_
#define _OKAPI_QSPEED_HPP_

#include "okapi/units/QLength.hpp"
#include "okapi/units/QTime.hpp"
#include "okapi/units/RQuantity.hpp"

QUANTITY_TYPE(0, 1, -1, 0, QSpeed)

constexpr QSpeed mps = meter / second;
constexpr QSpeed miph = mile / hour;
constexpr QSpeed kmph = kilometer / hour;

constexpr QSpeed operator"" _mps(long double x) {
  return static_cast<double>(x) * mps;
}
constexpr QSpeed operator"" _miph(long double x) {
  return static_cast<double>(x) * mile / hour;
}
constexpr QSpeed operator"" _kmph(long double x) {
  return static_cast<double>(x) * kilometer / hour;
}
constexpr QSpeed operator"" _mps(unsigned long long int x) {
  return static_cast<double>(x) * mps;
}
constexpr QSpeed operator"" _miph(unsigned long long int x) {
  return static_cast<double>(x) * mile / hour;
}
constexpr QSpeed operator"" _kmph(unsigned long long int x) {
  return static_cast<double>(x) * kilometer / hour;
}

#endif
