#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.

	int N = m + n - 2;
	int l = n -1; // we can also take r = m -1
	double res = 1;

	for(int i = 1 ; i <= l; i++){
		res = res * (N - l + i)/i;
	}

	return (int)res;
}