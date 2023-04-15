#include <iostream>

using namespace std;

// Define the Node structure
struct Node {
    int data; // data stored in the node
    Node* next; // pointer to the next node
};

// Define the Linked List class
class LinkedList {
    private:
        Node* head; // pointer to the first node in the list

    public:
        // Constructor
        LinkedList() {
            head = nullptr;
        }

        // Destructor
        ~LinkedList() {
            Node* current = head;
            Node* next;

            while (current != nullptr) {
                next = current->next;
                delete current;
                current = next;
            }
        }

        // Add a new node to the beginning of the list
        void insertAtBeginning(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = head;
            head = newNode;
        }

        // Add a new node to the end of the list
        void insertAtEnd(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = nullptr;

            if (head == nullptr) {
                head = newNode;
            } else {
                Node* current = head;
                while (current->next != nullptr) {
                    current = current->next;
                }
                current->next = newNode;
            }
        }

        // Remove the first node from the list
        void removeFromBeginning() {
            if (head == nullptr) {
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
        }

        // Remove the last node from the list
        void removeFromEnd() {
            if (head == nullptr) {
                return;
            }
            if (head->next == nullptr) {
                delete head;
                head = nullptr;
                return;
            }
            Node* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }

        // Print the contents of the list
        void printList() {
            Node* current = head;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

// Main function for testing the Linked List class
int main() {
    LinkedList myList;

    myList.insertAtEnd(5);
    myList.insertAtBeginning(3);
    myList.insertAtEnd(7);
    myList.insertAtBeginning(1);

    myList.printList();

    myList.removeFromBeginning();
    myList.removeFromEnd();

    myList.printList();

    return 0;
}
