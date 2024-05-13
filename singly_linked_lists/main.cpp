#include <bits/stdc++.h>

using namespace std;

struct Node {
    int element;
    Node* next;

    Node(const int& e = 0, Node* n = nullptr)
    {
        element = e;
        next = n;
    }
};

struct SLinkedList {
    Node* head;
    long size;

    SLinkedList() {
        head = nullptr;
        size = 0;
    }

    // 1: print the elements of a linked list
    void print()
    {
        Node* p = head;
        while(p != nullptr){
            cout<< p->element<<endl;
            p = p->next;
        }
    }

    // 2: insert a node at the tail of a linked list
    void addTail(const int& s)
    {
        Node* newNode = new Node(s);
        if(head == nullptr){
            head = newNode;
        }
        else{
            Node* p = head;
            while (p->next != nullptr) {
                p = p->next;
            }
            p->next = newNode;
        }
    }

    // 3: insert a node at the head of a linked list
    void addFirst(const int& s)
    {
        Node* newNode = new Node;
        newNode->element = s;
        newNode->next = head;
        head = newNode;
    }

    // 4: insert a node at a specific position
    void insert(const int& s, int position)
    {
        Node* newNode = new Node(s);
        int index = 1;
        Node* p = head;
        if(position == 0){
            newNode->next = head;
        }
        while(index < position){
            p = p->next;
            index++;
        }
        if(p == nullptr){
            p->next = newNode;
        } else{
            newNode->next = p->next;
            p->next = newNode;
        }
    }

    // 5: delete a node
    void deleteNode(int position)
    {
        if(head == nullptr) return;
        if(position == 0){
            Node* t = head;
            head = head->next;
            delete t;
        }
        Node* p = head;
        int index = 0;
        while (p != nullptr && index < position - 1) {
            p = p->next;
            index++;
        }
        if (p == nullptr || p->next == nullptr) {
            return;
        }
        Node* nodeToDelete = p->next;
        p->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    // 6: print in reverse
    void printReverse()
    {
        vector<int> arr;
        Node* p = head;
        while (p != nullptr) {
            arr.push_back(p->element);
            p = p->next;
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr[i] <<endl;
        }
    }

    // 7: reverse a linked list
    void reverseList() {
        Node* p = head;
        Node* a = nullptr;
        Node* b = nullptr;

        while (p != nullptr) {
            a = p->next;
            p->next = b;
            b = p;
            p = a;
        }
        head = b;
    }

    // 8: compare two linked lists
    bool compareList(const SLinkedList& otherList)
    {
        Node* p = head;
        Node* q = otherList.head;

        while (p != nullptr && q != nullptr) {
            if (p->element != q->element) {
                return false;
            }
            p = p->next;
            q = q->next;
        }
        if (p == nullptr && q == nullptr) {
            return true;
        }

        return false;
    }

    // 9: merge two sorted linked lists
    void mergeList(const SLinkedList& otherList)
    {
        Node* head1 = head;
        Node* head2 = otherList.head;

        if (head1 == nullptr) {
            return;
        }
        if (head2 == nullptr) {
            return;
        }

        Node* mergedHead = nullptr;
        Node* mergedTail = nullptr;

        if (head1->element <= head2->element) {
            mergedHead = head1;
            mergedTail = head1;
            head1 = head1->next;
        } else {
            mergedHead = head2;
            mergedTail = head2;
            head2 = head2->next;
        }

        while (head1 != nullptr && head2 != nullptr) {
            if (head1->element <= head2->element) {
                mergedTail->next = head1;
                mergedTail = mergedTail->next;
                head1 = head1->next;
            } else {
                mergedTail->next = head2;
                mergedTail = mergedTail->next;
                head2 = head2->next;
            }
        }

        if (head1 != nullptr) {
            mergedTail->next = head1;
        }

        if (head2 != nullptr) {
            mergedTail->next = head2;
        }
    }

    // 10: get node value
    int getNode(int positionFromTail) {
        int index = 0, t = 0;
        Node* p = head;
        Node* b = head;

        while (b != nullptr) {
            b = b->next;
            t++;
        }

        while (index < t - positionFromTail - 1) {
            index++;
            p = p->next;
        }

        return p->element;
    }

    // 11: delete duplicate value nodes
    void deleteDuplicate()
    {
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        Node* p = head;
        while (p->next != nullptr) {
            if (p->element == p->next->element) {
                Node* t = p->next;
                p->next = p->next->next;
                delete t;
            } else {
                p = p->next;
            }
        }
    }

    // 12: cycle detection
    bool has_cycle() {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        Node* a = head;
        Node* b = head->next;

        while (b != nullptr && b->next != nullptr) {
            if (a == b) {
                return true;
            }
            a = a->next;
            b = b->next->next;
        }

        return false;
}

    // 13: find merge point of two lists

    // 14: reverse a doubly linked list

    // 15: insert a node into a sorted doubly linked list
};

int main()
{
    SLinkedList list;
    list.addFirst(3);
    list.addFirst(2);
    list.addFirst(1);
    list.addTail(4);
    list.head->next->next->next->next = list.head->next;
    cout<<list.has_cycle();
//    list.insert(5, 2);
//    list.deleteNode(2);

//    list.reverseList();

//    list.print();


    SLinkedList list2;
    list2.addFirst(3);
    list2.addFirst(2);
    list2.addFirst(1);

//    list.mergeList(list2);
//    list.deleteDuplicate();
//    list.print();

//    cout<<list.getNode(2);

//    cout << list.findMergePoint(list2);

    return 0;
}
