#include <iostream>
using namespace std;

int main() {
    string firstName = "Cao";
    string lastName = "James ";
    string fullName = lastName.append(firstName);

    cout << lastName + firstName << endl;
    cout << fullName;

    return 0;
}