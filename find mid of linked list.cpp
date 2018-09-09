#include<iostream>
using namespace std;

class node {
	public:
	int data;
	 node * next;
	 
	 node (int data) {
	 	this->data= data;
	 	next == NULL;
	 }
	
	node * add () {
		int data;
		cin>>data;
		node * head = NULL ;
		node * tail = NULL;
		this->data=data;
		 while (data != -1 ) {
		 	node * newnode = new node(data);
		 	if (head == NULL) {
		 		head = newnode ;
		 		tail = newnode ;
			 }
		 	else {
		 		tail-> next = newnode ;
				 tail = tail-> next;
		 		
		 		}
		 			 cin>>data;
		 }
	return head; 
	} 	
		
		int print (node * head) {
			node * temp = head  ;
			while(head != NULL) {
				cout<<head->data<<" ";
				head = head->next ;
			}
		}
		
		
		node find_mid(node * head) {
			node * slow = head;
			node * fast = head->next;
			
			while (head != NULL && head->next != NULL) {
				if (fast == NULL || fast -> next == NULL){
					cout<<" mid is "<< slow->data;
					break;
				}
			
				slow = slow->next;
				fast = fast -> next -> next;
			}
			
		}

};
	
	int main () {
		node n1(2);
		node * head = n1.add();
		n1.print(head);
		n1.find_mid(head);
	}
	

