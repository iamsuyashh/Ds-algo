#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *Convert2ll(vector<int> &arr)
{
    if (arr.size() == 0)
        return NULL;

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
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
};

/**
 * @brief Removes the head of the linked list and returns the new head
 *
 * @param head The head of the linked list
 * @return The new head of the linked list
 */
Node *removesHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

/**
 * @brief Removes the tail of the linked list and returns the new head
 *
 * @param head The head of the linked list
 * @return The new head of the linked list
 */
Node *removerTails(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

/**
 * @brief Removes the kth node from the linked list and returns the new head
 *
 * @param head The head of the linked list
 * @param k The index of the node to be removed
 * @return The new head of the linked list
 */
Node *removeKNode(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

/**
 * @brief Removes the node with the given element from the linked list and returns the new head
 *
 * @param head The head of the linked list
 * @param el The element to be removed
 * @return The new head of the linked list
 */
Node *removeElement(Node *head, int el)
{
    if (head == NULL)
        return head;
    if (head->data == el)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
  
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
       
        if (temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head1 = Convert2ll(arr);
    head1 = removesHead(head1);
    printLL(head1);
    Node *head2 = Convert2ll(arr);
    head2 = removerTails(head2);
    printLL(head2);
    Node *head3 = Convert2ll(arr);
    head3 = removeKNode(head3,4);
    printLL(head3);
     Node *head4 = Convert2ll(arr);
    head4 = removeElement(head4,8);
    printLL(head4);
    

    return 0;
}
