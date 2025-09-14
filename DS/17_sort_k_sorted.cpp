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
    void swap(Node* n1, Node* n2){
        if ((n1 == nullptr) || (n2 == nullptr) || (n1 == n2)){return;}
        
        Node* n1_0 = n1->prev;
        Node* n1_1 = n1->next;
        Node* n2_0 = n2->prev;
        Node* n2_1 = n2->next;
        
        if (n1_1 == n2){    //adjacent case 1
            n1->next = n2_1;
            n2->prev = n1_0;
            n1->prev = n2;
            n2->next = n1;
            if (n1_0 == nullptr){ //n1 is head
                head = n2;
            } else {
                n1_0->next = n2;
            }
            if (n2_1 != nullptr){
                n2_1->prev = n1;
            }
            return;
        }
        if (n2_1 == n1){    //adjacent case 2
            n1->prev = n2_0;
            n2->next = n1_1;
            n2->prev = n1;
            n1->next = n2;
            if (n2_0 == nullptr){ //n2 is head
                head = n1;
            } else {
                n2_0->next = n1;
            }
            if (n1_1 != nullptr){
                n1_1->prev = n2;
            }
            return;
        }

        n1->next = n2_1;
        n2->next = n1_1;
        n1->prev = n2_0;
        n2->prev = n1_0;

        if (n1_0 == nullptr){
            head = n2;
        } else{
            n1_0->next = n2;
        }
        if (n2_0 == nullptr){
            head = n1;
        } else {
            n2_0->next = n1;
        }
        if (n1_1 != nullptr){
            n1_1->prev = n2;
        }
        if (n2_1 != nullptr){
            n2_1->prev = n1;
        }
    }
    
    void sort_k_sorted(int k){
        Node* start = head;
        Node* temp = head;
        Node* min = head;
        while (start != nullptr){
            min = start;
            temp = start;
            for (int i = 0; (i <= k) && (temp != nullptr); i++){
                if (temp->data < min->data){
                    min = temp;
                }
                temp = temp->next;
            }
            Node* next_node = start->next;
            swap(start, min);
            start = next_node;
        }
    }
};
int main() {
    Linked_list list;
    cout << "Test case 1: K-sorted array with k=3\n";
    cout << "Inserting elements: 3, 2, 1, 5, 4, 7, 6, 5\n";
    list.insert_beg(5);
    list.insert_beg(6);
    list.insert_beg(7);
    list.insert_beg(4);
    list.insert_beg(5);
    list.insert_beg(1);
    list.insert_beg(2);
    list.insert_beg(3);
    
    cout << "Before sorting: ";
    list.display();
    list.sort_k_sorted(3);
    cout << "After k-sorting with k=3: ";
    list.display();
    cout << "\n" << string(40, '-') << "\n\n";
    
    Linked_list list2;
    cout << "Test case 2: Already sorted array\n";
    cout << "Inserting elements: 1, 2, 3, 4, 5\n";
    list2.insert_beg(5);
    list2.insert_beg(4);
    list2.insert_beg(3);
    list2.insert_beg(2);
    list2.insert_beg(1);
    
    cout << "Before sorting: ";
    list2.display();
    list2.sort_k_sorted(2);
    cout << "After k-sorting with k=2: ";
    list2.display();
    cout << "\n" << string(40, '-') << "\n\n";
    
    Linked_list list3;
    cout << "Test case 3: Single element\n";
    list3.insert_beg(42);
    cout << "Before sorting: ";
    list3.display();
    list3.sort_k_sorted(1);
    cout << "After k-sorting with k=1: ";
    list3.display();
    cout << "\n" << string(40, '-') << "\n\n";
    
    Linked_list list4;
    cout << "Test case 4: Nearly reverse sorted with k=2\n";
    cout << "Inserting elements: 4, 3, 2, 1\n";
    list4.insert_beg(1);
    list4.insert_beg(2);
    list4.insert_beg(3);
    list4.insert_beg(4);
    
    cout << "Before sorting: ";
    list4.display();
    list4.sort_k_sorted(3);
    cout << "After k-sorting with k=2: ";
    list4.display();
    cout << "\nShubham Dahiya (004 1480 2724)\n";
    return 0;
}