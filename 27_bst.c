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

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBst(struct  node* root){
    static struct node* prev = NULL;

    if(root!=NULL)
    {
        if(!isBst(root->left))
            return 0;
        if(prev != NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return isBst(root->right);
    }
    else
        return 1;
}

int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    // Linking the root with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    printf("\n%d\n", isBst(p));

    return 0;
}