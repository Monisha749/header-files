#include<iostream>
#include "Linkedlist.h"

using namespace std;

int main(){
	Linkedlist L;
	
	L.insert(10);
	L.insert(20);
	L.insert(30);
	
	L.print();
	
	L.remove(20);
	
	L.print();
	
	cout<<"Search 30:"<<(L.search(30)?"found":"not found")<<endl;
	cout<<"Search 50:"<<(L.search(60)?"found":"not found")<<endl;
	L.remove(100);
	L.remove(10);
	L.remove(30);
	
	
	L.print();
	return 0;
}
