#include <iostream>
using namespace std;
int main()
{
    int arr[5] = { -2, -1, 0, 1, 2 };
    int i = 0;
    cout << "Array elements: ";
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSquare of array elements: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");

    return 0;
}
