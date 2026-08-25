#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int ar[], int n){
    for(int i=0;i<n;i++){
        int min= i ;
        for(int j=i+1; j<n; j++){
            if(ar[min]>ar[j]){
                min= j ;
            }
        }
        swap(ar[i], ar[min]) ;
    }
}

int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    SelectionSort(ar, n) ;
    cout<<"Sorted Array-> ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" " ;
    }
    return 0 ;
}




