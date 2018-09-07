#include<iostream>
using namespace std;

class node {
	public:
	int data;
	node * next;
	
	node(int data ) {
		this->data=data;
		this->next= NULL;
	}
	

	
	node *input() {
		int data;
		node *head=NULL;
		node *tail=NULL;
		
		cin>>data;
		while(data!=-1) {
		node *newnode = new node(data);
			if (head==NULL) {
				head= newnode;
				tail = newnode;
			}
		else  {
		
		tail->next=newnode;
			tail=tail->next;
			}
		cin>>data;
		}
	return head;
	
	}
	void print(node *head) {
		
		while (head!=NULL) {
			cout<<" "<<head->data;
			head=head->next;
			
		}
	
	}
};	

void count(node *head) {
		int count=0;
			while (head!=NULL) {
				head=head->next;
			count++;
			
		}
		cout<<" count is  "<<count;
	}

int main() {
	
	node n1(1);
	
	node * head = n1.input();
	
	
	n1.print(head);
	count(head);
}
