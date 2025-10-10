#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Circular{
    Node* head;
public:
    Circular(){
        head = nullptr;
    }
    void insert(int dt){
        Node* new_node = new Node{dt, nullptr};
        if (head == nullptr){
            head = new_node;
            new_node->next = new_node;
            return;
        }
        new_node->next = head;
        Node* temp = head;
        while (temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    int count(){
        if (head == nullptr){return 0;}
        int c = 1;
        Node* temp = head;
        while (temp->next != head){
            c++;
            temp = temp->next;
        }
        return c;
    }
    void split_3(Circular& q1, Circular& q2, Circular& q3){
        int num = count();
        if (num == 0){return;}
        q1.head = nullptr;
        q2.head = nullptr;
        q3.head = nullptr;  

        Node* temp = head;
        for (int i = 0; i < (num/3); i++){
            q1.insert(temp->data);
            temp = temp->next;  
        }

        num = num - (num/3);
        for (int i = 0; i < num/2; i++){
            q2.insert(temp->data);
            temp = temp->next;
        }

        num = num - (num/2);
        for (int i = 0; i < num; i++){
            q3.insert(temp->data);
            temp = temp->next;
        }      
    }
    void display(){
        if (head == nullptr)return;
        Node* temp = head->next;
        cout << head->data << " -> ";
        while (temp != head){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "HEAD\n";
    }
};
int main() {
    Circular c, q1, q2, q3;

    c.insert(10);
    c.insert(20);
    c.insert(30);
    c.insert(40);
    c.insert(50);
    c.insert(60);
    c.insert(70);
    c.insert(80);
    c.insert(90);

    cout << "Original list: ";
    c.display();

    c.split_3(q1, q2, q3);

    cout << "List 1: ";
    q1.display();

    cout << "List 2: ";
    q2.display();

    cout << "List 3: ";
    q3.display();

    return 0;
}