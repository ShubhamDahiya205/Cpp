#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Linked_list{
    Node* head;
 public:
    Linked_list(){
        head = nullptr;  
    }
    void insert_beg(int data){
        Node* new_node = new Node{data, head};
        if (head == nullptr){
            head = new_node;
            new_node->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        head = new_node;
    }
    void insert_end(int data){
        Node* new_node = new Node{data, head};
        Node* temp = head;
        if (head == nullptr){
            head = new_node;
            new_node->next = head;
            return;
        }
        while (temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void insert_any(int data, int p){
        if (p <= 0){return;}
        if (head == nullptr){return;}
        if (p == 1){
            insert_beg(data);
            return;
        }
        Node* new_node = new Node{data, nullptr};
        Node* temp = head;
        int i = 1;
        while ((i < p - 1) && (temp->next != head)){
            temp = temp->next;
            i++;
        }
        if ((temp->next == head) && (i != p-1)){return;}
        new_node->next = temp->next;
        temp->next = new_node;
    }
    void delete_beg(){
        if (head == nullptr){return;}
        if (head->next == head){
            delete head;
            Node* head = nullptr;
            return;
        }
        Node* to_del = head;
        Node* temp = head;
        while (temp->next != head){
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        delete to_del;
    }
    void delete_end(){
        if (head == nullptr){return;}
        if (head->next == head){
            delete head;
            Node* head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != head){
            temp = temp->next;
        }
        Node* to_del = temp->next;
        temp->next = head;
        delete to_del;
    }
    void delete_any(int p){
        if (p <= 0){return;}
        if (head == nullptr){return;}
        if (p == 1){
            delete_beg();
            return;
        }
        Node* temp = head;
        int i = 1;
        while ((i < p-1) && (temp->next != head)){
            temp = temp->next;
            i++;
        }
        if ((temp->next == head) && (i != p-1)){return;}
        Node* to_del = temp->next;
        temp->next = to_del->next;
        delete to_del;
    }
    void display(){
        if (head == nullptr){
            cout << "NULL\n";
            return;
        }
        Node* temp = head;
        cout << head->data << "->";
        while (temp->next != head){
            temp = temp->next;
            cout << temp->data << "->";
        }
        cout << "(head)\n";
    }
    void reverse(){
        if (head == nullptr){return;}
        if (head->next == head){return;}
        Node* prev = nullptr;
        Node* curr = head;
        Node* next_n = nullptr;
        while (curr->next != head){
            next_n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_n;
        }
        curr->next = prev;
        head->next = curr;
        head = curr;
    }
};
int main() {
    Linked_list cll;

    cout << "Inserting at beginning...\n";
    cll.insert_beg(10);
    cll.insert_beg(20);
    cll.insert_beg(30);
    cll.display();   // 30->20->10->NULL

    cout << "\nInserting at end...\n";
    cll.insert_end(40);
    cll.insert_end(50);
    cll.display();   // 30->20->10->40->50->NULL

    cout << "\nInserting at position 3...\n";
    cll.insert_any(25, 3);
    cll.display();   // 30->20->25->10->40->50->NULL

    cout << "\nDeleting beginning node...\n";
    cll.delete_beg();
    cll.display();   // 20->25->10->40->50->NULL

    cout << "\nDeleting end node...\n";
    cll.delete_end();
    cll.display();   // 20->25->10->40->NULL

    cout << "\nDeleting node at position 2...\n";
    cll.delete_any(2);
    cll.display();   // 20->10->40->NULL

    cout << "\nReversing list...\n";
    cll.reverse();
    cll.display();   // 40->10->20->NULL
    
    cout << "\nShubham Dahiya (004 1480 2724)";
    return 0;
}
