#include <iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next ;
} ;

void insertNodeAtEnd(ListNode **head,int val){
    if(*head==NULL){
        *head= new ListNode ;
        (*head)->data = val;
        (*head)->next = NULL ;
        return ;
    }
    ListNode *itr = *head ;
    while(itr->next!=NULL){
        itr= itr->next ;
    }
    itr->next = new ListNode ;
    itr= itr->next ;
    itr->data= val ;
    itr->next = nullptr ;
}

void deleteNodeAtEnd(ListNode **head){
    ListNode *itr = *head ;
    while(itr->next->next!=NULL){
        itr= itr->next ;
    }
    ListNode *temp = itr->next ;
    itr->next= NULL ;
    free(temp) ;
    temp = NULL ;
}

void displayLinkedList(ListNode *head){
    ListNode *itr = head ;
    while(itr!=NULL){
        cout<<itr->data<<"->" ;
        itr= itr->next ;
    }
    cout<<"nullptr\n" ;
}

void insertNodeAtStart(ListNode **head, int val){
    ListNode *temp = new ListNode ;
    temp->data = val ;
    temp->next = NULL ;
    temp->next = *head ;
    *head = temp ;
}

void deleteNodeAtStart(ListNode **head){
    ListNode *temp = *head ;
    *head= (*head)->next ;
    free(temp) ;
    temp = nullptr ;
}


int main() 
{
    ListNode *head = NULL ;
    int n ;
    cin>>n ;
    int temp ;
    while(n--){
        cin>>temp ;
        insertNodeAtEnd(&head, temp) ;
    }
    displayLinkedList(head) ;
    deleteNodeAtEnd(&head);
    displayLinkedList(head) ;
    deleteNodeAtStart(&head) ;
    displayLinkedList(head) ;
    cout<<"Insert element-> " ;
    cin>>temp ;
    insertNodeAtStart(&head, temp) ;
    displayLinkedList(head) ;
    return 0;
}



