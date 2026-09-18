// You are using GCC
// You are using GCC
void insertBeginning(Node *&head, int val){
    if(head==NULL){
        head = (Node*)malloc(sizeof(Node)) ;
        head->next = NULL ;
        head->data = val ;
        return ;
    } else {
        Node *temp= (Node*)malloc(sizeof(Node)) ;
        Node *itr = head ;
        while(itr->next!=NULL){
            itr= itr->next ;
        }
        itr->next = temp ;
        temp->data = val ;
        temp->next = itr->next->next ;
    }
}

void insertEnd(Node *&head, int val){
    if(head==NULL){
        head = (Node*)malloc(sizeof(Node)) ;
        head->next = NULL ;
        head->data = val ;
        return ;
    } else {
        Node *temp= (Node*)malloc(sizeof(Node)) ;
        Node *itr = head ;
        while(itr->next!=NULL){
            itr= itr->next ;
        }
        itr->next = temp ;
        temp->data = val ;
        temp->next = itr->next->next ;
    }
}

void insertPositionBetween(Node *&head, int p, int R){
    if(R==1){
        Node *temp = new Node ;
        temp = head->next ;
         head->next  = Node ;
    } else {
        int i= 1;
        *itr = head ;
        while(i<R-1){
            itr= itr->next ;
            i++;
        }
        Node *temp = new Node ;
        temp = itr->next ;
         itr->next  = Node ;
    }
}