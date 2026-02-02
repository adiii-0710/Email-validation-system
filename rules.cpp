#include <iostream>
#include <string>

using namespace std;

// Function to check email validity
void checkEmail(string email)
{
// Check if '@' and '.' are present in the email
    if (email.find('@') != string::npos && email.find('.') != string::npos)
    {
        cout << "\nResult: Email address is VALID." << endl;
    }
    else
    {
        cout << "\nResult: Email address is INVALID." << endl;
    }
}

int main()
{
    string email;

    cout << "==================================" << endl;
    cout << "     EMAIL VALIDATION PROGRAM     " << endl;
    cout << "==================================" << endl;

    cout << "\nEnter an email address: ";
    cin >> email;

// Call function to validate email
    checkEmail(email);

    return 0;
}
