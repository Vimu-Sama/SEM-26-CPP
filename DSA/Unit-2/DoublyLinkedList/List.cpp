#include <iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next ;
    ListNode *prev ;
} ;

void insertNodeAtEnd(ListNode **headptr, ListNode **tailptr,int val){
    ListNode *temp = (ListNode*)malloc(sizeof(ListNode)) ;
    temp->data= val ;
    temp->next = NULL ;
    if(*headptr==NULL){
        *headptr = temp ;
        temp->prev= NULL ;
    } else {
        (*tailptr)->next = temp ;
        temp->prev= *tailptr ;
    }
    *tailptr = temp ;
}

void deleteNodeAtEnd(ListNode **headPtr, ListNode **tailPtr ){
   if(*headPtr == NULL){
        return ;
   } else {
        ListNode *temp = *tailPtr ;
        *tailPtr = (*tailPtr)->prev ;
        free(temp) ;
        temp = NULL ;
        if(*tailPtr==NULL){
            *headPtr= NULL ;
        } else {
            (*tailPtr)->next = NULL ;
        }
   }
}

void displayLinkedList(ListNode *head){
    ListNode *itr = head;
    while(itr!=NULL){
        cout<<itr->data<<"->" ;
        itr= itr->next ;
    }
    cout<<"nullptr\n" ;
}

//Try it yourself
void insertNodeAtStart(ListNode **head, int val){
    
}

//Try it yourself
void deleteNodeAtStart(ListNode **head){

}


int main() 
{
    ListNode *head = NULL ;
    ListNode *tail = NULL ;
    int n ;
    cin>>n ;
    int temp ;
    while(n--){
        cin>>temp ;
        insertNodeAtEnd(&head, &tail, temp) ;
    }
    displayLinkedList(head) ;
    deleteNodeAtEnd(&head, &tail) ;
    displayLinkedList(head) ;
    return 0;
}



