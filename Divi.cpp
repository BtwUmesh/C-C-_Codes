#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (num % 11 == 0)
        cout << "The number is a palindrome number";
    else
        cout << "The number is not palindrome number";
}