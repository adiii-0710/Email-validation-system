Email Validation System

1. Overview (What is this project?)
Email validation is an important process used in many real-world applications such as login
systems, registrations, and contact forms.
This project focuses on building a simple Email Validation System using C++.
The system checks whether an email address is valid or invalid based on basic string rules.
Goals of the Project
• Understand basic string handling in C++
• Validate email input using simple conditions
• Display clear output to the user
• Learn modular programming using functions
• Apply beginner-friendly logic for real-world problems
Approach Used:
Basic C++ Programming + Functions + String Handling
2. System Flow (How it Works)
1. 2. 3. 4. 5. User enters an email address
Program checks for presence of @ symbol
Program checks for presence of . (dot)
If both symbols are present, email is declared valid
Otherwise, email is declared invalid
6. Final result is displayed on the screen
3. Dataset Used
Input Type:
• User-entered email address (string)
Data Nature:
• Simple text input
• No external files used
• Input is taken at runtime using cin
(This keeps the project beginner-friendly and easy to understand)
4. Program Structure
Function-Based Design
Main Components
• main()
o Takes user input
o Calls the validation function
• checkEmail()
o Validates the email using basic rules
o Displays result
Advantages
• Easy to read and understand
• Clear separation of logic
• Reusable and modular code
• Suitable for first-year students
5. Programming Concepts Used
Core Concepts Implemented
• Input and Output (cin, cout)
• String data type
• Functions
• Conditional statements (if-else)
• Namespace usage (using namespace std;)
Why Simple Logic?
The project focuses on clarity and correctness instead of complex validation rules, making
it ideal for beginners.
6. Email Validation Logic
Validation Rules Used
• Email must contain @
• Email must contain . (dot)
Logic Explanation
• The find() function is used to search characters in the string
• If both symbols are found, email is valid
• If any symbol is missing, email is invalid
This logic reflects basic real-world email validation.
7. Output & Validation
Validation Performed
• Checked presence of required symbols
• Ensured correct decision making
• Displayed user-friendly output
Output Type
• Console-based result message
• Clearly states whether the email is valid or invalid
8. Limitations
• Does not check order of @ and .
• Does not validate domain name
• Does not handle multiple @ symbols
(These are intentionally avoided to keep the project simple)
9. Future Scope
• Advanced validation rules
• Domain-specific checks
• File-based email validation
• Integration with login systems
10. Project Deliverables
Files Included
• email_validation.cpp
• Project Report (PDF/Word)
Tools Used
• C++ Compiler (G++)
• VS Code / Any IDE
11. Results & Conclusion
Results
• Successfully validated email addresses
• Implemented basic string handling in C++
• Understood function-based programming
• Applied real-world logic using simple conditions
Conclusion:
This project demonstrates how C++ can be used to build a simple and practical Email
Validation System. It helps beginners understand string manipulation, conditional logic, and
modular programming, making it an excellent foundational project.
