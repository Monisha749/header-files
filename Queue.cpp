#include<iostream>
#include "Queue.h"

using namespace std;

int main(){
	
	Queue q;
	
	q.enqueue(5);
	q.enqueue(10);
	q.enqueue(15);
	
	q.print();
	
	cout<<"Front element:"<<q.peek()<<endl;
	
	q.dequeue();
	
	q.print();
	
	q.dequeue();
	q.dequeue();
	q.dequeue();
	
	cout<<"Is empty:"<<(q.isEmpty()?"yes":"no")<<endl;
	return 0;
	
}
