#ifndef STACK_H
#define STACK_H

#include<iostream>
using namespace std;

struct StackNode{
	int data;
	StackNode *next;
	
	StackNode(int val){
		data=val;
		next=NULL;
	}
};

struct Stack{
	StackNode *top=NULL;
	
	void push(int val){
		StackNode *nn = new StackNode(val);
		nn->next=top;
		top=nn;
	}
	
	void pop(){
		if(top==NULL){
			cout<<"Stack Underflow"<<endl;
			return;
		}
		StackNode *temp=top;
		top=top->next;
		delete temp;
	}
	
	int peek(){
		if(top==NULL){
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
		return top->data;
	}
	
	bool isEmpty(){
		return top==NULL;
	}
	
	void print(){
		StackNode *temp=top;
		cout<<"Stack:";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};

#endif 
