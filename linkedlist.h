#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=NULL;
	}
};

struct Linkedlist{
	
	Node *head=NULL;
	
	void insert(int val){
		Node *nn=new Node(val);
		if(head==NULL){
			head=nn;
			return;
		}
		Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=nn;
	}
	
	void remove(int val){
		if(head==NULL){
			cout<<"empty linked list"<<endl;
			return;
		}
		if(head->data==val){
			Node* temp=head;
			head=head->next;
			delete temp;
			return;
		}
		
			
		Node *curr=head;
		while(curr->next!=NULL && curr->next->data!=val){
			curr=curr->next;
		}
		
		if(curr->next!=NULL){
			Node *temp=curr->next;
			curr->next=curr->next->next;
			delete temp;
			return;
		}
		cout<<"element not found to delete"<<endl;
		
		
		
		
	}
	
	
	bool search(int val){
		Node *temp=head;
		while(temp!=NULL){
			if(temp->data==val)
			return true;
			temp=temp->next;
		}
		return false;
	}
	
	void print(){
		Node *temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};

#endif
