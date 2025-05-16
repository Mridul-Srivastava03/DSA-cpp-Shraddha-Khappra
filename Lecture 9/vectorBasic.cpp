#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4};
    vector<int> vec1(5,1);
    for(int i : vec1){
        cout<<i<<"\n";
    }
    return 0;
}