#include <bits/stdc++.h>
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

class Linklist {
public:
    Node* head;

    Linklist() {
        head = NULL;
    }


    void rev() {
        Node* pr = NULL;
        Node* c = head;
        Node* fo = NULL;
        while (c != NULL) {
            fo = c->next;
            c->next = pr;
            pr = c;
            c = fo;
        }
        head = pr;
    }


    void insE(int x) {
        Node* newnode = new Node(x);
        if (head == NULL) {
            head = newnode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }


    void printlist() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Linklist l;


    l.insE(10);
    l.insE(20);
    l.insE(30);


    cout << "Original List: ";
    l.printlist();


    l.rev();


    cout << "Reversed List: ";
    l.printlist();

    return 0;
}
