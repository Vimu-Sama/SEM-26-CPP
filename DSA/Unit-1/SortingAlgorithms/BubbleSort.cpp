#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int ar[], int n){
    bool flag = true ;
    for(int i=0;i<n;i++){
        for(int j=0; j<(n-i-1); j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j], ar[j+1]) ;
                flag= false ;
            }
        }
        if(flag){
            return ;
        }
    }
}

int main(){
    int n;
    cin>>n ;
    int ar[n] ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    BubbleSort(ar, n) ;
    for(int i=0;i<n;i++){
        cout<<ar[i] ;
    }
    return 0 ;
}