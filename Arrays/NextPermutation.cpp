#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.

    int index = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (permutation[i] < permutation[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for (int i = n - 1; i > index; i--)
    {
        if (permutation[i] > permutation[index])
        {
            swap(permutation[i], permutation[index]);
            break;
        }
    }

    reverse(permutation.begin() + index + 1, permutation.end());

    return permutation;
}