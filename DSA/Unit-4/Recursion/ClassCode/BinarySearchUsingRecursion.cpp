#include<iostream>
#include<vector>
using namespace std ;

int BinarySearch(vector<int> &ar, int target, int left, int right){
    if(left>right){
        return -1 ;
    }
    int mid = (left+right)/2 ;
    if(ar[mid]==target){
        return mid ;
    }
    if(ar[mid]>target){
        return BinarySearch(ar, target, left, mid-1) ;
    } else {
        return BinarySearch(ar, target, mid+1, right) ;
    }
}

int main(){
    vector<int> ar ;
    int n ;
    cin>>n ;
    ar.resize(n) ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    cout<<"Enter target value-> " ;
    int target ;
    cin>>target ;
    int ans = BinarySearch(ar, target, 0, n-1) ;
    if(ans==-1){
        cout<<"Element not found!" ;
    } else {
        cout<<"Element found at index-> "<<ans ;
    }
    return 0 ;
}