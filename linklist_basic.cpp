<<<<<<< HEAD
#include<iostream>
using namespace std;

#include "node.cpp"

int main() {
	Node n1(1);
	Node * head = & n1; // store address of head 
	
	Node n2(2);
	n1.next = & n2;
	
	cout<<" data " << n1.data << " address "<< n1.next<<endl<< " Data 2 "<<n2.data<< " next is " <<n2.next;

}

/*
int main() {
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	n1.next = &n2;

	cout << n1.data << " " << n2.data << endl;


}
*/
=======
#include<iostream>
using namespace std;

#include "node.cpp"

int main() {
	Node n1(1);
	Node * head = & n1; // store address of head 
	
	Node n2(2);
	n1.next = & n2;
	
	cout<<" data " << n1.data << " address "<< n1.next<<endl<< " Data 2 "<<n2.data<< " next is " <<n2.next;

}

/*
int main() {
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	n1.next = &n2;

	cout << n1.data << " " << n2.data << endl;


}
*/
>>>>>>> 17460a8b083b1641c99dbdacd6ced5f319fd80dc
