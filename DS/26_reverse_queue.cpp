#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head = nullptr;
        tail = nullptr;
    }
    ~Queue(){
        while(head != nullptr){
            deque();
        }
    }
    void enqueue(int dt){
        Node* new_node = new Node{dt, nullptr}; 
        if (head == nullptr){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        tail = new_node;
    }
    void deque(){
        if (head == nullptr){return;}
        Node* to_dlt = head;
        if (head == tail){
            head = nullptr;
            tail = nullptr;
            delete to_dlt;   
            return;
        }
        head = head->next;
        delete to_dlt;
    }
    int size(){
        if (head == nullptr) return 0;
        int c = 1;
        Node* temp = head;
        while (temp != tail){
            temp = temp->next;
            c++;
        }
        return c;
    }
    int front(){
        if (head == nullptr) return -1;
        return head->data;
    }
    Queue reverse(){
        Queue rev;
        Queue temp;
        if (head == nullptr) return rev;
        
        int size = this->size();
        Node* curr = head;
        while (curr != nullptr){
            temp.enqueue(curr->data);
            curr = curr->next;
        }   
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size - i - 1; j++){
                int x = temp.front();
                temp.deque();
                temp.enqueue(x);
            }
            rev.enqueue(temp.front());
            temp.deque();
        }
        return rev;
    }
    void display(){
        if (!head) return;
        Node* temp = head;
        cout << "Queue : ";
        while (temp){
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << "\n";
    }
};
int main() {
    Queue q;

    cout << "Enqueuing: 10, 20, 30, 40, 50\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();    
    
    cout << "\nReversing the queue...\n";
    Queue q2 = q.reverse();
    cout << "\nReversed Queue : \n";
    q2.display();    

    return 0;
}