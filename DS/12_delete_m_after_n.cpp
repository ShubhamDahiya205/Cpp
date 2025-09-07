#include <iostream>
using namespace std;
struct Node{
    char data;
    Node* next;
};
class Linked_list{
    Node* head;
public:
    Linked_list() : head(nullptr) {}
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
    void delete_m_after_n(int m, int n){
        if (n <= 0){
            cout << "Invalid position.\n";
            return;
        }
        Node* temp = head;
        for (int i = 1; (i < n) && (temp != nullptr); i++){
            temp = temp->next;
        }
        if (temp == nullptr){
            cout << "Invalid position.\n";
            return;
        }
        Node* curr = temp;
        temp = temp->next;
        for (int i = 1; (i <= m) && (temp != nullptr); i++){
            Node* to_delete = temp;
            temp = temp->next;
            delete to_delete;
        }
        curr->next = temp;
    }
        void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
int main() {
    Linked_list list;
    int n, m, pos;
    char c;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> c;
        list.insert(c);
    }
    cout << "\nOriginal list: ";
    list.display();

    cout << "\nEnter position n (after which nodes should be deleted): ";
    cin >> pos;
    cout << "Enter number of nodes m to delete: ";
    cin >> m;
    list.delete_m_after_n(m, pos);
    cout << "\nList after deletion: ";
    list.display();

    cout << "\nBy Shubham Dahiya(00414802724)";
    return 0;
}