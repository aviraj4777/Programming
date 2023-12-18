#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        Node *temp = new Node(data);
        return temp;
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}
Node *search(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        return root;
    }
    if (data < root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}
Node *findMin(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL)
    {
        return root;
    }
    return findMin(root->left);
}
Node *findMax(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right == NULL)
    {
        return root;
    }
    return findMax(root->right);
}
Node *deleteNode(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    cout << "Aviraj Kumar \nUID:- 21BCS10973 \n\n";

    cout << "Enter 10 elements in Binary Search Tree \n";
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin>>a;
        root = insert(root, a);
    }
    cout << "InOrder Traversal " << endl;
    inorder(root);

    cout << "\nPreOrder Traversal" << endl;
    preorder(root);

    cout << "\nPostOrder Traversal" << endl;
    postorder(root);

    cout << "\nSearching in BST " << endl;
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    Node *temp = search(root, data);
    if (temp == NULL)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    Node *min = findMin(root);
    cout << "Min Element in BST " << min->data << endl;

    Node *max = findMax(root);
    cout << "Max Element in BST " << max->data << endl;

    cout << "Deletion in BST " << endl;
    cout << "Enter the data" << endl;
    int value;
    cin >> value;
    root = deleteNode(root, value);

    cout<<"\nAfter Deletion, InOrder Traversal "<<endl;
    inorder(root);
}
