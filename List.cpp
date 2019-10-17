#include<iostream>
using namespace std;
#include"Node.cpp"
class List {
	Node *headNode;
	Node *currentNode;
	Node *lastCurrentNode;
	int size;
public:
	List()
	{
		headNode = 0;
		currentNode = 0;
		lastCurrentNode = 0;
		size = 0;
	}
	void insert(int n)    //n=100
	{
		if (currentNode != 0)  //if list is not empty so current node will be not empty
		{
			if (currentNode->getNextNode() == 0) //adding node at the end of the list
			{
				Node *newNode = new Node();
				lastCurrentNode = currentNode;
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			}
			else           //when node will be added between two existing node
			{
				Node *newNode = new Node();
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				lastCurrentNode = currentNode;
				currentNode = newNode;
				currentNode->setValue(n);
				size++;
			}
		}
		else
		{
			Node *newNode = new Node();
			headNode = newNode;
			currentNode = newNode;
			currentNode->setValue(n);
			currentNode->setNextNode(0);
			size++;
			cout << "first element is added in the list" << endl;
		}
	}
	void insertAtBegin(int n)
	{
		Node *newNode = new Node();
		headNode = newNode;
		currentNode = newNode;
		currentNode->setValue(n);
		currentNode->setNextNode(0);
		size++;
	}
	void insertAtEnd(int n)
	{
		if (currentNode != 0)  //if list is not empty so current node will be not empty
		{
			if (currentNode->getNextNode() == 0) //adding node at the end of the list
			{
				Node *newNode = new Node();
				lastCurrentNode = currentNode;
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			}
		}
	}
		void insertBtweenNodes(int n)
			{
				if (currentNode != 0)
				{
					{
						Node *newNode = new Node();
						newNode->setNextNode(currentNode->getNextNode());
						currentNode->setNextNode(newNode);
						lastCurrentNode = currentNode;
						currentNode = newNode;
						currentNode->setValue(n);
						size++;
					}
				}
			}
				void DeleteNode(int n)
				{
					if (headNode->getValue() == n) {
						Node *newNode = new Node();
						if (headNode->getNextNode() == NULL)
						{
							cout << "this list cant be deleted" << endl;
						}
						else {
							Node *newNode = new Node();//delet head node
							newNode = headNode;
							headNode = headNode->getNextNode();
							delete headNode;
						}
					}
					
				}
				
				void update(int n, int num)
				{
					int i = 0;
					if (headNode == NULL)
					{
						cout << "there is no element in list" << endl;
						return;
					}
					currentNode = headNode;
					while (currentNode->getNextNode() != 0)
					{
						if (currentNode->getValue() == num)
						{
							currentNode->setValue(n);
						}
						currentNode = currentNode->getNextNode();
						i++;
					}
					cout << "the list is updated";
				}
				void display()
				{
					Node *newNode = new Node();
					newNode = headNode;
					while (newNode != NULL)
					{
						cout << newNode->getValue()<<endl;
						newNode = newNode->getNextNode();
					}
				}
				bool search(int n)
				{
					currentNode = headNode;
					while (currentNode != NULL)
					{
						if (currentNode->getValue() == n)
						{
							return true;
							currentNode = currentNode->getNextNode();
						}
						return false;
					}
					
				}
				void sumLinkedList()
				{
					int sum = 0;
					currentNode = headNode;
					while (currentNode != NULL)
					{
						sum = sum + currentNode->getValue();
						currentNode = currentNode->getNextNode();
					}
					//Node *newNode=
				}

			
	void start()
	{
		lastCurrentNode = 0;
		currentNode = headNode;
	}
	void move()
	{
		lastCurrentNode = currentNode;
		currentNode = currentNode->getNextNode();
	}
	int get()
	{
		return currentNode->getValue();
	}
	int getSize()
	{
		return size;
	}
};