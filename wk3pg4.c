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
int search(struct Node* head,int target){
    struct Node* curr=head;
    while(curr!=NULL){
        if(curr->data==target)return 1;
        curr=curr->next;
    }
    return 0;
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

    int value=search(head,56);
    if(value){
        printf("Element found in the linked list.\n");
    } else {
        printf("Element not found in the linked list.\n");
    }
    return 0;
}
