#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {99,100,54,36,88};
    marks[0] = 101;
    cout<<marks[0]<<'\n';
    cout<<marks[1]<<'\n';
    cout<<marks[2]<<'\n';
    cout<<marks[3]<<'\n';
    cout<<marks[4]<<'\n';
    return 0;
}