#include <iostream>
using namespace std;

int main() {
    string firstName = "Cao";
    string lastName = "James ";
    string fullName = lastName.append(firstName);

    cout << lastName.length();
    cout << lastName.size();

    return 0;
}