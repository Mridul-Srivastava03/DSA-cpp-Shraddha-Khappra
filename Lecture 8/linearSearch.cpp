#include<iostream>
using namespace std;
int linearSearch(int a[],int size, int target){
    // int size = sizeof(a)/sizeof(int);
    for (int i = 0; i < size; i++){
        if (a[i] == target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[100], size, target;
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>a[i];
    }
    cout<<"Enter target element: ";
    cin>>target;
    cout<<"Target found at index "<<linearSearch(a, size, target);
    return 0;
}