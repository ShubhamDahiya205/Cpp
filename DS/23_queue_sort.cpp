#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Stack{
    Node* head;
    Node* top_ptr;
public:
    Stack(){
        head = nullptr;
        top_ptr = nullptr;
    }
    ~Stack(){
        while (head){
            pop();
        }
    }
    void push(int dt){
        Node* new_node = new Node{dt, nullptr};
        if (head == nullptr){
            head = new_node;
            top_ptr = new_node;
            return;
        }
        top_ptr->next = new_node;
        top_ptr = new_node;
    }
    void pop(){
        if (head == nullptr) return;
        Node* to_delete = top_ptr;
        if (top_ptr == head){
            head = nullptr;
            top_ptr = nullptr;
            delete to_delete;
            return;
        }
        Node* temp = head;
        while(temp->next != top_ptr){
            temp = temp->next;
        }
        top_ptr = temp;
        temp->next = nullptr;
        delete to_delete;
    }
    int top(){
        if (!head) return -1;
        return top_ptr->data;
    }
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
    bool check_sort(){
        Stack st;
        int expected_ele = 1;
        Queue q2;
        Node* temp = head;
        while (temp != nullptr){
            q2.enqueue(temp->data);
            temp = temp->next;
        }

        while (q2.front() != -1){
            int curr = q2.front();
            q2.deque();
            if (curr == expected_ele){
                expected_ele++;
                continue;
            }
            while (st.top() != -1 && st.top() == expected_ele){
                st.pop();
                expected_ele++;
            }
            if (curr == expected_ele){
                expected_ele++;
                continue;
            }
            if (st.top() != -1 && st.top() < curr){
                return false;
            }   
            st.push(curr);
        }
        while (st.top() != -1){
            if (st.top() == expected_ele){
                st.pop();
                expected_ele++;
            } else {
                return false;
            }
        }   
        return true;
    }
};
int main(){
    cout << "=== Test 1: Sortable Queue ===\n";
    Queue q1;
    q1.enqueue(3);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.display();
    cout << "Can be sorted? " << (q1.check_sort() ? "YES" : "NO") << '\n';

    cout << "\n=== Test 2: Not Sortable Queue ===\n";
    Queue q3;
    q3.enqueue(5);
    q3.enqueue(1);
    q3.enqueue(2);
    q3.enqueue(3);
    q3.enqueue(6);
    q3.enqueue(4);
    q3.display();
    cout << "Can be sorted? " << (q3.check_sort() ? "YES" : "NO") << '\n';
    return 0;
}