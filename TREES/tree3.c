
// #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node *left,*right;
// };

// struct node* createnode(int value){
//     struct node* newnode = (struct node * )malloc(sizeof(struct node));
//     newnode->data = value;
//     newnode->left = NULL;
//     newnode->right = NULL;
//     return newnode;
// }

// struct node* insert(struct node *root,int data){

//     if(root == NULL){
//     return createnode(data);
//     }

//     if(data < root->data){
//     root->left = insert(root->left,data);
//     }
//     else if(data > root->data){
//     root->right = insert(root->right,data);
//     }
    
//     return root;
// }
// void printinorder(struct node *root){
//     if(root!= NULL){
//         printinorder(root->left);
//         printf("%d ",root->data);
//         printinorder(root->right);
//     }
// }

// int isBST(struct node *root){
//     static struct node *prev = NULL;

//     if(root!=NULL){
//         if(!(isBST(root->left)))
//         return 0;

//         if(prev!=NULL && root->data <= prev->data)
//         return 0;

//         prev = root;

//         return isBST(root->right);
//     }else
//     return 1;
// }

// int main(){
//     struct node* root =NULL;

//     int a[] = {25,15,30,40,20,27,35};
//     int size = sizeof(a)/4;

//     root = insert(root,a[0]);

//     for(int i=1; i<size; i++){
//         insert(root , a[i]);
//     }
//     printf("Binary searcg tree(inorder traversal):");
//     printinorder(root);

//     printf("%d",isBST(root));
// }

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node* create(){
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    //printf("enter the data(-1 for no node):");
    scanf("%d",&x);

    if(x==-1)
    return 0;

    newnode->data = x;
    printf("enter left child of %d:",x);
    newnode->left = create();

    printf("enter right child of %d:",x);
    newnode->right = create();

    return newnode;
}

int isBST(struct node *root){
    static struct node *prev = NULL;

    if(root!=NULL){
        if(!(isBST(root->left)))
        return 0;

        if(prev!=NULL && root->data <= prev->data)
        return 0;

        prev = root;

        return isBST(root->right);
    }else
    return 1;
}

// void printinorder(struct node *root){
//     if(root!= NULL){
//         printinorder(root->left);
//         printf("%d ",root->data);
//         printinorder(root->right);
//     }
// }

int main (){
    struct node *root;
    printf("ENTER -1 FOR NO NODE\nenter the root of tree:");
    root = create();

    if(!isBST(root))
    printf("NOT A BST");
    else
    printf("IS A BST");

}