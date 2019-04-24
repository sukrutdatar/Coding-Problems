/*
    An XOR linked list is a more memory efficient doubly linked list. 
    Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node. 
    Implement an XOR linked list; it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.

    If using a language that has no pointers (such as Python), 
    you can assume you have access to get_pointer and dereference_pointer functions that converts between nodes and memory addresses.
*/

#include <iostream>
#include <iterator>
#include <cstdint>

struct XOR_Node
{
    int data;
    struct XOR_Node* both;
};

struct XOR_Node* XOR(struct XOR_Node*, struct XOR_Node*);
void print(XOR_Node*);

void add(XOR_Node**, int);
XOR_Node* get(XOR_Node*, int);

#ifndef UNIT_TEST
int main()
{   
    XOR_Node* head = NULL;
    int data[] = { 10, 20 ,30 ,40 ,50};
    size_t data_length = std::end(data) - std::begin(data);

    for (int i = 0; i < data_length; i++)
        add(&head, data[i]);

    print(head);

    for (int i = 1; i <= data_length; i++)
    {
        std::cout << std::endl << "element at index [" << i <<"] = " << get(head, i)->data;
    }

    std::cout << std::endl << std::endl;
    return 0;
}
#endif

struct XOR_Node* XOR(struct XOR_Node* m, struct XOR_Node* n)
{
    return (struct XOR_Node*) ((uintptr_t)m ^ (uintptr_t)n);
}

void print(XOR_Node* first)
{
    XOR_Node* prev = NULL;
    XOR_Node* next = NULL;

    std::cout << std::endl << "List data: \n";
    while (first != NULL)
    {
        std::cout << "[" << first->data << "]\t";
        next = (XOR_Node*)((uintptr_t)prev ^ (uintptr_t)first->both);
        prev = first;
        first = next;
    }
}

void add(XOR_Node** head, int element)
{
    XOR_Node* first = (*head);
    XOR_Node* prev = NULL;
    XOR_Node* next = NULL;

    XOR_Node* node = new XOR_Node;
    node->data = element;

    if (first == NULL)
    {
        node->both = XOR(NULL, NULL);
        *head = node;
        return;
    }

    while (first != NULL)
    {
        next = XOR(prev, first->both);
        prev = first;
        first = next;
    }

    node->both = XOR(prev, next);
    prev->both = XOR(prev->both, node);
}

XOR_Node* get(XOR_Node* first, int index)
{
    XOR_Node* prev = NULL;
    XOR_Node* next = NULL;
    int cnt = 1;
    
    while (first != NULL && cnt < index)
    {
        next = (XOR_Node*)((uintptr_t)prev ^ (uintptr_t)first->both);
        cnt++;
        prev = first;
        first = next;
    }
    return (first) ? first : prev;
}