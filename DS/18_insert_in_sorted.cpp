#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
class Linked_list{
    Node* head;
public :
    Linked_list() {
        head = nullptr;
    }
    ~Linked_list(){
        Node* current = head;
        while (current){
            Node* to_delete = current;
            current = current->next;
            delete to_delete;
        }
    }
    void insert_beg(int dt){
        Node* new_node = new Node{dt, nullptr, nullptr};
        if (head == nullptr){
            head = new_node;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
    void display(){
        Node* temp = head;
        while (temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void insert(int dt){
        Node* new_node = new Node{dt, nullptr, nullptr};
        if (head == nullptr){
            head = new_node;
            return;
        }
        Node* temp = head;
        if ((dt <= head->data )){
            head->prev = new_node;
            new_node->next = head;
            head = new_node; 
            return;
        }
        while (temp != nullptr){
            if (temp->next == nullptr){
                temp->next = new_node;
                new_node->prev = temp;
                return;
            }
            if ((temp->data <= dt) && (temp->next->data >= dt)){
                new_node->next = temp->next;
                new_node->prev = temp;
                temp->next = new_node;
                new_node->next->prev = new_node;
                return;
            }
            temp = temp->next;
        }
    }
};
int main() {
    Linked_list list;

    cout << "Inserting into sorted list:\n";

    cout << "\nInsert 30\n";
    list.insert(30);
    list.display();

    cout << "\nInsert 10\n";
    list.insert(10);
    list.display();

    cout << "\nInsert 50\n";
    list.insert(50);
    list.display();

    cout << "\nInsert 40\n";
    list.insert(40);
    list.display();

    cout << "\nInsert 20\n";
    list.insert(20);
    list.display();

    cout << "\nShubham Dahiya (004 1480 2724)\n";
    return 0;
}
