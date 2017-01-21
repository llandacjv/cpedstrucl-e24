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
		cout << "         MENU          " << endl;
		cout << "***********************" << endl;
		cout << "*   1 - Push          *" << endl;
		cout << "*   2 - Pop           *" << endl;
		cout << "*   3 - Display       *" << endl;
		cout << "*   4 - Exit          *" << endl;
		cout << "***********************" << endl;
		cout << "\nChoice: ";
		cin >> choice;
	}
	
	void insertLinkedList()
	{
		system("cls");
		cout << "Push: ";
		cin >> ins;
	}
 
    void addValue(int val)
	{
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }
    
	int displayValue()
	{
    	node = head;
    	while(node != NULL)
    	{
      	  cout << node->x << " ";
      	  node = node->next;
  		}
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
    Node *head, *node; 
};

int main() 
{
	int flag;
    LinkedList list;
    do
    {
    list.menu();
    
    switch(list.choice)
    {
    	case 1:
    		list.insertLinkedList();
    		list.addValue(list.ins);
    		flag = 1;
    		break;
    	case 2:
    	if(flag>0)
		{
			cout << list.popValue();
			cout << " ---Value popped!"<<endl;
		}
		else
		{
			cout<<"List is empty!"<<endl;
		}
		getch();
		break;
    	case 3:
    		system("cls");
    		if(flag>0)
			{
    		cout << "Linked list:" << endl;
    		list.displayValue();
    		}
    		else
    		{
    			cout<<"List is empty!"<<endl;
			}
    		getch();
    		break;
    	case 4:
    		exit(1);
    		break;
	}
	} while (list.choice <= 4);
    return 0;
}
