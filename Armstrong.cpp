#include<iostream>
using namespace std;
int main(){
    int rem,n,temp,sum=0;
    cout << "Enter any number ";
    cin >> n;
    temp = n;
    while (temp>0)
    {
        rem = temp%10;
        sum += rem*rem*rem;
        temp = temp/10;
    }
    if (sum == n)
    {
        cout << "Entered number " <<n<< " is an Armstrong Number";
    }
    else
    {
        cout << "Entered number " <<n<< " is not an Armstrong Number";
    }
    
}