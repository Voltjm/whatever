#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* next;
  
};
struct singlylinkedlist
{



};
int main()
{
    struct node* head = null;
    struct node* tail = null;
    head = malloc(sizeof(struct node));
    head->data = 7;
    head->next = null;
    tail = head;

    struct node* newnode;
    newnode = malloc(sizeof(struct node));
    
}

