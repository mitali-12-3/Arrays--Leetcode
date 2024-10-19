//136. Single Number
//Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.You must implement a solution with a linear runtime complexity and 
// use only constant extra space.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,1,5,5,3,9};
    int n= 7;
    int ans=0;
    for(int i=0;i<n;i++){
        ans= ans^arr[i];
    }
    cout<<"Single Number: "<<ans<<endl;
    return 0;
}