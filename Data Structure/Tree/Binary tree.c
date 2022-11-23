#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node*left;
    struct node*right;
};
struct node*newNode(int item)
{
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp->key  = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};
void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d\t",root->key);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->key);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d\t", root->key);
    }
}
struct node*insert(struct node*node, int key)
{
    if(node==NULL)
        return newNode(key);
    if(key<node->key)
        node->left = insert(node->left,key);
    if(key>node->key)
        node->right=insert(node->right,key);
    return node;
}
int main()
{
    struct node*root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    printf("PreOrder: \n");
    preorderTraversal(root);
    printf("\nPostOrder: \n");
    postorderTraversal(root);
    printf("\nInOrder: \n");
    inorderTraversal(root);

    return 0;
}
