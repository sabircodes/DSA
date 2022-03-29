#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    int height;

    node(int val)
    {
        data = val;
        node *left = NULL;
        node *right = NULL;
        height = 1;
    }
};

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->height;
}

int getbalance(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return height(root->left) - height(root->right);
}

node *rightrotation(node *y)
{
    node *x = y->left;
    node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(height(y->left),
                    height(y->right)) +
                1;
    x->height = max(height(x->left),
                    height(x->right)) +
                1;

    return x;
}

node *leftrotation(node *x)
{
    node *y = x->right;
    node *t2 = y->left;

    y->left = x;
    x->right = t2;

    x->height = max(height(x->left),
                    height(x->right)) +
                1;
    y->height = max(height(y->left),
                    height(y->right)) +
                1;

    return y;
}

node *insert(node *root, int val)
{
    node *newNode = new node(val);
    if (root == NULL)
    {
        return newNode;
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }

    else if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        return root;
    }

    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getbalance(root);

    if (balance > 1 && val < root->left->data)
    {
        return rightrotation(root);
    }
        if (balance < -1 && val > root->right->data)
        {
            return leftrotation(root);
        }

        if (balance > 1 && val > root->left->data)
        {
            root->left = leftrotation(root->left);
            return rightrotation(root);
        }

        // Right Left Case
        if (balance < -1 && val < root->right->data)
        {
            root->right = rightrotation(root->right);
            return leftrotation(root);
        }

        /* return the (unchanged) node pointer */
        return root;
    }

void preorder(node *root)
{
    if(root != NULL)
    {
        cout << root->data <<"->";
        preorder(root->left);
        preorder(root->right);
    }
}
   

    int main()
    {
        // cout<<"preorder";
        node*root=NULL;
        root = insert(root, 10);
        root = insert(root, 5);
        root = insert(root, 2);
        cout<<"preorder"<<endl;
        preorder(root);
        return 0;
    }