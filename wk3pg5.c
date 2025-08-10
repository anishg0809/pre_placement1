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
struct Node* nthFromEnd(struct Node* head,int n){
    struct Node* first=head;
    struct Node* second=head;
    for(int i=0;i<n;i++){
        if(first==NULL)return NULL;
        first=first->next;
    }
    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    return second;
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
    int n = 2;
    struct Node* result = nthFromEnd(head, n);
    if(result != NULL){
        printf("The %dth node from the end is: %d\n", n, result->data);
    } else {
        printf("The list is shorter than %d nodes.\n", n);
    }
    return 0;
}

