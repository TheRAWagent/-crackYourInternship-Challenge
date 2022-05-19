// C++ program to solve chocolate distribution
// problem
#include <bits/stdc++.h>
using namespace std;

// arr[0..n-1] represents sizes of packets
// m is number of students.
// Returns minimum difference between maximum
// and minimum values of distribution.

int main()
{
	int arr[] = { 12, 4, 7, 9, 2, 23, 25, 41, 30,
				40, 28, 42, 30, 44, 48, 43, 50 };
	int m = 7; // Number of students
	int n = sizeof(arr) / sizeof(arr[0]);
  int diff=INT_MAX;
  	vector<int> x(arr,arr+n);
  	sort(x.begin(),x.end());
  	for(int i=0;i<=n-m;i++)
      diff=min(diff,x[i+m-1]-x[i]);
	cout << "Minimum difference is "
		<< diff;
	return 0;
}
