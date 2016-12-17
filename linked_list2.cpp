#include <iostream>
#include <conio.h>
using namespace std;

class LinkedList
{
    struct Node 
	{
        int x;
        Node *next;
    };

public:
	int choice, ins;
	
    LinkedList()
	{
        head = NULL; // set head to NULL
    }

	void menu()
	{
		system("cls");
		cout << "            MENU           " << endl;
		cout << "1 - Insert into linked list" << endl;
		cout << "2 - Pop                    " << endl;
		cout << "3 - Exit                   " << endl;
		
		cout << "\nChoice: ";
		cin >> choice;
	}
	
	void insertLinkedList()
	{
		system("cls");
		cout << "Insert linked list: ";
		cin >> ins;
	}
 
    void addValue(int val)
	{
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue()
	{
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
        system("pause");
    }

private:
    Node *head; 
};

int main() 
{
    LinkedList list;
    do
    {
    list.menu();
    
    switch(list.choice)
    {
    	case 1:
    		list.insertLinkedList();
    		list.addValue(list.ins);
    		break;
    	case 2:
    		list.popValue(); 
			cout << endl;
    		cout << "Value popped!" << endl;
    		getch();
    		break;
    	case 3:
    		exit(1);
    		break;	
	}
	} while (list.choice <= 3);
	
    /*list.addValue(5);
    list.addValue(10);
    list.addValue(20);*/

    /*cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;*/
    
    return 0;
}
