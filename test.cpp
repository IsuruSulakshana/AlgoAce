#include <bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> rotateLeft(int, vector<int>);

int main(){
    int x = 4;
    vector<int> arr = {1,2,3,4,5};
    vector<int> t = rotateLeft(x,arr);
    for (int i = 0; i < 5; i++)
    {
        cout<<t[i]<<" ";
    }
}

vector<int> rotateLeft(int d, vector<int> arr){
    int temp;
    for (int i = 0; i < d; i++)
    {
        temp = arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }
    return arr;
}