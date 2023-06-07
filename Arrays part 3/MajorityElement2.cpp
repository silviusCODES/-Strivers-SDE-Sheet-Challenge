#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> ls;
    map<int, int> map;

    int mini = arr.size()/3 + 1;

    for(int i = 0; i < arr.size() ; i++){
        map[arr[i]]++;

        if(map[arr[i]] == mini){
            ls.push_back(arr[i]);
        }

        if(ls.size() == 2) break;
    }

    sort(ls.begin(), ls.end());
    return ls;

}