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
struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* curr=head;
    int i=0;
    while(i!=index-1){
        curr=curr->next;
        i++;
    }
    struct Node* q=curr->next;
    curr->next=q->next;
    free(q);
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
    printf("Deleting the element at index 1:\n");
    head=deleteAtIndex(head,1);
    traversal(head);

    return 0;
}