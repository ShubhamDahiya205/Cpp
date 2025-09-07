#include <iostream>
using namespace std;
struct Node{
    char data;
    Node* next;
};
class Linked_list{
    Node* head;
public:
    Linked_list(){ head = nullptr;}
    void insert(char c){
        if (!head){
            head = new Node{c, nullptr};
            return;
        }
        Node* new_node = new Node{c, nullptr};
        Node* temp = head;
        while (temp->next){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void remove_loop(){
        if ((head == nullptr) || (head->next == nullptr)) return;
        Node* slow = head;
        Node* fast = slow;
        while ((fast != nullptr) && (fast->next != nullptr)){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if (slow != fast) return;
        if (fast == head){
            while (fast->next != head){
                fast = fast->next;
            }
            fast->next = nullptr;
            return;
        }
        slow = head;
        while (slow->next != fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = nullptr; 
    }        
    void insert_loop(int p){
        if (!head || !head->next) return;
        if (p <= 0) return;
        Node* loop_node = nullptr;
        Node* temp = head;
        int count = 1;
        while (temp->next != nullptr){
            if (count == p) loop_node = temp;
            temp = temp->next;
            count++;
        }
        temp->next = loop_node; 
    }
    void print(int limit = 20){
        Node* temp = head;
        int count = 0;
        while (temp && (count <= limit)){
            cout << temp->data << " -> ";
            temp = temp->next;
            count++;
        }
        if (count>=limit){
            cout << "....\n";
            return;
        }
        cout << "NULL\n";
    }
};
int main(){
    Linked_list list;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " characters:\n";
    for (int i = 0; i < n; i++){
        char c;
        cin >> c;
        list.insert(c);
    }
    list.print();
    
    int pos;
    cout << "Enter position to create loop (0 for none): ";
    cin >> pos;
    if (pos > 0) list.insert_loop(pos);
    list.print();

    list.remove_loop();
    cout << "Final Linked List after removing loop:\n";
    list.print();
    cout << "\nBy Shubham Dahiya(00414802724)";
    return 0;
}