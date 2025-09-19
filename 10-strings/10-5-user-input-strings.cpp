#include <iostream>
using namespace std;

int main() {
    string firstName;
    string lastName;
    string fullName;

    cout << "Type your first name: ";
    cin >> firstName;

    cout << "Type your last name: ";
    cin >> lastName;

    cout << "Your name is: " + lastName + " " + firstName << endl;

    cin.ignore();
    cout << "Type your full name: ";
    getline (cin, fullName);

    cout << "Your name is: " + fullName;

    return 0;
}