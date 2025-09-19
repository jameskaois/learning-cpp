#include <iostream>
using namespace std;

int main() {
    string firstName = "Cao";
    string lastName = "James ";
    string fullName = lastName.append(firstName);

    cout << firstName[0] << firstName.at(0) << endl;
    cout << lastName[1] << lastName .at(1) << endl;
    cout << fullName[fullName.length() - 1] << endl;

    fullName[fullName.size() - 1] = 'a';
    cout << fullName;

    return 0;
}