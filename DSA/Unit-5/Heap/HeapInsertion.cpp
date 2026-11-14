#include <iostream>
using namespace std;

struct MaxHeap{
    int arr[1000] ;
    int size ;
    
    public:
        MaxHeap(){
            size= 0 ;
        }

        void insertElement(int val){
            if(size==1000-1){
                cout<<"Heap full" ;
                return ;
            }       
            arr[size]= val ;
            int i = size ;
            size++ ;
            while(i>0 && arr[i]>arr[(i-1)/2]){
                swap(arr[i], arr[(i-1)/2]) ;
                i = (i-1)/2 ;
            }
        }

        int getPeak(){
            if(size==0){
                return -1 ; //its better to throw exception here
            } else {
                return arr[0] ;
            }
        }
};

int main() 
{
    MaxHeap h ;
    h.insertElement(10) ;
    h.insertElement(20) ;
    h.insertElement(30) ;
    h.insertElement(40) ;
    h.insertElement(20) ;
    h.insertElement(5) ;
    h.insertElement(50) ;
    cout<<h.getPeak() ;
    return 0;
}