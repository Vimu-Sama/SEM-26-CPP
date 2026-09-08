#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    ListNode *next ;

    ListNode(int i){
        data= i ;
        next= nullptr ;
    }
} ;

int main(){
    int n ;
    cin>>n ;
    int inputTemp ;

    ListNode *head = nullptr ;
    ListNode *temp = nullptr ;

    for(int i=0;i<n;i++){
        cin>>inputTemp ;
        if(head==nullptr){
            head= new ListNode(inputTemp) ;
            temp= head ;
        } else {
            temp->next = new ListNode(inputTemp) ;
            temp = temp->next ;
        }
    }



    while(head!=nullptr){
        cout<<head->data<<" -> " ;
        head = head->next ;
    }
    cout<<"nullptr" ;
    cout<<"\ntemp-> "<<temp->data ;
    return  0;
}


