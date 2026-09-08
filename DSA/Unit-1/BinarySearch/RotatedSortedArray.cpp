#include< bits/stdc++.h>
using namespace std;

int SearchElement(int ar[], int n, int t){
    int left = 0;
    int right = n-1 ;
    int mid;
    while(left<=right){
        mid= (left+right)/2 ;
        if(ar[mid]==t){
            return mid ;
        }
        if(ar[left]<ar[mid]){
            if(ar[left]<=t && t<ar[mid]){
                right = mid-1 ;
            } else {
                left = mid+1 ;
            }  
        } else {
            if(ar[mid]<t && t<=ar[right]){
                left = mid+1 ;
            } else {
                right= mid-1 ;
            }
            
        }
    }
}

int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    cout<<"Enter target-> " ;
    int target ;
    cin>>target ;
    cout<<SearchElement(ar, n, target) ;
    return 0;
}