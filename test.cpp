#include <bits/stdc++.h>
#include<vector>

using namespace std;
int hourglassSum(vector<vector<int>> arr);
void display(vector<int>);
void rVector(vector<vector<int>>);
void tVector(vector<vector<int>>);
void cVector(vector<vector<int>>);
int main(){
    vector<vector<int>> arr = {
        {1,2,3,1,2,1},
        {2,2,5,2,1,1},
        {3,0,4,2,5,4},
        {2,0,1,0,1,1},
        {1,4,2,1,2,1},
        {2,2,0,4,1,1}
    };
    hourglassSum(arr);
}

int hourglassSum(vector<vector<int>> arr) {
    for (int i = 0; i < 4; i++)
    {
        vector<vector<int>> temp;
        for ( int j = i; j < i+3; j++)
        {
            temp.push_back(arr[j]);
        }
        tVector(temp);
        cout<<" "<<endl;
        temp.clear();
    }
}

void sum(vector<int> a){
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;  
}

void tVector(vector<vector<int>> b){
    vector<vector<int>> tVector;
    for (int i = 0; i < 6; i++)
    {
        vector<int> temp;
        for (int k = 0; k < 3; k++)
        {
            temp.push_back(b[k][i]);
        }
        tVector.push_back(temp);
    }
    cVector(tVector);
    tVector.clear();
}

void cVector(vector<vector<int>> c){
    for (int i = 0; i < 4; i++)
    {
        vector<vector<int>> temp;
        for ( int j = i; j < i+3; j++)
        {
            temp.push_back(c[j]);
        }
        rVector(temp);
        cout<<" "<<endl;
        temp.clear();
    }
}

void rVector(vector<vector<int>> b){
    for (int i = 0; i < b.size(); i++)
    {
        sum(b[i]);
    }
}


