#include<iostream>
#include "Stack.h"

using namespace std;

int main(){
	Stack s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	
	s.print();
	
	cout<<"Top element:"<<" "<<s.peek()<<endl;
	
	s.pop();
	s.print();
	
	s.pop();
	s.pop();
	s.pop();   //should give underflow statement
	
	return 0;	
}
