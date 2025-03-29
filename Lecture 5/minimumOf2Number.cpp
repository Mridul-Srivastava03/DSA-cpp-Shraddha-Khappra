#include<iostream>
using namespace std;
int minimumNumber(int a, int b){
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    cout<<minimumNumber(10,15);
    return 0;
}