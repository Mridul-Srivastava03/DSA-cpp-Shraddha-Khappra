#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {99,100,54,36,88};
    int size = 5;
    int s = sizeof(marks)/sizeof(int);
    for(int i = 0; i < s; i++){
        cout<<marks[i]<<'\n';
    }
    return 0;
}