#include <iostream>
using namespace std;

int main() {    
    float num1, num2, num3;

    cout << "ENTER 3 NUMBERS: ";
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3)
        cout << "LARGEST NUMBER IS: " << num1;

    if(num2 >= num1 && num2 >= num3)
        cout << "LARGEST NUMBER IS: " << num2;
    
    if(num3 >= num1 && num3 >= num2)
        cout << "LARGEST NUMBER IS: " << num3;
  
    return 0;
}
