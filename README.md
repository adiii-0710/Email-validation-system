Email Validation System (C++)








Overview

Email validation is an important feature used in many real-world applications such as login systems, registration forms, and contact forms.

This project implements a simple Email Validation System using C++ that checks whether an email address follows basic formatting rules.

The program analyzes the structure of an email string and determines whether it is valid or invalid based on predefined validation rules.

Objectives

Implement a basic email validation system

Practice string manipulation in C++

Understand modular programming using functions

Apply conditional logic and loops

Build a console-based interactive program

System Workflow

The user enters an email address.

The program scans the email string.

It checks for the presence and correct position of:

@ symbol

. symbol in the domain

It validates characters in the:

username section

domain section

If all rules are satisfied, the email is marked VALID.

Otherwise, the email is marked INVALID.

Validation Rules

The program validates emails using the following rules:

Email must contain exactly one @ symbol

@ cannot be the first or last character

Domain must contain . after @

Domain extension must contain at least 2 characters

Username can include:

letters

numbers

.

_

-

Domain can include:

letters

numbers

.

-

Technologies Used

Language: C++

Libraries:

<iostream>
<string>
<cctype>

Concepts Applied:

Functions

Boolean Logic

String Handling

Loops

Conditional Statements

Input Validation

Program Structure
Email-validation-system
│
├── rules.cpp
└── README.md
Example Output
=========================================
EMAIL VALIDATION PROGRAM
=========================================

Enter an email address to validate:
aditya@gmail.com

========================================
EMAIL VALIDATION DETAILS
========================================
Email: aditya@gmail.com
Status: VALID
Username: aditya
Domain: gmail.com
========================================
Compilation and Execution

Compile the program:

g++ rules.cpp -o validator

Run the program:

./validator
