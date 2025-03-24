#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i = 0; i <= num; i +=3){
        sum += i;
    }
    cout<<"Sum = "<<sum;
    return 0;
}