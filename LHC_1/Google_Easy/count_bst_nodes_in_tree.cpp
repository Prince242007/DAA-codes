#include <bits/stdc++.h>
using namespace std;
/* Binary Tree Node Structure
 */
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class Solution
{
public:
    void get_count(Node *root, int l, int h, int &c)
    {
        if (root == nullptr)
        {
            return  ;
        }
        if (root->data >= l && root->data <= h)
            c++;
        get_count(root->left, l, h, c);
        get_count(root->right, l, h, c);
    }
    int getCount(Node *root, int l, int h)
    {
        int c = 0;
          get_count(root,l,h,c);
        return c;
    }
};
int main()
{
    Solution s;
    Node *root = new Node(10);
    Node *child1 = new Node(5);
    Node *child2 = new Node(50);
    Node *child3 = new Node(1);
    Node *child4 = new Node(40);
    Node *child5 = new Node(100);
    root->left = child1;
    root->right = child2;
    child1->left = child3;
    child1->right = nullptr;
    child2->left = child4;
    child2->right = child5;
    cout << s.getCount(root, 5, 45);

    return 0;
}