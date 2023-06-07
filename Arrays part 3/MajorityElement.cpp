#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.

	map<int , int>map;

	for(int i =0; i < n ; i++){
		map[arr[i]]++;
	}

	for(auto it: map){

		if(it.second > n/2)
			return it.first;
	}

	return -1;
}