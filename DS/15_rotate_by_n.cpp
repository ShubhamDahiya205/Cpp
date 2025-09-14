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
    void rotate(int n, char direction){
        if ((n <= 0) || (head == nullptr) || (head->next == nullptr)){return;}
        int length = 1;
        Node* temp = head;

        while (temp->next != nullptr){
            temp = temp->next;
            length++;
        }

        Node* last = temp;
        head->prev = last;
        last->next = head;
        temp = head;

        int k = n % length;
        if (direction == 'r'){
            k = length - k;
        }
        // Left Rotate  : first n nodes to last
        // Right Rotate : last  n nodes to first
        //          or first l-n nodes to last 
        for (int i = 0; i < k - 1; i++){
            temp = temp->next;
        }
        
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
    }
};
int main() {
    Linked_list list;

    cout << "Rotation of Doubly Linked List : \n\n";
    cout << "Inserting at beginning: 10, 20, 30, 40, 50\n";
    list.insert_beg(10);
    list.insert_beg(20);
    list.insert_beg(30);
    list.insert_beg(40);
    list.insert_beg(50);

    cout << "Original list:\n";
    list.display();

    cout << "\nLeft rotate by 2:\n";
    list.rotate(2, 'l');
    list.display();

    cout << "\nRight rotate by 2:\n";
    list.rotate(2, 'r');
    list.display();

    cout << "\nLeft rotate by 7 (> length, wraps around):\n";
    list.rotate(7, 'l');
    list.display();

    cout << "\nRight rotate by 3:\n";
    list.rotate(3, 'r');
    list.display();

    cout << "\nShubham Dahiya (004 1480 2724)\n";
    return 0;
}