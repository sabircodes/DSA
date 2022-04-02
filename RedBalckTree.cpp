#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *parent; // parent
    node *left;   // left
    node *right;
    int color; // 1->red  , 0->black
};

typedef node *nodeptr;
class RedBlackTree
{
private:
    nodeptr root;
    nodeptr TNULL;

    void initializeNode(nodeptr node, nodeptr parent)
    {
        node->data = 0;
        node->parent = parent;
        node->left = nullptr;
        node->right = nullptr;
        node->color = 0;
    }

    void preorder(nodeptr node)
    {
        if (node)
        {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    void inorder(nodeptr node)
    {
        if (node)
        {
            inorder(node->left);
            cout << node->data << "->";
            inorder(node->right);
        }
    }

    void postorder(nodeptr node)
    {
        if (node)
        {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << "->";
        }
    }

    nodeptr searchtree(nodeptr node, int val)
    {
        if (node == TNULL || val == node->data)
        {
            return node;
        }

        if (val < node->data)
        {
            return searchtree(node->left, node->data);
        }
        else
        {
            return searchtree(node->right, node->data);
        }
    }

    void deleteNode(nodeptr node)
    {
        nodeptr s;
        while (node != root && node->color == 0)
        {
            if (node == node->parent->left)
            {
                s = node->parent->right;
                if (s->color == 1)
                { // if s is red
                    s->color = 0;
                    node->parent->color = 1;
                    leftrotation(node->parent);
                    s = node->parent->right;
                }
                if (s->left->color == 0 && s->right->color == 0)
                {
                    s->color = 1;
                    node = node->parent;
                }
                else
                {
                    if (s->right->color == 1)
                    {
                        s->left->color = 0;
                        s->color = 1;
                        rightrotation(s);
                        s = node->parent->right;
                    }
                    s->color = node->parent->color;
                    node->parent->color = 0;
                    s->right->color = 0;
                    leftrotation(node->parent);
                    node = root;
                }
            }
            else
            {
                s = node->parent->left;
                if (s->color == 1)
                {
                    s->color = 0;
                    node->parent->color = 1;
                    rightrotation(node->parent);
                    s = node->parent->left;
                }
                if (s->left->color == 0 && s->right->color == 0)
                {
                    s->color = 1;
                    node = node->parent;
                }
                else
                {
                    if (s->left->color == 1)
                    {
                        s->right->color = 0;
                        s->color = 1;
                        leftrotation(s);
                        s = node->parent->left;
                    }
                    s->color = node->parent->color;
                    node->parent->color = 0;
                    s->right->color = 0;
                    rightrotation(node->parent);
                    node = root;
                }
            }
        }
        node->color = 0;
    }

    void fixinsert(nodeptr k)
    {
        nodeptr u;
        while (k->parent->color == 1)
        {
            // 1 is red
            if (k->parent == k->parent->parent->right)
            {
                u = k->parent->parent->left;
                if (u->color == 1)
                {
                    // if u is red then change color
                    u->color = 0;                 // changing uncle to black
                    k->parent->color = 0;         // changing parent to black
                    k->parent->parent->color = 1; // changing grandparent to red
                    k = k->parent->parent;        // making the new node grandchild
                }

                else
                {
                    if (k == k->parent->left)
                    {

                        k = k->parent;
                        rightrotation(k);
                    }

                    else
                    {
                        k->parent->color = 0;
                        k->parent->parent->color = 1;
                        leftrotation(k->parent->parent);
                    }
                }
            }

            else
            {
                u = k->parent->parent->right;
                if (u->color == 1)
                {
                    u->color = 0;
                    k->parent->parent->color = 1;
                    k->parent = 0;
                    k = k->parent->parent;
                }
                else
                {
                    if (k == k->parent->right)
                    {
                        k = k->parent;
                        leftrotation(k);
                    }
                    k->parent->color = 0;
                    k->parent->parent->color = 1;
                    rightrotation(k->parent->parent);
                }
            }
            if (k == root)
            {
                break;
            }
        }
        root->color = 0;
    }

    void printHelper(nodeptr root, string indent, bool last)
    {
        // print the tree structure on the screen
        if (root != TNULL)
        {
            cout << indent;
            if (last)
            {
                cout << "R----";
                indent += "     ";
            }
            else
            {
                cout << "L----";
                indent += "|    ";
            }

            string sColor = root->color ? "RED" : "BLACK";
            cout << root->data << "(" << sColor << ")" << endl;
            printHelper(root->left, indent, false);
            printHelper(root->right, indent, true);
        }
        // cout<<root->left->data<<endl;
    }

public:
    RedBlackTree()
    {
        TNULL = new node;
        TNULL->color = 0;
        TNULL->left = nullptr;
        TNULL->right = nullptr;
        root = TNULL;
    }
    void Preorder()
    {
        preorder(this->root);
    }
    void Inorder()
    {
        inorder(this->root);
    }

    void Postorder()
    {
        postorder(this->root);
    }

    nodeptr Searchtree(int k)
    {
        return searchtree(this->root, k);
    }
    void leftrotation(nodeptr x)
    {
        nodeptr y = x->right;
        x->right = y->left;
        if (y->left != TNULL)
        {
            y->left->parent = x;
        }
        y->parent = x->parent;
        if (x->parent == nullptr)
        {
            this->root = y;
        }
        else if (x == x->parent->left)
        {
            x->parent->left = y;
        }
        else
        {
            x->parent->right = y;
        }
        y->left = x;
        x->parent = y;
    }

    void rightrotation(nodeptr x)
    {
        nodeptr y = x->left;
        x->left = y->right;
        if (y->right != TNULL)
        {
            y->right->parent = x;
        }
        y->parent = x->parent;
        if (x->parent == nullptr)
        {
            this->root = y;
        }
        else if (x == x->parent->right)
        {
            x->parent->right = y;
        }
        else
        {
            x->parent->left = y;
        }
        y->right = x;
        x->parent = y;
    }

    void insert(int key)
    {
        nodeptr Node = new node;
        Node->parent = nullptr;
        Node->data = key;
        Node->left = TNULL;
        Node->right = TNULL;
        Node->color = 1; // new node must be red

        nodeptr y = nullptr;
        nodeptr x = this->root;

        while (x != TNULL)
        {
            y = x;
            if (Node->data < x->data)
            {
                x = x->left;
            }
            else
            {
                x = x->right;
            }
        }

        // y is parent of x
        Node->parent = y;
        if (y == nullptr)
        {
            root = Node;
        }
        else if (Node->data < y->data)
        {
            y->left = Node;
        }
        else
        {
            y->right = Node;
        }

        // if new node is a root node, simply return
        if (Node->parent == nullptr)
        {
            Node->color = 0;
            return;
        }

        // if the grandparent is null, simply return
        if (Node->parent->parent == nullptr)
        {
            return;
        }

        // Fix the tree
        fixinsert(Node);
    }

    void prettyPrint()
    {
        if (root)
        {
            printHelper(this->root, "", true);
        }
    }
};
int main()
{
    RedBlackTree bst;
    bst.insert(8);
    bst.insert(18);
    bst.insert(5);
    bst.insert(15);
    bst.insert(17);
    bst.insert(25);
    bst.insert(40);
    bst.insert(80);
    bst.prettyPrint();

    return 0;
}