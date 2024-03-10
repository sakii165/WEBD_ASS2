
        if(prev!=NULL && root->data <= prev->data)
        return 0;

        prev = root;

        return isBST(root->right);
    }else