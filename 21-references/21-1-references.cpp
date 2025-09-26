#include <iostream>
using namespace std;

int main() {
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger

    food = "Spaghetti";

    cout << meal << "\n";

    cout << (&food == &meal);

    return 0;
}