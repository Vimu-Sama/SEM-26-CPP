#include <iostream>
using namespace std;

class Heap{
    int arr[1000] ;
    int size ;

    public:
        Heap(){
            size = 0 ;
        }

        void addElement(int val){
            if(isFilled()){
                cout<<"Heap filled" ;
                return ;
            }
            arr[size]=val ;
            size++ ;
            int i= size-1 ;
            while(i>0 && arr[i]>arr[(i-1)/2]){
                swap(arr[i], arr[(i-1)/2]) ;
                i= (i-1)/2 ;
            }
        }

        void deleteElement(){
            if(isEmpty()){
                cout<<"Heap empty" ;
                return ;
            }
            size-- ;
            arr[0] = arr[size] ;
            int i= 0;
            int largest = 0 ;
            int left = 0 ;
            int right = 0 ;
            while(i<size){
                largest = i ;
                left = (2*i)+1 ;
                right = (2*i)+2 ;
                if(left<size && arr[largest]<arr[left]){
                    largest = left;
                }
                if(right<size && arr[largest]<arr[right]){
                    largest = right ;
                }
                if(largest==i){
                    break ;
                }
                swap(arr[i], arr[largest]) ;
                i = largest ;
            }
        }

        int peek(){
            if(isEmpty()){
                cout<<"Heap Empty" ;
                return -1 ;
            }
            return arr[0] ;
        }

        bool isEmpty(){
            return size==0 ;
        }

        bool isFilled(){
            return size==1000 ;
        }
} ;

int main() 
{
    Heap *h = new Heap() ;
    h->addElement(10) ;
    h->addElement(20) ;
    h->addElement(40) ;
    cout<<"First check: "<<h->peek()<<endl ;
    h->deleteElement() ;
    cout<<"Second check: "<<h->peek()<<endl ;
    h->addElement(30) ;
    h->addElement(60) ;
    h->addElement(20) ;
    cout<<"Third check: "<<h->peek()<<endl ;
    h->deleteElement() ;
    cout<<"Fourth check: "<<h->peek()<<endl ;
    h->deleteElement() ;
    cout<<"Fifth check: "<<h->peek()<<endl ;
    h->deleteElement() ;
    cout<<"Sixth check: "<<h->peek()<<endl ;
    h->deleteElement() ;
    cout<<"Seventh check: "<<h->peek()<<endl ;
    h->deleteElement() ;
    cout<<"Eighth check: "<<h->peek()<<endl ;
    return 0;
}