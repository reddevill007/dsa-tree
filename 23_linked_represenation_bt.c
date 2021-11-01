#include <stdio.h>
#include <malloc.h>

struct node 
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data)
{
    struct node *n; // Creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating the memorry in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting left childrens to NULL
    n->right = NULL; // Setting left childrens to NULL
    // Returning the created node
    return n;
}

int main()
{
    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the first node
    struct node *p1;
    p1->data = 5;
    p1 = (struct node *) malloc(sizeof(struct node));
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the second node
    struct node *p2;
    p2->data = 35;
    p2 = (struct node *) malloc(sizeof(struct node));
    p2->left = NULL;
    p2->right = NULL;

    // Linking the root with left and right children
    p->left = p1;
    p->right = p2;
    */

   // Constructing the root node - usinf functions
    struct node *p = createNode(2);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(22);

    // Linking the root with left and right children
    p->left = p1;
    p->right = p2;

    return 0;
}