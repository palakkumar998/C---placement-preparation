#include <iostream>

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists
Node *merge(Node *left, Node *right)
{
    if (!left)
        return right;
    if (!right)
        return left;

    Node *result = nullptr;
    if (left->data <= right->data)
    {
        result = left;
        result->next = merge(left->next, right);
    }
    else
    {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

// Function to get the middle of the linked list
Node *getMiddle(Node *head)
{
    if (!head)
        return head;
    Node *slow = head;
    Node *fast = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Merge sort for linked list
Node *mergeSort(Node *head)
{
    if (!head || !head->next)
        return head;

    Node *mid = getMiddle(head);
    Node *nextToMid = mid->next;
    mid->next = nullptr;

    Node *left = mergeSort(head);
    Node *right = mergeSort(nextToMid);

    return merge(left, right);
}

// Function to print the linked list
void printList(Node *head)
{
    while (head)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    std::cout << "Unsorted list: ";
    printList(head);

    head = mergeSort(head);

    std::cout << "Sorted list: ";
    printList(head);

    return 0;
}