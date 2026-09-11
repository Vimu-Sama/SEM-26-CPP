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
//In struct,Make insertion at end, deletion at end functions
struct LinkedList{
    ListNode *head ;

    LinkedList(){
        head= nullptr ;
    }

    LinkedList(int n){
        head= new ListNode(n);
    }

    void InsertNodeAtEnd(int i){
        if(head==nullptr){
            head= new ListNode(i) ;
            return ;
        }
        ListNode *temp = head ;
        while(temp->next!=nullptr){
            temp = temp->next ;
        }
        temp->next = new ListNode(i) ;
    }

    void DisplayList(){
        ListNode *temp = head ;
        while(temp!=nullptr){
            cout<<temp->data<<"->" ;
            temp = temp->next ;
        }
        cout<<"nullptr" ;
    }
} ;

int main(){
    int n ;
    cin>>n ;
    int inputTemp ;

    LinkedList l ;
    for(int i=0;i<n;i++){
        cin>>inputTemp ;
        l.InsertNodeAtEnd(inputTemp) ;
    }
    l.DisplayList() ;
    return  0;
}


