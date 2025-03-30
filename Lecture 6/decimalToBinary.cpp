#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int binNum = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        binNum += rem * pow;
        pow = pow * 10;
    }
    return binNum;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Binary Number of "<<num<<" = "<<decToBinary(num);
    return 0;
}