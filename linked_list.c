#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};

void initNode(struct node* list, int n)
{
        list->data = n;
        list->next = NULL;
}

struct node* addNode(struct node* list, int n)
{
        struct node* new_node = (struct node*) malloc(sizeof(struct node));
        new_node->data = n;
        new_node->next = list; // point to the previous node
        return new_node;
}

void printAllNode(struct node* list)
{
        while(list != NULL)
        {
                printf("Found at address %p, n=%d\n", list, list->data);
                list = list->next;
        }
}

int main()
{
        struct node* list = (struct node*) malloc(sizeof(struct node));

        initNode(list, 12);
        list = addNode(list, 5);
        list = addNode(list, 8);
        printAllNode(list);

        return 0;
}
