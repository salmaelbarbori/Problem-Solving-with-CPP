#include<iostream>
using namespace std;

class linkedListNode
{
    public:
        int data;
        linkedListNode *next;

    linkedListNode (int _data) {
        this->data = _data;
        this->next = NULL;
    }
};

class linkedListIterator
{
    private:
        linkedListNode *currentNode;

    public:
        linkedListIterator ()
        {
            currentNode = NULL;
        }
    public:
        linkedListIterator (linkedListNode *node)
        {
            currentNode = node;
        };
    public:
        int data ()
        {
            return this->currentNode->data;
        }
    linkedListIterator next () {
        this->currentNode = this->currentNode -> next;
        return *this;
    }
    linkedListNode *current () {
        return this->currentNode;
    }
};

class linkedList
{
    public:
        linkedListNode *head = NULL;
        linkedListNode *tail = NULL;
        linkedListIterator begin () {
            linkedListIterator itr(this->head);
            return itr;
        };
        void printList () {
            for (linkedListIterator itr=this->begin();itr.current()!=NULL;itr.next())
            {
                cout<<itr.data()<<"->";
            }
        }
        void insertLast(int _data) {
            linkedListNode *newNode =new linkedListNode(_data);
            if (this->head == NULL) {
                this->head = newNode;
                this->tail = newNode;    
            }
            else {
                this->tail->next = newNode;
                this->tail = newNode;
            }
        }
};

int main () {
    linkedList *list = new linkedList ();
    list->insertLast(5);
    list->insertLast(4);
    list->insertLast(2);

    list->printList();
    return 0;
}