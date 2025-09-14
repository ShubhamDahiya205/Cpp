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
    void insert_end(int dt){
        Node* new_node = new Node{dt, nullptr, nullptr};
        if (head == nullptr){
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
    void insert_any(int dt, int p){
        if (p <= 0){ return;}
        if (p == 1){
            insert_beg(dt);
            return;
        }
        Node* new_node = new Node{dt, nullptr, nullptr};
        Node* temp = head;
        for (int i = 1; (i < p) && (temp != nullptr); i++){
            temp = temp->next;
        }
        if (temp == nullptr){ return;}
        new_node->next = temp->next;
        new_node->prev = temp;
        temp->next->prev = new_node;
        temp->next = new_node;
    }
    void delete_beg(){
        if (head == nullptr){return;}

        Node* to_delete = head;
        head = head->next;
        delete to_delete;

        if (head != nullptr){
            head->prev = nullptr;
        }    
    }
    void delete_end(){
        if (head == nullptr){return;}

        if (head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }

        Node* temp = head;
        while (temp->next->next != nullptr){
            temp = temp->next;
        }
        temp->prev->next = nullptr; 
        delete temp;
    }
    void delete_any(int p){
        if (p <= 0){ return;}
        if (p == 1){
            delete_beg();
            return;
        }

        Node* temp = head;
        for (int i = 1; (i < p) && (temp != nullptr); i++){
            temp = temp->next;
        }
        if (temp == nullptr){return;}

        if (temp->prev != nullptr){
            temp->prev->next = temp->next;
        }
        if (temp->next != nullptr){
            temp->next->prev = temp->prev;
        }
        delete temp;
    }
    void display(){
        Node* temp = head;
        while (temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void reverse(){
        if (head == nullptr){return;}

        Node* temp = head;
        Node* next_n = nullptr;
        while (temp->next != nullptr){
            next_n = temp->next;
            temp->next = temp->prev;
            temp->prev = next_n;
            temp = next_n;
        }

        temp->next = temp->prev;
        temp->prev = nullptr;
        
        head = temp;
    }
};
int main() {
    Linked_list list;
    cout << "Implementation of Doubly Linked List \n\n";

    cout << "Inserting at beginning: 10\n";
    list.insert_beg(10);
    cout << "Inserting at beginning: 20\n";
    list.insert_beg(20);
    cout << "Inserting at end: 30\n";
    list.insert_end(30);
    cout << "Inserting at end: 40\n";
    list.insert_end(40);
    cout << "Inserting 25 at position 3\n";
    list.insert_any(25, 3);
    list.display();

    cout << "\nDeleting from beginning\n";
    list.delete_beg();
    list.display();

    cout << "Deleting from end\n";
    list.delete_end();
    list.display();

    cout << "Deleting from position 2\n";
    list.delete_any(2);
    list.display();

    cout << "\nInserting at end: 50, 60\n";
    list.insert_end(50);
    list.insert_end(60);
    list.display();

    cout << "\nReversing the list\n";
    list.reverse();
    list.display();

    cout << "\nShubham Dahiya (004 1480 2724)\n";
    return 0;
}
