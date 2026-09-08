#include<bits/stdc++.h>
using namespace std ;

int ceil(int ar[], int n, int target){
    int left = 0 ;
    int right = n-1 ;
    int mid = 0 ;
    int ans = -1 ;
    while(left<=right){
        mid= (left + right)/2 ;
        if(ar[mid]>=target){
            ans= mid ;
            right= mid -1 ;
        } else {
            left = mid+1 ;
        }
    }
    return ans ;
}

int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    cout<<endl ;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" " ;
    }
    cout<<"\nEnter Target value-> " ;
    int targetValue ;
    cin>>targetValue ;
    int ans= ceil(ar, n, targetValue) ;
    if(ans!=-1){
        cout<<"Found ceiling-> \nindex-> "<<ans<<"\nvalue-> "<<ar[ans];
    } else {
        cout<<"Not found!" ;
    }
    
}