#include <iostream>
using namespace std;

int main()
{
    int num1, num2, lcm;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // Find the maximum value between num1 and num2
    int max_num = (num1 > num2) ? num1 : num2;

    // Find the LCM
    while(true) {
        if(max_num % num1 == 0 && max_num % num2 == 0) {
            lcm = max_num;
            break;
        }
        ++max_num;
    }
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;
    return 0;
}
