#include <iostream>
#include <string>
using namespace std;
struct Stud{
    int roll;
    string name;
};
struct Node{
    Stud data;
    Node* next;
};
class Linked_list{
    Node* head;
public:
    Linked_list(){
        head = nullptr;
    }
    ~Linked_list(){
        Node* current = head;
        while (current){
            Node* next = current->next;
            delete current;
            current = next; 
        }
    }
    void insert_beg(Stud s){
        Node* new_s = new Node{s, head};
        head = new_s;
    }
    void insert_end(Stud s){
        Node* new_s = new Node{s, nullptr};
        if (!head){
            head = new_s;
            return;
        }
        Node* current = head;
        while (current->next){
            current = current->next;
        }
        current->next = new_s;
    }
    void insert_any(Stud s, int p){
        if (p <= 0){ 
            cout << "Invalid position.\n";
            return;
        };
        if (p == 1){
            insert_beg(s);
            return;
        }
        Node* temp = head;
        for (int i = 1; (i < p) && (temp!=nullptr); i++){
            temp = temp->next;
        }
        if (temp == nullptr){
            cout << "Invalid position.\n";
            return;
        }
        Node* new_s = new Node{s, temp->next};
        temp->next = new_s;
    }
    void delete_beg(){
        if (!head){
            cout << "Empty List.\n"; 
            return;
        }
        Node* to_del = head;
        head = head->next;
        delete to_del;
    }
    void delete_end(){
        if (head == nullptr){
            cout << "Empty List.\n"; 
            return;
        }
        if ((head->next) == nullptr){
            delete_beg();
            return;
        }
        Node* temp = head;
        while (temp->next->next){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
    void delete_any(int p){
        if (head == nullptr){
            cout << "Empty List\n";
            return;
        }
        if (p<= 0){
            cout << "Invalid Position\n";
            return;
        }
        if (p == 1){
            delete_beg();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < p - 1 && (temp != nullptr); i++){
            temp = temp->next;
        }
        if (temp == nullptr){
            cout << "Position out of bounds.\n";
            return;
        }
        Node* to_del = temp->next;
        temp->next = temp->next->next;
        delete to_del; 
    }
    void reverse(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while (curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void display(){
        Node* temp = head;
        if (!temp) {
            cout << "List is empty.\n";
            return;
        }
        while(temp != nullptr){
            cout << "Roll: " << temp->data.roll << ", Name: " << temp->data.name << '\n';
            temp = temp->next;
        }
    }
};
int main(){
    Linked_list list;

    list.insert_end({1, "Alice"});
    list.insert_end({2, "Bob"});
    list.insert_beg({0, "Zara"});
    list.insert_any({3, "Charlie"}, 3);

    cout << "List after insertion:\n";
    list.display();
    list.delete_beg();
    cout << "\nList after deleting at beginning:\n";
    list.display();
    list.delete_end();
    cout << "\nList after deleting at end:\n";
    list.display();
    list.delete_any(2);
    cout << "\nList after deleting at position 2:\n";
    list.display();
    list.insert_end({4, "Diana"});
    list.insert_end({5, "Eve"});
    cout << "\nList before reversing:\n";
    list.display();
    list.reverse();
    cout << "\nList after reversing:\n";
    list.display();
    cout << "\nBy Shubham Dahiya(00414802724)";
    return 0;
}
