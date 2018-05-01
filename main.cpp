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

/**
 * TODO: Create function prototypes for any functions you'll implement below
 * main that you'll call from main.
 */
enum class MainMenuItem{PRESENT_OPTION = 1, FUTURE_OPTION = 2, QUIT = 3};
enum class PresentMenuItem{FUTURE_VALUE = 1, INTEREST_RATE = 2, NUMBER_YEARS = 3,
    CALCULATE_VALUE = 4, RETURN = 5, QUIT = 6};
enum class FutureMenuItem{PRESENT_VALUE = 1, INTEREST_RATE = 2, NUMBER_YEARS = 3,
    CALCULATE_VALUE = 4, RETURN = 5, QUIT = 6};

MainMenuItem displayMainMenu();
void displayCurrentSubmenu();
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
    /**
     * TODO: Implement a menu driven program.
     *
     * At the highest level, provide three menu items:
     * 1. Select this option to experiment with the present value function.
     * 2. Select this option to experiment with the future value function.
     * 3. Select this option to end this program.
     *
     * If the user selects option 1 of the high-level menu, then present
     * a secondary menu that has five menu items:
     * 1. Select this option to enter the future value
     * 2. Select this option to enter the annual interest rate
     * 3. Select this option to enter the number of years
     * 4. Select this option to calculate and display the present value.
     * 5. Select this option to go back to the high-level menu
     *
     * If the user selects option 2 of the high-level menu, then present a
     * secondary menu that has five menu items:
     * 1. Select this option to enter the present value
     * 2. Select this option to enter the monthly interest rate
     * 3. Select this option to enter the number of months
     * 4. Select this option to calculate and display the future value.
     * 5. Select this option to go back to the high-level menu
     *
     * If the user select option 3 of the high-level menu, the ask the user if
     * they are sure they want to quit.
     * 1. If the user does not want to quit, the high-level menu is displayed
     * 2. If the user really does want to quit, the program ends.
     *
     * Strive for modularity, i.e., do not have a bloated main function; points
     * will be deducted if you don't make use
     * of a modular approach.
     */
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
            displayCurrentSubmenu();
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

}

presentValue::presentValue(double future, double rate, double years) {
    setFunction(future, rate, years);
}

void presentValue::setFunction(const double &future, const double &rate, const double &years)
{
    F = future;
    r = rate;
    n = years;
}

double presentValue::P() const
{
    return F /(pow((1+r),n));
}

futureValue::futureValue(double current, double rate, double months) {
    setFunction(current, rate, months);
}

void futureValue::setFunction(const double &current, const double &rate, const double &months)
{
    P = current;
    i = rate;
    t = months;
}

double futureValue::P() const
{
    return P * pow(1+i,t);
}

/**
 * TODO: Implement any helper functions specified in your forward declarations
 * that precede the main function here.
 * Erase this multi-line comment when you have finished implementing your helper
 * functions.
 */
