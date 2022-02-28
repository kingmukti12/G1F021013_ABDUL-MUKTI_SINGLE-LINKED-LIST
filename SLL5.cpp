#include<iostream>

using namespace std;

struct Sepatu{
	string merek, jenis;
	int ukuran;
	
	Sepatu *next;
	
};

Sepatu *head, *tail, *cur, *newNode;


void createSingleLinkedList(string merek, string jenis, int uK){
	head = new Sepatu();
	head->merek = merek;
	head->jenis = jenis;
	head->ukuran = uK;
	head->next = NULL;
	tail = head;
	
}

void addFirst(string merek, string jenis, int uK){
	newNode = new Sepatu();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->ukuran = uK;
	newNode->next = head;
	head = newNode;
}

void addMiddle(string merek, string jenis, int uK, int posisi){
	newNode = new Sepatu();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->ukuran = uK;
	
	cur = head;
	int NO = 1;
	while(NO < posisi - 1 ){
		cur = cur->next;
		NO++;
	}
	
	newNode->next = cur->next;
	cur->next = newNode;
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
	
	addFirst("PRO ATT", "Sport", 39);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("ANDO", "Sport", 38, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
