#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* insertAtMiddle(struct Node* head,int data,int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1 && p->next!=NULL){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
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

    printf("Inserting the element at the middle of the linked list:\n");
    head=insertAtMiddle(head,99,2); 
    traversal(head);

    return 0;
}
