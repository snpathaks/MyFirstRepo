//
//
//// implement new head:::::::::::::::::::;
///*
//#include<iostream>
//using namespace std;
//class Node {
//	public:
//		int data;
//		Node* next;
//		//constructor
//		Node(int data) {
//			this->data = data;
//			this->next = NULL;
//		}
//};
//void insertAtHead(Node* &head,int d) {
//	//new node create
//	Node* temp = new Node(d);
//	temp->next = head;
//	head = temp;
//}
//void print(Node* &head) {
//	Node* temp = head;
//	while(temp != NULL) {
//		cout<< temp->data<<" ";
//		temp = temp -> next;
//	}
//	cout<<endl;
//}
//
//int main () {
//	//created a new node
//	Node* node1 = new Node(10);
////	cout<<node1->data<<endl;
////	cout<<node1->next<<endl;
//	
//	//head pointed to node1
//	Node* head = node1;
//	print(head);
//	insertAtHead(head,12);
//	insertAtHead(head,15);
//	print(head);
//	
//	return 0;
//}*/
///*
//#include<iostream>
//using namespace std;
//class Node {
//	public:
//		int data;
//		Node* next;
//		//constructor
//		Node(int data) {
//			this->data = data;
//			this->next = NULL;
//		}
//};
//void insertAtTail(Node* &tail,int d) {
//	//new node create
//	Node* temp = new Node(d);
//	tail -> next = temp;
//	tail = temp;
//}
////void print(Node* &tail) {
////	Node* temp = tail;
////	while(temp != NULL) {
////		cout<< temp->data<<" ";
////		temp = temp -> next;
////	}
////	cout<<endl;
////}
//void print(Node* &head) {
//	Node* temp = head;
//	while(temp != NULL) {
//		cout<< temp->data<<" ";
//		temp = temp -> next;
//	}
//	cout<<endl;
//}
//
//int main () {
//	//created a new node
//	Node* node1 = new Node(10);
////	cout<<node1->data<<endl;
////	cout<<node1->next<<endl;
//	
//	//head pointed to node1
//	Node* tail=node1;
//	print(tail);
//	insertAtTail(tail,12);
//	print(tail);
//	insertAtTail(tail,15);
//	print(tail);
//	
//	return 0;
//} */
// 
// 
// 
////INSERTION IN LINKED LIST::::::::::::::::::::::::
//// insertathead:
//#include<iostream>
//using namespace std;
//class Node {
//  public:
//int data;
//Node* next;
////constructor
//Node(int data) {
//  this->data=data;
//  this->next=NULL;
//  
//}
//};
////new node create at head
//void InsertAtHead(Node* &head,int d){
//  Node* temp = new Node(d);
//  temp->next = head;
//  head = temp;
//}
//
//// new node create at tail
//void InsertAtTail(Node* &tail, int d){
//  Node* temp = new Node(d);
//  tail->next = temp;
//  tail = tail->next;
//  
//}
//
//
//
//void print(Node* &head){
//  Node* temp = head;
//  while(temp!= NULL){
//    cout<<temp->data<<" ";
//    cout<<temp->next<<" ";
//    
//  }   
//  cout<<endl;
//}
////insert at any position::::::::::::
//
//void insertAtPosition( Node* & head, int position, int d) {
//    //insert at Start
//    if(position == 1) {
//        InsertAtHead(head, d);
//        return;
//    }
//    Node* temp  = head;
//    int cnt = 1;
//    while(cnt < position-1) {
//        temp = temp->next;
//        cnt++;
//    }
////    //inserting at Last Position
////    if(temp -> next == NULL) {
////        insertAtTail(tail,d);
////        return ;
////    }
//    //creating a node for d
//    Node* nodeToInsert = new Node(d);
//    nodeToInsert -> next = temp -> next;
//    temp -> next = nodeToInsert;
//}
//
//int main () {
//  //created a new node
//  Node*node1=new Node(4);
//  cout<<node1->data<<endl;
//  cout<<node1->next<<endl;
//
//  //head pointed to node1
//  Node* head = node1;
//  print(head);
//  Node* tail = node1;
//  print(head);
// // cout<<"Insert at Head:"<<endl;
// //  InsertAtHead(head,12);
// //  print(head);
// //  InsertAtHead(head,15);
// //  print(head);
//  //cout<<"Insert at tail:"<<endl;
//  InsertAtTail(tail,12);
//  print(head);
//  InsertAtTail(tail,15);
//  print(head);
//  insertAtPosition(head,3,22);
//  print(head);
//}

//::::::::::::::::::::::::::::::::::::::::
	
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	
	node(int val) {
		data=val;
		next=NULL;
	}
		
};

void insertAtHead(node* &head,int val) {
	node* n=new node(val);
	n->next=head;
	head=n;
}
void insertAtTail(node* &head, int val) {
	node* n= new node(val);
	if(head==NULL) {
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next != NULL) {
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head) {
	node* temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
bool search(node* head,int key) {
	node* temp=head;
	while(temp!=NULL) {
		if(temp->data==key) {
			return true;
			
		}
		temp=temp->next;
	}
	return false;
	
}
int main () {
	
	node* head=NULL;
	
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	display(head);
	insertAtHead(head,4);
	display(head);
	cout<<search(head,4)<<endl;

	
	
}
	

