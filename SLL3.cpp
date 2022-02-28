#include<iostream>

using namespace std;

struct Sepatu{
	string merek, jenis;
	int ukuran;
	
	Sepatu *next;
	
};

Sepatu *head, *tail, *cur, *newNode, *del;


void createSingleLinkedList(string merek, string jenis, int uK){
	head = new Sepatu();
	head->merek = merek;
	head->jenis = jenis;
	head->ukuran = uK;
	head->next = NULL;
	tail = head;
	
}

void addLast(string merek, string jenis, int uK){
	newNode = new Sepatu();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->ukuran = uK;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
}

void removeFirst(){
	del = head;
	head = head->next;
	delete del;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Merek Sepatu : "<< cur->merek <<endl;
		cout << "Jenis Sepatu : "<< cur->jenis <<endl;
		cout << "Ukuran Sepatu : "<< cur->ukuran <<endl;
		
		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("ADIDAS", "Casual", 40);
	
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addLast("Nike", "Sneakrs", 41);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	removeFirst();
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
}
