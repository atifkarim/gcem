/*################################################################################
  ##
  ##   Copyright (C) 2016-2018 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#include <cmath>
#include <iostream>
#include <iomanip>
#include "gcem.hpp"

int main()
{
    constexpr long double x1 = 0.5;
    long double x2 = x1;

    constexpr int x1_pow = 2;
    int x2_pow = x1_pow;

    constexpr long double x3 = 1.5;
    long double x4 = x3;

    constexpr double x3_pow = 0.99;
    double x4_pow = x3_pow;

    constexpr long double x5 = 0.199900000000000208L;
    long double x6 = x5;

    constexpr double x5_pow = 3.05;
    double x6_pow = x5_pow;

    constexpr long double x7 = 41.5;
    long double x8 = x7;

    constexpr int x7_pow = 7;
    int x8_pow = x7_pow;

    std::cout << "\n*** begin pow test ***\n" << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_pow(" << x1 << "," << x1_pow << ") = " << std::setprecision(18) << gcem::pow(x1,x1_pow) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_pow(" << x2 << "," << x2_pow << ")  = " << std::setprecision(18) << std::pow(x2,x2_pow)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_pow(" << x3 << "," << x3_pow << ") = " << std::setprecision(18) << gcem::pow(x3,x3_pow) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_pow(" << x4 << "," << x4_pow << ")  = " << std::setprecision(18) << std::pow(x4,x4_pow)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_pow(" << x5 << "," << x5_pow <<") = " << std::setprecision(18) << gcem::pow(x5,x5_pow) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_pow(" << x6 << "," << x6_pow <<")  = " << std::setprecision(18) << std::pow(x6,x6_pow)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_pow(" << x7 << "," << x7_pow << ") = " << std::setprecision(18) << gcem::pow(x7,x7_pow) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_pow(" << x8 << "," << x8_pow << ")  = " << std::setprecision(18) << std::pow(x8,x8_pow)  << std::endl;

    std::cout << "\n*** end pow test ***\n" << std::endl;

    return 0;
}
