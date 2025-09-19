#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Type your name: ";
    cin >> name;

    cout << "Type your age: ";
    cin >> age;

    cout << "Your name is " << name << ". You're " << age << " years old.";

    return 0;
}