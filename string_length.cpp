#include <iostream>
using namespace std;
int main() 
{
string str;
cin>>str;
int count = 0;
for(int i = 0;str[i];i++) // till the string character is null
    count++;
cout<<count;
}

// Input: abcde
// Output: 5
