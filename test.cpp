#include <iostream>
#include<vector>

using namespace std;
void diagonalDifference(vector<vector<int>>); 
int main(){
    vector<vector<int>> q = {
        {11,2,4},
        {4,5,6},
        {10,8,-12}
    };
    diagonalDifference(q);
}

void diagonalDifference(vector<vector<int>> arr) {
    int pD = 0;
    int sD = 0;
    int n = arr.size();
    int x = n/2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (i == n/2 && n%2 == 1)
                {
                    sD = sD + arr[i][j];
                    pD = pD + arr[i][j];
                }
                else
                {
                    pD = pD + arr[i][j];
                }
            }
            else if (i == arr.size()-j)
            {
                sD = sD + arr[i][j];
            }        
        }
    }
    cout<<pD<<endl;
    cout<<sD<<endl;
    // int dif = abs(pD-sD);
    // return dif;
}