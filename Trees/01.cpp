#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createTree()
{
    cout << "Enter the value for the node" << endl;
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    cout << "Enter the value to the left of the node" << endl;
    root->left = createTree();
    cout << "Enter the value to the left of the node" << endl;

    root->right = createTree();
    return root;
};
int main()
{
    Node *root = createTree();

    return 0;
}
