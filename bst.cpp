#include <iostream>
using namespace std;

class bstnode
{
public:
    bstnode();
    int data;
    bstnode *left;
    bstnode *right;
    bstnode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;

    }
    bstnode*insert(bstnode *root, int val);
};

bstnode::bstnode(){
    data=0;
    left=right=NULL;
}

bstnode *bstnode :: insert(bstnode *root, int val)
{
    bstnode *newnode = new bstnode(val);
    // bstnode* curr = root;
    // bstnode* prev = NULL;

    // while(curr!=NULL){
    //     if(curr->data>val){
    //         prev = curr;
    //         curr=curr->left;

    //     }
    //     else if (curr->data<val){
    //         prev = curr;
    //         curr=curr->right;
    //     }
    //     if(prev->data>val){
    //         prev->left=newnode;

    //     }
    //     else{
    //         prev->right=newnode;
    //     }

    //     return root


    // }
    if (root == NULL)
    {
        return newnode;
    }
    else if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }
    return root;
}

bool search(bstnode *root, int val)
{
    if (root == NULL)
    {
        // cout<<"The tree is empty!"<<endl;
        return false;
    }
    else if (val == root->data)
    {
        cout << "The tree contains the data you are looking for." << endl;
        return true;
    }
    else if (root->data >= val)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}
void inorder(bstnode *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

int main()
{
    bstnode node,*root = NULL;
    root = node.insert(root, 15);
    node.insert(root, 12);
    node.insert(root, 1);
    node.insert(root, 5);
    node.insert(root, 16);
    inorder(root);

    int n;
    cout << "enter the number you are looking for : " << endl;
    cin >> n;
    if (search(root, n) == true)
        cout << "found " << n << endl;
    else
    {
        cout << "error";
    }
    return 0;
}