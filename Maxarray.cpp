#include <iostream>
using namespace std;
int main() {
  int i;
  int arr[6];
cout << "Enter the numbers one after another: ";
for ( int j = 0; j < 6; j++)
  {
    cin >> arr[j];
  }
  for(i = 1;i < 6; ++i)
  {
    if(arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }
  cout << "Largest element: " << arr[0];
  return 0;
}
