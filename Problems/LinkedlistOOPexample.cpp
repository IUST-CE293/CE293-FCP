#include<iostream>

class Node{
    int value;
    Node* next;
    Node* previous;
};

class DoublyLinkedList{
    public:
        Node* head;
        Node* tail;
        DoublyLinkedList(int n)
        {
            Node* cur = head;
            head->previous = nullptr;
            for(int i = 0; i < n; i++){
                cur->value=i;
                Node* newNode = new Node;
                cur->next= newNode;
                newNode->previous= cur;
                cur = cur->next;
            }
            cur->next = nullptr;
            this->tail = cur;
        }
        void addNode(int x)
        {
            Node* cur = head;
            while(cur->next != NULL){
                cur = cur->next;
            }
            Node* newNode = new Node;
            newNode->value = x;
            cur->next = newNode;
            newNode->previous = cur;
            newNode->next = nullptr;
        }
        void addNodeEasy(int x)
        {
            Node* newNode = new Node;
            newNode->value = x;
            newNode->previous = tail;
            this->tail = newNode;
            tail->next = nullptr;
        }
        void removeNode(int index)
        {
            Node* cur = head;
            for(int i=0;i<index-1;i++){
                cur = cur->next;
            }
            auto temp = cur->next;
            cur->next = cur->next->next;
            cur->next->next->previous = cur;
            delete temp;
            temp = nullptr;
        }
        void append(DoublyLinkedList &list)
        {
            this->tail->next = list.head;
            list.head->previous = this->tail;
            this->tail = list.tail;
            list.head = nullptr;
            list.tail = nullptr; 
        }
};

void traverseLinkedList(Node* head)
{
    Node* cur = head; //cur is abbreviation of current
    while(cur->next != NULL){
        std::std::cout << cur->value << ' ';
        cur = cur->next;//this goes to the next node
    }
}