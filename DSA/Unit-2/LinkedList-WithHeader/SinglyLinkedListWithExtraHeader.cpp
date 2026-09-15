#include <iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next ;
} ;

struct HeaderNode{
    int size ;
    ListNode *next ;
};

//try coding it yourself
void insertNodeAtEnd(HeaderNode *head,int val){
    
}

//try coding it yourself
void deleteNodeAtEnd(HeaderNode *head){
    
}

void displayLinkedList(HeaderNode *head){
    ListNode *temp = head->next ;
    while(temp){
        cout<<temp->data<<"->" ;
        temp = temp->next ;
    }
    cout<<"nullptr\n" ;
}

void insertNodeAtStart(HeaderNode *head, int val){
    ListNode *temp  = (ListNode*)malloc(sizeof(ListNode)) ;
    temp->data = val ;
    temp->next = head->next ;
    head->next = temp ;
    head->size++ ;
}

void deleteNodeAtStart(HeaderNode *head){
    if(head->size==-1){
        return ;
    }
    ListNode *temp = head->next ;
    if(temp==NULL){
        return ;
    }
    head->next = head->next->next ;
    free(temp) ;
    temp = nullptr ;
    head->size-- ;
}


int main() 
{
    HeaderNode *head = new HeaderNode ;
    head->size = -1 ;
    head->next = NULL ;
    int n ;
    cin>>n ;
    int temp ;
    while(n--){
        cin>>temp ;
        insertNodeAtStart(head, temp) ;
    }
    displayLinkedList(head)  ;
    deleteNodeAtStart(head)  ;
    displayLinkedList(head) ;
    return 0 ;
}



