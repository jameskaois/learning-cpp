#include <iostream>
using namespace std;

int main() {
    enum Level_Point {
        LOW = 10,
        MEDIUM = 50,
        HARD = 100
    };

    enum Level_Point myGame = HARD;

    cout << myGame;

    return 0;
}