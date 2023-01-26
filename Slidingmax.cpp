#include<iostream>
using namespace std;
int main()
{
    int k, j, max;
    int arr[10];
    cout << "Enter the numbers one after another: ";
    for ( int l = 0; l < 10; l++)
    {
        cin >> arr[l];
    }
    cout << "Enter the desired size for Sliding Window: ";
    cin >> k;
    int n = sizeof(arr) / sizeof(arr[0]);
    for ( int i = 0; i <= n - k; i++)
    {
        max = arr[i];
        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
            {
                max = arr[i + j];
            }
        }
        cout << max << " ";
    }
    return 0;        
}