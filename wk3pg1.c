#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node * insertAtFirst(struct Node* head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
void traversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=second;

    second->data=56;
    second->next=third;

    third->data=70;
    third->next=NULL;
    
    traversal(head);
    printf("Inserting the element at the beginning of the linked list:\n");
    head=insertAtFirst(head,69);
    traversal(head);
    return 0;
}