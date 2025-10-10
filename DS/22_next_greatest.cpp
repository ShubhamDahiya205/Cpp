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
    void next_greatest_insert(){
        if ((head == nullptr))return;
        Node* temp = head;
        Node* temp_2 = nullptr;
        while (temp->next != head){
            temp_2 = temp->next;
            while (temp_2 != head){
                if (temp_2->data > temp->data){
                    temp->data = temp_2->data; 
                    break;
                }
                temp_2 = temp_2->next;
            }
            if (temp_2 == head){
                temp->data = -1;
            }
            temp = temp->next;
        }
        temp->data = -1;
    }
};
int main() {
    Circular_Queue cq;
    cq.insert(10);
    cq.insert(5);
    cq.insert(20);
    cq.insert(15);
    cq.insert(8);

    cout << "Original Circular Queue:\n";
    cq.display();

    cq.next_greatest_insert();
    cout << "\nAfter Next Greatest Replacement:\n";
    cq.display();

    return 0;
}