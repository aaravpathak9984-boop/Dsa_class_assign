
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

// 2. Insert Front
void insertFront(Node*& head, int x) {
    Node* node = new Node(x);
    node->next = head;
    
    if(head) {
        head->prev = node;
    }
    
    head = node;
}

// 3. Insert End
void insertEnd(Node*& head, int x) {
    Node* node = new Node(x);
    
    if(head == NULL) {
        head = node;
        return;
    }
    
    Node* temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    
    temp->next = node;
    node->prev = temp;
}

// 4. Delete Node

void deleteNode(Node*& head, Node* node) {
    if (node == NULL) {
        return;
    }
    

    if (head == node) {
        head = node->next;
    }
    
    if (node->prev) {
        node->prev->next = node->next;
    }
    
    if (node->next) {
        node->next->prev = node->prev;
    }
    
    delete node;
}


Node* reverseDLL(Node* head) {
    Node* curr = head;
    Node* temp = NULL;
    
    while(curr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev; 
    }
    
    if(temp) {
        head = temp->prev;
    }
    
    return head;
}

//to print dll
void printDLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {

    Node* head = NULL;
    

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertFront(head, 5);
    
    cout << "after insrn: ";
    printDLL(head); 
    

    head = reverseDLL(head);
    cout << "after rev: ";
    printDLL(head); 
    

    deleteNode(head, head->next);
    cout << "after deln: ";
    printDLL(head); 
    
    return 0;
}

