#include <bits/stdc++.h>
#include<vector>

using namespace std;

long arrayManipulation(int, vector<vector<int>>);
int main(){
    int x = 5;
    vector<vector<int>> q = {
        {1,2,100},
        {2,5,100},
        {3,4,100}
    };
    long t = arrayManipulation(x, q);
    cout<<t;
}

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> temp(n+1, 0);
    for (int i = 0; i < queries.size(); i++) {
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        temp[a] += k;
        if (b+1 <= n) temp[b+1] -= k;
    }
    long max = *max_element(temp.begin(), temp.end());
    return max;
}
