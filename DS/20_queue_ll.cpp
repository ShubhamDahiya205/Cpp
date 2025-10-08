#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Queue{
    Node* head;
    Node* tail;
    int size = 5;
    public:
    Queue(){
        head = nullptr;
        tail = nullptr;
    }
    void enqueue(int dt){
        if (count_elements() >= 5){
            cout << "Overflow\n";
            return;
        }
        Node* new_node = new Node{dt, nullptr};
        if (head == nullptr){
            head = new_node;
        }
        if (tail != nullptr){
            tail->next = new_node;
        }
        tail = new_node;
    }
    void deque(){
        if (head == nullptr){
            cout << "Underflow\n";
            return;}
        Node* to_dlt = head;
        head = head->next;
        if (head == nullptr){
            tail = nullptr;
        }
        delete to_dlt;
    }
    void display(){
        if (head == nullptr){return;}
        cout << "Queue : ";
        Node* temp = head;
        while (temp->next != nullptr){
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << temp->data << "\n";
    }
    int count_elements(){
        int c = 0;
        Node* temp = head;
        while (temp!= nullptr){
            c++;
            temp = temp->next;
        }
        return c;
    }
};
int main() {
    Queue q;

    cout << "\nLinear Queue Implementation using Linked List\n";
    cout << "\nInserting 10, 20, 30, 40, 50\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    
    cout << "\nInserting 60 ...\n";
    q.enqueue(60);
    q.display();

    cout << "\nDeque Operation (3 times)\n";
    q.deque();
    q.deque();
    q.deque();
    q.display(); 
    
    cout << "\nDeque Operation (3 times)\n";
    q.deque();
    q.deque();
    q.deque(); 

    q.display();
    cout << "\nShubham Dahiya (004 1480 2724)";
    return 0;
}
