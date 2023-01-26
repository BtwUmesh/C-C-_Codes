#include <iostream>
using namespace std;
int main()
{
	int i , j , n = 5;
	int num = 1;
	for (int i = 0; i < n; i++) 
    {
		for (int j = 0; j <= i; j++)
        {
         cout << num << " ";
        }
	num = num + 1;
    cout << endl;
	}


cout << "\n";
cout << "\n";


for(i = 1; i <= 5; i++)
{
    for(j = 5; j > i; j--)
        {
            cout << " ";
        }
    for(j = 1; j <= i; j++)
        {
            cout <<" " << i;
        }
    cout << "\n";
}
	return 0;
}
