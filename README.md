# HW 5 - Working with Functions in C++

## Introduction

This homework assignment has you implementing and using two functions as prescribed in Programming Challenges 11 and 12 found on page 402 of your C++ textbook.

### Programming Challenge 11 - Present Value

Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for the next 10 years. At the end of the 10 years you would like to have $10,000 in the account. How much do you need to deposit today to make that happen? To find out you can use the following formula, which is known as the _present value formula_:

![pvf.png]

The terms in the formula are as follows:

* _P_ is the **present value**, or the amount that you need to deposit today.
* _F_ is the **future value** that you want in the account (in this case, $10,000).
* _r_ is the **annual interest rate** (expressed in decimal form, such as 0.042).
* _n_ is the **number of years** that you plan to let the money sit in the account.

Write a program with a function named `presentValue` that performs this calculation. The function should accept the future value, annual interest rate, and number of years as arguments (passed by constant reference). It should return the present value, which is the amount that you need to deposit today. Demonstrate the function in a program that lets the user experiment with different values for the formula's terms.

### Programming Challenge 12 - Future Value

Suppose you have a certain amount of money in a savings account that earns compound monthly interest, and you want to calculate the amount that you will have after a specific number of months. The formula, which is known as the _future value formula_, is:

![fvf.png]

The variables in the formula are as follows:

* _F_ is the **future value** of the account after the specified time period.
* _P_ is the **present value** of the account.
* _i_ is the **monthly interest rate**.
* _t_ is the **number of months**.

Write a program that prompts the user to enter the account's present value, monthly interest rate, and number of months that the money will be left in the account. The program should pass these values (by constant reference) to a function named `futureValue` that computes and returns the future value of the account after the specified number of months. The program should display the account's future value.

## Tasks

Clone this repository and create a `develop` branch within which to do your work. After completing each of the following tasks, commit your changes with an appropriate commit message. Before you submit your assignment, be sure to push your commits to GitHub so you can create a pull request to submit on Blackboard.

1. Update the header comments; removing the TODO comment while you're at it.
1. Stub out your `presentValue` and `futureValue` functions so that they always returns 0.
1. Implement your menu-driven main function.
1. Finalize the implementation of your `presentValue` and `futureValue` functions so that they calculate (and return) the expected result.

## Submission Details

The usual assignment protocol is followed:

1. Accept this assignment using the URL found in the Blackboard assignment which creates your repository in your GitHub account.
1. Clone your repository and create a branch named develop within which to do your work.
1. Implement the code indicated by the `// TODO:` comments.
1. Minimally make commits after finishing each function; more commits are encouraged but not required.
1. Once the program behaves as prescribed, push your final commit to GitHub and create a pull request, requesting to merge your develop branch into your master branch.
1. After the pull request is created, copy the URL of the pull request and paste it into a Text Submission on Blackboard. You should make the URL a working hyperlink that opens the pull request in a new browser window. NOTE: The assignment is officially submitted by the act of creating and submitting this Blackboard Text Submission and it is the timestamp of that activity that dictates when your assignment was actually submitted.

## Due Date

Your assignment must be submitted to Blackboard by 23:59 Monday 30 April 2018.