#include<iostream>
using namespace std;
int reverseNum(int n){
    int revNum = 0;
    while(n > 0){
        int rem = n % 10;
        n /= 10;
        revNum = revNum * 10 + rem;
    }
    return revNum;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Reverse of "<<num<<" = "<<reverseNum(num);
    return 0;
}