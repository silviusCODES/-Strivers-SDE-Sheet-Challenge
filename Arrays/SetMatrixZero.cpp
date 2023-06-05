#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.

    int n = matrix.size(), m = matrix[0].size();
    vector<int> row(n, 1); // initialize with 1
    vector<int> col(m, 1); // initialize with 1

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            { // checking for 0s in the &matrix
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}