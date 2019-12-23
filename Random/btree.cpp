#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int dat;
    node* left;
    node* right;
    node(int x) : dat(x), left(NULL), right(NULL) {}
};

node* root = NULL ;



node* createnew(int dat){
    node* temp = new node(dat);
    // temp->dat = dat;
    // temp->left = NULL;
    // temp->right = NULL;
    return temp;
}

void Insert(node** root, int dat){
    if( *root == NULL){
        *root = createnew(dat);
        return;
    }
    else if(dat <= (*root)->dat){
        Insert(&(*root)->left,dat);
    }
    else{
        Insert(&(*root)->right,dat);
    }

}

bool Search(node* root,int dat){
    if(root == NULL ) return false;
    else if(root->dat == dat) return true;
    else if(dat <= root->dat) return Search(root->left,dat);
    else return Search(root->right,dat);
}


void Inorder(node* root){

    if(root == NULL) return;
    Inorder(root->left);
    cout << root->dat << " ";
    Inorder(root->right);
}

void Preorder(node* root){
    if(root == NULL) return;
    cout << root->dat << " ";
    Preorder(root->left);
    Preorder(root->right);
}


int height(node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(node->left);  
        int rheight = height(node->right);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}

// Finding Successor of a given element in the Tree
node* successor(node* root, int B){
    node* curr = root;
    node* succ = NULL;
    while(curr){
        if(curr->dat > B){
            succ = curr;
            curr = curr->left;
        }
        else curr = curr->right;
    }
    return succ;
}

int main(){
    // node* root = NULL;
    Insert(&root,15);    
    Insert(&root,10);
    Insert(&root,20);
    Insert(&root,25);
    Insert(&root,8);
    Insert(&root,12);

    if(Search(root,8)) cout << "found" << endl;
    else cout << "lol" << endl;
    cout << height(root) << "\n";
    Preorder(root);
    // cout << "\n" <<successor(root,15)->dat << endl;
}


