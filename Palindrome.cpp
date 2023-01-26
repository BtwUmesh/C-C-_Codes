#include<iostream>
using namespace std;
int main(){
    int rem,n,temp,rev=0;
    cout << "Enter any number: ";
    cin >> n;
    temp = n;
    while (temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp=temp/10;
    }
    if (n == rev)
    {
        cout << "The number entered " << rev << " is a Palindrome number";
    }
    else
    {
        cout << "The number entered " << rev << " is a Palindrome number";
    }
     return 0;

}