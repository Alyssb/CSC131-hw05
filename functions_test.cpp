/**
 * CSC131 - Computational Thinking
 * Missouri State University, Spring 2018.
 *
 * @brief Unit tests for HW#5.
 * DO NOT MODIFY THIS FILE!
 * IF THIS FILE IS MODIFIED WITHOUT PERMISSION OF YOUR INSTRUCTOR, YOU WILL NOT RECEIVE ANY CREDIT FOR THIS ASSIGNMENT!
 * @file functions_test.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "functions.h"

/** Some useful constants for these simple unit tests */
const double TOLERANCE{0.000001};
const double FUTURE_VALUE{10000};
const double PRESENT_VALUE{10000};
const double LOW_APR{0.01};
const double HIGH_APR{0.105};
const double LOW_MONTHLY_RATE{LOW_APR / 12};
const double HIGH_MONTHLY_RATE{HIGH_APR / 12};
const int SMALL_NUM_YEARS{5};
const int SMALL_NUM_MONTHS{SMALL_NUM_YEARS * 12};
const int LARGE_NUM_YEARS{30};
const int LARGE_NUM_MONTHS{LARGE_NUM_YEARS * 12};

/** Reusable variables for each test */
double expectedValue{};
double actualValue{};

/** Forward declarations of unit tests */
bool presentValueUnitTest1();
bool presentValueUnitTest2();
bool presentValueUnitTest3();
bool presentValueUnitTest4();
bool futureValueUnitTest1();
bool futureValueUnitTest2();
bool futureValueUnitTest3();
bool futureValueUnitTest4();

int main()
{
#if PRESENT_VALUE_DEFINED
    std::cout << "Pass presentValueUnitTest1? " << (presentValueUnitTest1() ? "Yes" : "No") << std::endl;
    std::cout << "Pass presentValueUnitTest2? " << (presentValueUnitTest2() ? "Yes" : "No") << std::endl;
    std::cout << "Pass presentValueUnitTest3? " << (presentValueUnitTest3() ? "Yes" : "No") << std::endl;
    std::cout << "Pass presentValueUnitTest4? " << (presentValueUnitTest4() ? "Yes" : "No") << std::endl;
#endif

#if FUTURE_VALUE_DEFINED
    std::cout << "Pass futureValueUnitTest1? " << (futureValueUnitTest1() ? "Yes" : "No") << std::endl;
    std::cout << "Pass futureValueUnitTest2? " << (futureValueUnitTest2() ? "Yes" : "No") << std::endl;
    std::cout << "Pass futureValueUnitTest3? " << (futureValueUnitTest3() ? "Yes" : "No") << std::endl;
    std::cout << "Pass futureValueUnitTest4? " << (futureValueUnitTest4() ? "Yes" : "No") << std::endl;
#endif

    return EXIT_SUCCESS;
}

#if PRESENT_VALUE_DEFINED
bool presentValueUnitTest1()
{
    expectedValue = 9514.656876;
    actualValue = presentValue(FUTURE_VALUE, LOW_APR, SMALL_NUM_YEARS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}

bool presentValueUnitTest2()
{
    expectedValue = 7419.229178;
    actualValue = presentValue(FUTURE_VALUE, LOW_APR, LARGE_NUM_YEARS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}

bool presentValueUnitTest3()
{
    expectedValue = 6069.998865;
    actualValue = presentValue(FUTURE_VALUE, HIGH_APR, SMALL_NUM_YEARS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}

bool presentValueUnitTest4()
{
    expectedValue = 500.186147;
    actualValue = presentValue(FUTURE_VALUE, HIGH_APR, LARGE_NUM_YEARS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}
#endif

#if FUTURE_VALUE_DEFINED
bool futureValueUnitTest1()
{
    expectedValue = 10512.492073;
    actualValue = futureValue(PRESENT_VALUE, LOW_MONTHLY_RATE, SMALL_NUM_MONTHS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}

bool futureValueUnitTest2()
{
    expectedValue = 13496.901794;
    actualValue = futureValue(PRESENT_VALUE, LOW_MONTHLY_RATE, LARGE_NUM_MONTHS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}

bool futureValueUnitTest3()
{
    expectedValue = 16866.029818;
    actualValue = futureValue(PRESENT_VALUE, HIGH_MONTHLY_RATE, SMALL_NUM_MONTHS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}

bool futureValueUnitTest4()
{
    expectedValue = 230185.086616;
    actualValue = futureValue(PRESENT_VALUE, HIGH_MONTHLY_RATE, LARGE_NUM_MONTHS);
    return abs(expectedValue - actualValue) < TOLERANCE;
}
#endif
