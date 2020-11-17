#include "linkedlist.h"

/** setting the default value of head and tail to NULL */

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

/** function for appending the shapes to the linked list */

void LinkedList::append(QString str){

    node *temp = new node;
    temp->data = str;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }

}

/** function to store the size of the linked list
 *  and increment the size with the adding of a new node */

int LinkedList::size(){
    node* temp = head;
    int i = 0;
    while (temp != 0){
        temp = temp -> next;
        i++;
    }
    return i;

}
