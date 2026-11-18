#include <iostream>
using namespace std;

class Array{
    
    private:

        int **ar ;
        int rowSize ;
        int *colSizeArray ;

    public:

        Array(int n){
            ar = new int*[n] ;
            rowSize = n ;
            colSizeArray = new int[n] ;
            cout<<"Array created"<<endl ;
        }

        void assignColumn(int index, int m){
            *(ar+index) = new int[m] ;
            colSizeArray[index]= m ;
        }

        void assignValue(int val, int rowIndex, int colIndex){
            ar[rowIndex][colIndex] = val ;
        }

        void display(){
            for(int i=0;i<rowSize;i++){
                for(int j=0;j<colSizeArray[i];j++){
                    cout<<ar[i][j]<<" " ;
                }
                cout<<endl ;
            }
        }

        ~Array(){
            for(int i=0;i<rowSize;i++){
                delete[] ar[i] ;
                ar[i] = nullptr ;
            }
            delete[] ar ;
            ar= nullptr ;
            cout<<"Memory freed!"<<endl; 
        }
};

int main() 
{
    int n ;
    cin>>n ;
    Array a(n) ;
    int m ;
    int val ;
    for(int i=0;i<n;i++){
        cout<<"Enter column size-> " ;
        cin>>m ;
        a.assignColumn(i, m) ;
        cout<<"Enter input-> "<<endl ;
        for(int j=0;j<m;j++){
            cin>>val ;
            a.assignValue(val, i, j) ;
        }
    }
    cout<<"Your jagged array->"<<endl ;
    a.display() ;
    return 0;
}

