#include<iostream>
using namespace std;

class node {
	public:
		int data;
		node * next;
		
		node(int data) {
			this->data=data;
			next=NULL;
		}

	int print(node * head) {
		while(head!=NULL) {
			cout<<" "<<head->data;
			head=head->next;
		
		}
	}

	node *input() {
		int data;
		cin>>data;
		node *head;
		node *tail;
		
		while (data!=-1) {
			node *newnode = new node(data);
			if(head==NULL) {
				head=newnode;
				tail=newnode;
			}
		else {
			tail->next=newnode;
			tail=tail->next;
		}
	
	cin>>data;
		}
		
	return head;
	}

	node insertion(node *head, int i, int data) {
		int count = 0;
		node *newnode = new node(data);
		node *temp =head;
		while(count<i-1){
			temp=temp->next;
			count++;
		}
			node *a= temp->next;
			temp->next=newnode;
			newnode->next=a;
		
	}

};

int main() {
	node n1(1);
	node *head = n1.input();
	n1.input();
	n1.insertion(head, 3, 23);
		n1.print(head);
}
