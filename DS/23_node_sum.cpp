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
    int total_sum(){
        if (head == nullptr)return 0;
        int sum = head->data;
        Node* temp = head->next;
        while (temp != head){
            sum += temp->data;
            temp = temp->next;
        }
        return sum;
    }
    void modify_sum(){
        int sum = total_sum();
        if (head == nullptr)return;
        head->data = sum - head->data;
        Node* temp = head->next;
        while (temp != head){
            temp->data = sum - temp->data;
            temp = temp->next;
        }
    }
};
int main() {
    Circular_Queue cq;
    cq.insert(10);
    cq.insert(20);
    cq.insert(30);
    cq.insert(40);

    cout << "Original Circular Queue:\n";
    cq.display();

    cout << "Total Sum of Elements: " << cq.total_sum() << endl;

    cq.modify_sum();
    cout << "After Modifying (sum - element):\n";
    cq.display();

    return 0;
}