#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};

void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	
}

int main() {
  Stack * s = new Stack(100);
  int choice;
  int p;
  
  do
  {
  system("cls");
  menu();
  cout<<"\nChoice: ";
  cin>>choice;
  cout << endl;
  switch(choice)
  {
  	case 1:
  		system("cls");
  		cout << "Input: ";
  		cin >> p;
  		s -> push(p);
  		break;
  	case 2:
  		s -> pop();
  		break;
  	case 3:
  		system("cls");
  		s -> display();
  		system("pause>0");
  		break;
  	case 4:
  		exit(1);
  		break;
  	default:
  		cout<<"Invalid Input";
  }
  } while (choice <= 4);

/*s -> display();
  s -> push(1);
  s -> display();
  s -> push(2);
  s -> display();
  s -> push(3);
  s -> display();
  s -> push(4);
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> push(10);
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();*/
  return 1;
}
