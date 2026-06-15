#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* head) {

    if(head == NULL) {
        return;
    }
    
    Node* temp = head;
    

    while(temp != head){
        cout << temp->data << " ";
        temp = temp->next;
    } 
    
    cout << endl;
}

int main() {

    

    Node* head = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    

    head->next = node2;
    node2->next = node3;
    

    node3->next = head; 
    
    cout << "circular ll: ";
    print(head); 
    
    return 0;
}
