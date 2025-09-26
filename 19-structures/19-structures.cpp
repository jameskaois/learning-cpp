#include <iostream>
using namespace std;

int main() {
    struct {
        int myNum;
        string myString;
    } myStructure;
    
    myStructure.myNum = 2;
    myStructure.myString = "Hello world!";

    
    struct {
    string brand;
    string model;
    int year;
    } myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}