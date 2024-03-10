#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* createnode(int value){
    struct node* newnode = (struct node * )malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node *root,int data){

    if(root == NULL){
        return createnode(data);
    }

    if(data < root->data){
        root->left = insert(root->left,data);
    }else if(data > root->data){
        root->right = insert(root->right,data);
    }
    
    return root;
}

void printinorder(struct node *root){
    if(root!= NULL){
        printinorder(root->left);
        printf("%d ",root->data);
        printinorder(root->right);
    }
}

int main(){
    struct node* root =NULL;

    int a[] = {25,15,30,10,20,27,35};
    int size = sizeof(a)/4;

    root = insert(root,a[0]);

    for(int i=1; i<size; i++){
        insert(root , a[i]);
    }

    printf("Binary searcg tree(inorder traversal):");
    printinorder(root);


}
