#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *Convertarr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "--->";
        head = head->next;
    }
}
/**
 * @brief Inserts a new node with the given value at the head of the linked list and returns the new head
 *
 * @param head The head of the linked list
 * @param val The value of the new node to be inserted
 * @return The new head of the linked list
 */
Node *InsertAtHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

/**
 * @brief Inserts a new node with the given value at the end of the linked list and returns the original head
 *
 * @param head The head of the linked list
 * @param val The value of the new node to be inserted
 * @return The original head of the linked list
 */
Node *InsertAtLast(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node *InsertAtK(Node *head, int val, int k)
{
    if (head == NULL)
    {

        if (k == 1)
        {
            return new Node(val);

        }
        else return head;
    }
    if(k==1){
        return new Node(val,head);
    }

    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(val,temp->next);
            break;
        }
        temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = Convertarr2LL(arr);
    head = InsertAtHead(head, 9);
    head = InsertAtLast(head, 100);
    head = InsertAtK(head,25,1);
    printLL(head);
    return 0;
}
