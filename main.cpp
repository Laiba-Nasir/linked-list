#include<iostream>
using namespace std;
#include"List.cpp"
int main()
{

	List  myLinkedList;
	myLinkedList.insert(100);
	myLinkedList.insert(150);
	//myLinkedList.start();//this will set your curent node=head node
	myLinkedList.move();//this will move your current node one step ahead toward the next node
	cout << myLinkedList.get()<<endl;//this will get the second node of the element
	myLinkedList.start();
	myLinkedList.insert(1000);
	//now lets get whole linked list using start and move function
	cout << "now my linked list is:";
	myLinkedList.start();
	myLinkedList.insert(25);
	myLinkedList.move();
	 myLinkedList.insert(189);
	myLinkedList.move();
	cout << myLinkedList.get()<<endl;
	myLinkedList.search(189);
	cout << myLinkedList.get() << endl;
	myLinkedList.display();
	cout << myLinkedList.getSize()<<endl;
	myLinkedList.display();
	system("pause");
	return 0;
}