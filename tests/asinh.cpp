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
    std::cout << "\n*** begin asinh test ***\n" << std::endl;

    constexpr long double x1 = 0.0;
    long double x2 = x1;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_asinh(" << x1 <<") = " << std::setprecision(18) << gcem::asinh(x1) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_asinh(" << x1 <<")  = " << std::setprecision(18) << std::asinh(x2) << std::endl;
    std::cout << std::endl;
    
    constexpr long double x3 = 0.001;
    long double x4 = x3;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << "gcem_asinh(" << x3 <<") = " << std::setprecision(18) << gcem::asinh(x3) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << "std_asinh(" << x3 <<")  = " << std::setprecision(18) << std::asinh(x4) << std::endl;
    std::cout << std::endl;

    constexpr long double x5 = 1.001;
    long double x6 = x5;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_asinh(" << x5 <<") = " << std::setprecision(18) << gcem::asinh(x5) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_asinh(" << x5 <<")  = " << std::setprecision(18) << std::asinh(x6) << std::endl;
    std::cout << std::endl;

    constexpr long double x7 = 1.5;
    long double x8 = x7;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_asinh(" << x7 <<") = " << std::setprecision(18) << gcem::asinh(x7) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_asinh(" << x7 <<")  = " << std::setprecision(18) << std::asinh(x8) << std::endl;
    std::cout << std::endl;

    constexpr long double x9 = 11.1;
    long double x10 = x9;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_asinh(" << x9 <<") = " << std::setprecision(18) << gcem::asinh(x9) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_asinh(" << x9 <<")  = " << std::setprecision(18) << std::asinh(x10) << std::endl;
    std::cout << std::endl;

    constexpr long double x11 = 50.0;
    long double x12 = x11;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_asinh(" << x11 <<") = " << std::setprecision(18) << gcem::asinh(x11) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_asinh(" << x11 <<")  = " << std::setprecision(18) << std::asinh(x12) << std::endl;
    std::cout << std::endl;

    constexpr long double x13 = - 1.5;
    long double x14 = x13;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_asinh(" << x13 <<") = " << std::setprecision(18) << gcem::asinh(x13) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_asinh(" << x13 <<")  = " << std::setprecision(18) << std::asinh(x14) << std::endl;

    std::cout << "\n*** end asinh test ***\n" << std::endl;

    return 0;
}
