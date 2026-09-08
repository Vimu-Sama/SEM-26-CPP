#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int ar[], int n){
    for(int i=1;i<n;i++){
        int temp = ar[i];
        int j=i-1 ;
        while(j>=0 && ar[j]>temp){
            ar[j+1]= ar[j] ;
            j-- ;
        }
        // for(; j>=0;j--){
        //     if(ar[j]>temp){
        //         ar[j+1]= ar[j] ;
        //     } else {
        //         break ;
        //     }
        // }
        ar[j+1]= temp ;
    }
}

int main(){
    int n;
    cin>>n ;
    int ar[n] ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    InsertionSort(ar, n) ;
    for(int i=0;i<n;i++){
        cout<<ar[i] ;
    }
    return 0 ;
}