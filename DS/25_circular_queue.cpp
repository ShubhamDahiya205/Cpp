#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Circular_Queue_LL{
    Node* head;
    Node* tail;
    int size;
    public:
    Circular_Queue_LL(int n = 5){
        head = nullptr;
        tail = nullptr;
        size = n;
    }
    void enqueue(int dt){
        if (this->count() >= size){
            cout << "Linked List Queue Overflow\n";
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
        tail->next = head;
    }
    int count(){
        if (head == nullptr) return 0;
        int c = 1;
        Node* temp = head->next;
        while ((temp != nullptr) && (temp != head)){
            c++;
            temp = temp->next;
        }
        return c;
    }
    void deque(){
        if (head == nullptr){
            cout << "Linked List Queue Underflow\n";
            return;
        }
        Node* to_dlt = head;
        if (head == tail){
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next;
            tail->next = head;
        }
        delete to_dlt;
    }
    void display(){
        if (head == nullptr){
            return;
        }
        cout << "Linked List Queue : "; 
        Node* temp = head;
        while ((temp->next != nullptr) && (temp->next != head)){
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << temp->data << "\n";
    }
};
class Circular_Queue_Array{
    int head, tail, size;
    int* arr;
    public:
    Circular_Queue_Array(int n = 5){
        head = -1;
        tail = -1;
        size = n;
        arr = new int[size];
    }
    void enqueue(int dt){
        if (head == -1){
            head++;
            tail++;
            arr[tail] = dt;
            return;
        }
        tail++;
        if (tail == size){
            tail = 0;
        }
        if (head == tail){
            cout << "Array Queue Overflow\n";
            tail--;
            if (tail == -1){
                tail = size - 1;
            }
            return;
        }
        arr[tail] = dt;
    }
    void deque(){
        if (head == -1){
            cout << "Array Queue Underflow\n";
            return;
        }
        if (head == tail){
            head = -1;
            tail = -1;
            return;
        }
        head++;
        if (head == size){
            head = 0;
        }        
    }
    void display(){
        if (head == -1){
            return;
        }
        if (head == tail){
            cout << "Array Queue : " << arr[head] << '\n';
            return;
        }
        int temp = head;
        cout << "Array Queue : ";
        while (temp != tail){
            cout << arr[temp] << "  ";
            temp++;
            if (temp == size){
                temp = 0;
            }
        }
        cout << arr[temp] << '\n';
    }
};
int main() {
    cout << "=== Circular Queue using Linked List and Array ===\n";
    Circular_Queue_LL q1;
    Circular_Queue_Array q2(5);
    cout << "Inserting : 10, 20, 30, 40, 50 \n";
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    
    q2.enqueue(10);
    q2.enqueue(20);
    q2.enqueue(30);
    q2.enqueue(40);
    q2.enqueue(50);
    q2.display();
    
    cout << "\nInserting : 60\n";
    q1.enqueue(60);
    q2.enqueue(60);
    
    cout << "\nDeque Operation (3 times)\n";
    q1.deque();
    q1.deque();
    q1.deque();
    q1.display();
    q2.deque();
    q2.deque();
    q2.deque();
    q2.display();
    
    cout << "\nInserting : 60\n";
    q1.enqueue(60);
    q1.display();
    q2.enqueue(60);
    q2.display();
    
    cout << "\nDeque Operation (4 times)\n";
    q1.deque();
    q1.deque();
    q1.deque();
    q1.deque();
    q2.deque();
    q2.deque();
    q2.deque();
    q2.deque();

    return 0;
}
