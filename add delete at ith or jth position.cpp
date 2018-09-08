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
	

	
	node* deletenode (node * head, int j) {
		int count =0;
		node * temp = head;
		
		if(temp == NULL) {
			return head;
		}
		
		while (temp != NULL && count <j-1) {
			temp=temp->next;
			count++;
		}
		node * a = temp->next;
		node * b = a -> next;
		temp -> next = b;
		delete(a); 
	return head;
	}
	



};

int main() {
		cout<<"\n\n \t\t *****   L I N K E D - L I S T   "<<endl;
	node n1(1);
	cout<<"\n\n \t\t *****   L I N K E D - L I S T   "<<endl;
	node *head = n1.input();
	n1.input();
	cout<<"\n\n \t\t *****   element to be Inserted  "<<endl;
		n1.insertion(head, 3, 23);
		n1.print(head);
	cout<<"\n\n \t\t *****   element to be Deleted  "<<endl;
		n1.deletenode(head,2);
		n1.print(head);
		
}
