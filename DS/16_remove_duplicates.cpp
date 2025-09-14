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
    void remove_duplicates(){
        if (head == nullptr){return;}
        Node* temp = head;
        while (temp->next != nullptr){
            while ((temp->next != nullptr) && (temp->next->data == temp->data)){
                Node* to_delete = temp->next; 
                if (to_delete->next != nullptr){
                    to_delete->next->prev = temp;
                }
                temp->next = to_delete->next;
                
                delete to_delete;
            }
            if (temp->next != nullptr){
                temp = temp->next;
            }
        }
    }
};
int main() {
    Linked_list list;

    cout << "Inserting with duplicates: 10, 10, 20, 30, 30, 30, 40, 50, 50\n";
    list.insert_beg(50);
    list.insert_beg(50);
    list.insert_beg(40);
    list.insert_beg(30);
    list.insert_beg(30);
    list.insert_beg(30);
    list.insert_beg(20);
    list.insert_beg(10);
    list.insert_beg(10);

    cout << "\nOriginal list:\n";
    list.display();

    cout << "\nRemoving duplicates...\n";
    list.remove_duplicates();
    list.display();

    cout << "\nShubham Dahiya (004 1480 2724)\n";
    return 0;
}
