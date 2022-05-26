// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp,*newnode;
    temp=head;
    newnode=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    if(head==NULL)
    {
        head=newnode;
        newnode->data=data;
        newnode->next=NULL;
        return head;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->data=data;
        newnode->next=NULL;
    }
    return head;


}
