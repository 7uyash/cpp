#include <iostream>
using namespace std;
int main ()
{
    int num1,num2;
    char op;
    int result;
    cout <<"Enter First Number : ";
    cin >>num1;
    cout <<"Enter The Operator : ";
    cin >>op;
    cout <<"Enter Second Number : ";
    cin >>num2;
    if (op == '+'){
        result = num1 + num2 ;
    }else if (op == '-'){
        result = num1 - num2 ;
    }else if (op == '*'){
        result = num1 * num2;
    }else if (op == '/'){
        result = num1 / num2;
    } else{ cout <<"Invalid Operator";
    }
    cout << "Result : " << result;
}