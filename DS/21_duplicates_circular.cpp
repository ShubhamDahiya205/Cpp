#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

class Circular_Queue{
    Node* head;
public:
    Circular_Queue(){
        head = nullptr;
    }
    void insert(int dt){
        Node* new_node = new Node{dt, nullptr};
        if (head == nullptr){
            head = new_node;
        }
        new_node->next = head;
        Node* temp = head;
        while (temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        if (head == nullptr)return;
        cout << head->data << " -> ";
        Node* temp = head->next;
        while (temp != head){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "HEAD\n";
    }
    int count_duplicates(){
        if (head == nullptr)return 0;
        int c = 0;
        Node* temp = head;
        Node* temp2 = head;
        do{
            temp2 = temp->next;
            do {
                if (temp2->data == temp->data)c++;
                temp2 = temp2->next;
            } while (temp2 != head);
            temp = temp->next;
        } while (temp->next != head);
        return c;
    }
};
int main() {
    Circular_Queue cq;
    cq.insert(10);
    cq.insert(20);
    cq.insert(10);
    cq.insert(30);
    cq.insert(20);

    cout << "Circular Queue Elements:\n";
    cq.display();

    cout << "Number of duplicate pairs: " << cq.count_duplicates() << endl;

    return 0;
}