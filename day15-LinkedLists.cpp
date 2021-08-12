#include <iostream>

using namespace std;

/* 
A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, next,
 pointing to another node (i.e.: the next node in the list).

A Node insert function is also declared in your editor. It has two parameters: a pointer, head, pointing to the first node of a linked list,
 and an integer, data, that must be added to the end of the list as a new Node object.

Task
Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument)
and inserts it at the tail of the linked list referenced by the  parameter. Once the new node is added, return the reference to the  node. */

class Node{
public:
    int data;
    Node* next;
    // constructor
    Node (int d){
        data = d;
        next = NULL;
    }
};

class Solution{
public:  
    Node* insert(Node *head, int data){
        
        // allocating new node
        Node* new_node = new Node(data);
        if ( !head ) {
             return new_node; 
             }
        // adding the data
        new_node->data = data;
        // making next of new node as the head's next
        new_node-> next = head->next;
        // move the head's next into the new node
        head->next = new_node;
        return head;

    }

    void display(Node* head){
        Node* n = head;
        while(n){
            cout << n->data <<endl;
            n = n->next;
        }
    }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}