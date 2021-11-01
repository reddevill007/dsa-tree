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

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);

    // Linking the root with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);

    return 0;
}