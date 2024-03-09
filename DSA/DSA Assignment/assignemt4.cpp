#include <bits/stdc++.h>
using namespace std;

struct Link {
    int value;
    struct Link *next;
};

struct LinkedList {
    Link *start;
    
    LinkedList() {
        start = nullptr;
    }

    // Add at the beginning
    void addFront(int num) {
        Link *newLink = new Link;
        newLink->value = num;
        newLink->next = start;
        start = newLink;
    }

    // Add at a given index
    void addMiddle(int num, int position) {
        Link *newLink = new Link;
        newLink->value = num;

        Link *prev = start;
        int idx = 1;
        while (prev != nullptr && idx < position) {
            prev = prev->next;
            idx++;
        }

        newLink->next = prev->next;
        prev->next = newLink;
    }

    // Add at the end
    void append(int num) {
        Link *newLink = new Link;
        newLink->value = num;
        Link *prev = start;

        while (prev->next != nullptr) {
            prev = prev->next;
        }

        prev->next = newLink;
        newLink->next = nullptr;
    }

    // Remove the first element
    void removeFirst() {
        if (start == nullptr)
            return;
        Link *temp = start;
        start = start->next;
        delete temp;
    }

    // Search for an element
    bool findValue(int num) {
        Link *temp = start;
        while (temp != nullptr) {
            if (temp->value == num)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Display the linked list
    void printList() {
        Link *temp = start;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;

    int num1 = 50;
    myList.addFront(num1);
    int num2 = 501;
    myList.addFront(num2);

    myList.addMiddle(1000, 2);

    int num3 = 500;
    myList.append(num3);
    myList.printList();

    myList.removeFirst();
    myList.printList();

    int searchValue = 50;
    if (myList.findValue(searchValue)) {
        cout << "Value found" << endl;
    } else {
        cout << "Value not found" << endl;
    }

    return 0;
}
