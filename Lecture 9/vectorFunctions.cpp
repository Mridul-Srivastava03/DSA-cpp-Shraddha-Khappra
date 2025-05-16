#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout<<"Size of vector before push_back = "<<vec.size()<<"\n";
    vec.push_back(0);
    cout<<"Size of vector after push_back = "<<vec.size()<<"\n";
    vec.push_back(1);
    cout<<"Size of vector after push_back = "<<vec.size()<<"\n";
    vec.push_back(2);
    cout<<"Size of vector after push_back = "<<vec.size()<<"\n";
    vec.push_back(3);
    cout<<"Size of vector after push_back = "<<vec.size()<<"\n";
    for(int val : vec){
        cout<<val<<"\n";
    }
    vec.pop_back();
    cout<<"Size of vector after push_back = "<<vec.size()<<"\n";
    for(int val : vec){
        cout<<val<<"\n";
    }
    cout<<vec.front()<<"\n";
    cout<<vec.back()<<"\n";
    return 0;
}