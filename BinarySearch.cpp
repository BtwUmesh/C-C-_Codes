#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearch(vector<int> v, int To_Find)
{
	int low = 0, high = v.size() - 1;
	int mid;

	while (high - low > 1) {
		int mid = (high + low) / 2;
		if (v[mid] < To_Find) {
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}
	if (v[low] == To_Find) {
		cout << "Found"
			<< " At Index " << low;
	}
	else if (v[high] == To_Find) {
		cout << "Found"
			<< " At Index " << high;
	}
}

int main()
{
	vector<int> v = { 1, 3, 4, 5, 6 };
	int To_Find = 1;
	binarySearch(v, To_Find);
	To_Find = 6;
	binarySearch(v, To_Find);
	To_Find = 10;
	binarySearch(v, To_Find);
	return 0;
}
