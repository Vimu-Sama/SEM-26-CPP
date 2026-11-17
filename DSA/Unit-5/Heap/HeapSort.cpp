#include <iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &ar, int i, int n){
    int left = 0 ;
    int right = 0;
    int largest = i ;
    while(true){
        largest = i ;
        left = (2*i+1) ;
        right = (2*i+2) ;
        if(left<n && ar[largest]<ar[left]){
            largest = left ;
        }
        if(right<n && ar[largest]<ar[right]){
            largest = right ;
        }
        if(i==largest) break;
        swap(ar[i], ar[largest]) ;
        i = largest ;
    }
}

void heapSort(vector<int> &ar){
    int n =ar.size() ;
    for(int i=n/2-1;i>=0;i--){
        heapify(ar, i, n) ;
    }
    for(int i=n-1;i>0;i--){
        swap(ar[i], ar[0]) ;
        heapify(ar, 0, i) ;
    }
}


int main() 
{
    vector<int> ar ;
    int n ; 
    cin>>n ;
    ar.resize(n, 0) ;
    for(int i=0;i<n;i++){
        cin>>ar[i] ;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" " ;
    }
    cout<<endl ;
    heapSort(ar) ;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" " ;
    }
    cout<<endl ;
    return 0;
}