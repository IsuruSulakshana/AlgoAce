#include<iostream>

using namespace std;
int BubbleSort(int);
int main()
{
    int a[7] = {2,8,1,3,5,7,6};
    cout<<BubbleSort(a[7]);
}

int BubbleSort(int array[7])
{
    int n = sizeof(array);
    for (int k = 0; k < (n-1); k++)
    {
        for (int i = 0; i < (n-k-1); i++)
        {
            if (array[i] > array[i+1])
            {
                array[i], array[i+1] = array[i+1], array[i];
            }
            
        }
        
    }
    return array[7];
}