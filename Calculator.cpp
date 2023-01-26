#include<iostream>
using namespace std;
int main(){
    int choice, a, b, sum, sub, mpy, div;
    cout << " Enter a Number: ";
    cin >> a;
    cout << "Enter another Number: ";
    cin >> b;
    cout << "Choose 1 for Addition 2 for Substraction 3 for Multiplication and 4 for Divison";
    cin >> choice;

    sum = a+b;
    sub = a-b;
    mpy = a*b;
    div = a/b;

    if (choice == 1)
    {
        cout << "The sum of the numbers is " << sum;
    }
    if (choice == 2)
    {
        cout << "The Substraction of the Numbers is" << sum;
    }
    if (choice == 3)
    {
        cout << "The Multiplication of the numbers is" << mpy;
    }
    else    
    {
        cout << "The Divison of the numbers is "<< div;
    }
    return 0;
    
    
    
}