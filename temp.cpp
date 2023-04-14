#include<iostream>
#include<vector>

using namespace std;
int hourGlass(vector<vector<int>>);
int main(){
    vector<vector<int>> arr = {
        {1,1,1,0,0,0},
        {0,1,0,0,0,0},
        {1,1,1,0,0,0},
        {0,0,2,4,4,0},
        {0,0,0,2,0,0},
        {0,0,1,2,4,0}
    };
    int t = hourGlass(arr);
    cout<<t;
}

int hourGlass(vector<vector<int>> a){
    int sum;
    int maxSum = a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if (sum>maxSum)
            {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}