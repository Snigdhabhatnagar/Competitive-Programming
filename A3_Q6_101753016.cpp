#include <iostream>
using namespace std;
 
//Declare Node                                
												// TO be NOTED 
												//LINKED LIST POSITIONS(indexing) ARE 
												//taken to be starting from '0'												
struct Node{                                   
    int num;
    Node *next;
};
 
//Declare starting  node
struct Node *head=NULL;
 
//Insert node at start
void insertNode(int n){
    struct Node *newNode=new Node;
    newNode->num=n;
    newNode->next=head;
    head=newNode;
}
 
//display all nodes 
void display(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->num<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
 void search(int x)
 {
 	 if(head==NULL){
        cout<<"Element not found!"<<endl;
        return;
    }
    
    int flag = 0;
 	struct Node *srch=head;
    while(srch!=NULL){
        if(x == srch->num)
        {
        	cout<<flag<<endl;
        	
        	break;
		}
		else
		{
		flag++;
        srch=srch->next;
    }}
 }

int main(){
     
    //display();
    insertNode(60);
    insertNode(50);
    insertNode(40);
    insertNode(35);
    insertNode(30);
     insertNode(20);
     insertNode(10);
     insertNode(5);
    display();
    search(50);
   // order of calling is in descending w.r.t the key values, so that they APPEAR in the order as given
    //display();
    return 0;
}
