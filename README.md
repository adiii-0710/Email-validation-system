# Email Validation System (C++)

![Language](https://img.shields.io/badge/Language-C++-blue)
![Concepts](https://img.shields.io/badge/Concepts-String%20Handling-green)
![Concepts](https://img.shields.io/badge/Concepts-Functions-green)
![Platform](https://img.shields.io/badge/Platform-Console-orange)

---

## Overview

Email validation is an important process used in many real-world applications such as login systems, registration forms, and contact forms.

This project implements a **simple Email Validation System using C++** that checks whether an email address follows basic formatting rules.

The program analyzes the structure of an email string and determines whether it is **valid or invalid** based on predefined validation rules.

---

## Objectives

* Implement a basic email validation system
* Practice string manipulation in C++
* Understand modular programming using functions
* Apply conditional logic and loops
* Build a console-based interactive program

---

## Technologies Used

**Language**

C++

**Libraries**

```
#include <iostream>
#include <string>
#include <cctype>
```

**Concepts Applied**

* Functions
* Boolean Logic
* String Handling
* Loops
* Conditional Statements
* Input Validation

---

## Validation Rules

The program validates email addresses using the following rules:

* Email must contain **exactly one @ symbol**
* @ cannot be the **first or last character**
* A **dot (.) must appear after the @ symbol**
* Domain extension must contain **at least two characters**
* Username can contain:

  * letters
  * numbers
  * .
  * _
  * *
* Domain can contain:

  * letters
  * numbers
  * .
  * *

---

## Program Structure

```
Email-validation-system
│
├── rules.cpp
└── README.md
```

---

## Example Output

```
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
```

---

## Compilation and Execution

Compile the program:

```
g++ rules.cpp -o validator
```

Run the program:

```
./validator
```

---

