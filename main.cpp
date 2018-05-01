/**
 * CSC131 - Computational Thinking
 * Missouri State University, Spring 2018.
 *
 * @brief Entry point for the functions driver of Homework 5.
 * @file main.cpp
 * @authors Alyssa Slayton <ajs41@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include "functions.h"

enum class MainMenuItem{PRESENT_OPTION = 1, FUTURE_OPTION = 2, QUIT = 3};
enum class PresentMenuItem{FUTURE_VALUE = 1, INTEREST_RATE = 2, NUMBER_YEARS = 3,
    CALCULATE_VALUE = 4, RETURN = 5};
enum class FutureMenuItem{PRESENT_VALUE = 1, INTEREST_RATE = 2, NUMBER_MONTHS = 3,
    CALCULATE_VALUE = 4, RETURN = 5};
enum class QuitMenuItem{QUIT = 1, STAY_OPTION = 2};

MainMenuItem displayMainMenu();
void displayPresentSubmenu();
void displayFutureSubmenu();
void displayQuitSubmenu();

/**
 * The entry point for this application.
 * @return EXIT_SUCCESS is returned upon successful execution of this program.
 */
int main()
{
    MainMenuItem selectedOption;

    do {
        selectedOption = displayMainMenu();
    } while (selectedOption !=MainMenuItem::QUIT);

    return EXIT_SUCCESS;
}

MainMenuItem displayMainMenu(){
    std::cout << "1. Select this option to experiment with the present value function\n";
    std::cout << "2. Select this option to experiment with the future value function\n";
    std::cout << "3. select this option to end this program.\n\n";

    unsigned short selection;
    std::cin >> selection;

    switch (selection) {
        case static_cast<unsigned short>(MainMenuItem::PRESENT_OPTION):
            displayPresentSubmenu();
            break;
        case static_cast<unsigned short>(MainMenuItem::FUTURE_OPTION):
            displayFutureSubmenu();
            break;
        case static_cast<unsigned short>(MainMenuItem::QUIT):
            displayQuitSubmenu();
            break;
    }
    return static_cast <MainMenuItem>(selection);
}

void displayQuitSubmenu() {
    std::cout << "Are you sure you want to quit?\n";
    std::cout << "1. yes\n";
    std::cout << "2. no\n\n";

    unsigned short quitSelection;
    std::cin >> quitSelection;

    switch (quitSelection) {
        case static_cast<unsigned short> (QuitMenuItem::STAY_OPTION):
            displayMainMenu();
            break;
        case static_cast<unsigned short>(QuitMenuItem::QUIT):
            break;
    }
}

void displayPresentSubmenu() {

    unsigned short selection{0};
    presentValue val{};
    double future{};
    double rate{};
    double years{};

    PresentMenuItem menuItem;
    do {
        std::cout << "1. Select this option to enter the future value\n";
        std::cout << "2. Select this option to enter the annual interest rate\n";
        std::cout << "3. Select this option to enter the number of years\n";
        std::cout << "4. Select this option to calculate and display the needed value\n";
        std::cout << "5. Select this option to return to the main menu\n\n";
        std::cin >> selection;
        menuItem = static_cast<PresentMenuItem>(selection);

        switch (menuItem) {
            case PresentMenuItem::FUTURE_VALUE:
                std::cout << "What is the desired amount in the future?\n";
                std::cin >> future;
                val.setFuture(future);
                break;
            case PresentMenuItem::INTEREST_RATE:
                std::cout << "What is your interest rate?\n";
                std::cin >> rate;
                val.setRate(rate);
                break;
            case PresentMenuItem::NUMBER_YEARS:
                std::cout << "How long will it take?\n";
                std::cin >> years;
                val.setYears(years);
                break;
            case PresentMenuItem::CALCULATE_VALUE:
                std::cout << "\nYou would need to deposit "
                          << val.P()
                          << " dollars rignt now to achieve that.\n";
                break;
            case PresentMenuItem::RETURN:
                break;
        }

    } while (menuItem!=PresentMenuItem::RETURN);

}

void displayFutureSubmenu() {
    unsigned short selection{0};
    futureValue val{};
    double future{};
    double rate{};
    double months{};

    FutureMenuItem menuItem;
    do {
        std::cout << "1. Select this option to enter the present value.\n";
        std::cout << "2. Select this option to enter the monthly interest rate.\n";
        std::cout << "3. Select this option to enter the number of months.\n";
        std::cout << "4. Select this option to calculate and display the future value\n";
        std::cout << "5. Select this option to return to the main menu.\n";
        std::cin >> selection;
        menuItem = static_cast<FutureMenuItem>(selection);

        switch (menuItem) {
            case FutureMenuItem::PRESENT_VALUE:
                std::cout << "How much is currently stored?\n";
                std::cin >> future;
                val.setFuture(future);
                break;
            case FutureMenuItem::INTEREST_RATE:
                std::cout << "What is your interest rate?\n";
                std::cin >> rate;
                val.setRate(rate);
                break;
            case FutureMenuItem::NUMBER_MONTHS:
                std::cout << "How far do you want to check?\n";
                std::cin >> months;
                val.setMonths(months);
                break;
            case FutureMenuItem::CALCULATE_VALUE:
                std::cout << "\nYou will have "
                          << val.F()
                          << " dollars in "
                             << months
                          << " months.\n";
                break;
            case FutureMenuItem::RETURN:
                break;
        }

    } while (menuItem!=FutureMenuItem::RETURN);
}

presentValue::presentValue(double future, double rate, double years) {
    setFuture(future);
    setRate(rate);
    setYears(years);
}

void presentValue::setFuture(const double &future)
{
    F = future;
}

void presentValue::setRate(const double &rate) {
    r = rate;
}

void presentValue::setYears(const double &years) {
    n = years;
}

double presentValue::P() const
{
    return F /(pow((1+r),n));
}

futureValue::futureValue(double current, double rate, double months) {
    setFuture(current);
    setRate(rate);
    setMonths(months);
}

void futureValue::setFuture(const double &current)
{
    P = current;
}

void futureValue::setRate(const double &rate) {
    i = rate;
}

void futureValue::setMonths(const double &months) {
    t = months;
}

double futureValue::F() const
{
    return P * pow(1+i,t);
}