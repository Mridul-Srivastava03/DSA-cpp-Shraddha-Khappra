#include<iostream>
using namespace std;
int binToDecimal(int binNum){
    int decNum = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;
        decNum += (rem*pow);
        pow *= 2;
    }
    return decNum;
}
int main()
{
    int binNum;
    cout<<"Enter a binary number: ";
    cin>>binNum;
    cout<<"Decimal number of "<<binNum<<" = "<<binToDecimal(binNum); 
    return 0;
}