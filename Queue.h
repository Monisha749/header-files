#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
using namespace std;

struct QueueNode{
	int data;
	QueueNode *next;
	
	QueueNode(int val){
		data=val;
		next=NULL;
	}
};

struct Queue{
	QueueNode *front=NULL;
	QueueNode *rear=NULL;
	
	void enqueue(int val){
		QueueNode *nn=new QueueNode(val);
		if(rear==NULL){
			rear=front=nn;
		}
		else{
			rear->next=nn;
			rear=nn;
		}
	}
	
	void dequeue(){
		if(front==NULL){
			cout<<"Queue underflow"<<endl;
			return;
		}
		QueueNode *temp=front;
		front=front->next;
		delete temp;
		if(front==NULL){
			rear=NULL;
		}
	}
	
	int peek(){
		if(front==NULL){
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		return front->data;
	}
	
	bool isEmpty(){
		return front==NULL;
	}
	
	void print(){
		QueueNode *temp=front;
		cout<<"Queue:";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
	
};

#endif
