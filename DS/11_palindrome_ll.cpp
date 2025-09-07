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
    Node* reverse(){
        if (head == nullptr){
            return nullptr;
        }
        Node* prev = nullptr;
        Node* curr = head;
        Node* temp = nullptr;
        while (curr != nullptr){
            Node* new_n = new Node{curr->data, prev};
            prev = new_n;
            curr = curr->next;
        }
        return prev;
    }
    bool check_palindrome(Node* reverse_head){
        Node* temp1 = head;
        Node* temp2 = reverse_head;
        while ((temp1 != nullptr) && (temp2 != nullptr)){
            if (temp1->data != temp2->data){
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};
int main() {
    Linked_list list;
    int n;
    char c;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << '\n';
    for (int i = 0; i < n; i++) {
        cout << "Enter data for node " << i + 1 << " (char): ";
        cin >> c;
        list.insert(c);
    }
    cout << '\n';
    if (list.check_palindrome(list.reverse())) {
        cout << "The linked list is a palindrome.\n";
    } else {
        cout << "The linked list is NOT a palindrome.\n";
    }    
    cout << "\nBy Shubham Dahiya(00414802724)";
    return 0;
}