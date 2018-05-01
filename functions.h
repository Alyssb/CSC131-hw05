/**
 * CSC131 - Computational Thinking
 * Missouri State University, Spring 2018.
 *
 * @brief Header file containing the implementation of functions used in Homework 5.
 * @file functions.h
 * @authors Alyssa Slayton <ajs41@missouristate.edu>
 */

#ifndef HW05_FUNCTIONS_H
#define HW05_FUNCTIONS_H
#define PRESENT_VALUE_DEFINED true

/**
 * An implementation of the present value function.
 * Note: To earn full credit, each parameter must be passed by constant reference.
 *
 * @param F The future value that you want in the account.
 * @param r The annual interest rate (expressed in decimal form, such as 0.042).
 * @param n The number of years that you plan to let the money sit in the account.
 * @return The present value, or the amount that you need to deposit today,
 * is returned.
 */
 class presentValue{
 public:
     double P() const;
     explicit presentValue(double future = 100, double rate = .01, double years = 10);
     void setFuture(const double &future);
     void setRate(const double &rate);
     void setYears(const double & years);

 private:
    double F;
    double r;
    double n;
 };

#define FUTURE_VALUE_DEFINED true

/**
 * An implementation of the future value function.
 * Note: To earn full credit, each parameter must be passed by constant reference.
 * @param P The present value of the account.
 * @param i The monthly interest rate.
 * @param t The number of months.
 * @return The future value of the account after the specified time period, is
 * returned.
 */
class futureValue{
public:
    double F() const;
    explicit futureValue(double current = 10, double rate = .01, double months = 10);
    void setFuture(const double &current);
    void setRate(const double &rate);
    void setMonths(const double &months);

private:

    double P;
    double i;
    double t;
};

#endif // HW05_FUNCTIONS_H
