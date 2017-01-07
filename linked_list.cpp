#include<stdio.h> 
#include<stdlib.h>

struct node {
	int data;
	struct node * next;
} *head;
  
int count() {
  struct node * n;
  int c = 0;
  n = head;
  while (n != NULL) {
    n = n -> next;
    c++;
  }
  return c;
}

void append(int num) {
  struct node * temp, * right;
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  right = (struct node * ) head;
  while (right -> next != NULL)
    right = right -> next;
  right -> next = temp;
  right = temp;
  right -> next = NULL;
}

void add(int num) {
  struct node * temp;
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  if (head == NULL) {
    head = temp;
    head -> next = NULL;
  } else {
    temp -> next = head;
    head = temp;
  }
}

void addafter(int num, int loc) {
  int i;
  struct node * temp, * left, * right;
  right = head;
  for (i = 0; i < loc; i++) {
    left = right;
    right = right -> next;
  }
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  left -> next = temp;
  left = temp;
  left -> next = right;
  return;
}

void addbefore(int num, int loc) {
  int i;
  struct node * temp, * left, * right;
  right = head;
  for (i = 1; i < loc; i++) {
    left = right;
    right = right -> next;
  }
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> data = num;
  left -> next = temp;
  left = temp;
  left -> next = right;
  return;
}


int ddelete(int num) {
  struct node * temp, * prev;
  temp = head;
  while (temp != NULL) {
    if (temp -> data == num) {
      if (temp == head) {
        head = temp -> next;
        free(temp);
        return 1;
      } else {
        prev -> next = temp -> next;
        free(temp);
        return 1;
      }
    } else {
      prev = temp;
      temp = temp -> next;
    }
  }
  return 0;
}

void deleteall(int num) {
  struct node * temp, * prev;
  temp = head;
  while (temp != NULL) {
    if (temp -> data == num) {
      if (temp == head) {
        head = temp -> next;
        free(temp);
      temp = prev ->next;
      
      } else {
        prev -> next = temp -> next;
        free(temp);
        temp = prev ->next;
      
      }
    } else {
      prev = temp;
      temp = temp -> next;
    }
  }

}


void insert(int num) {
  int c = 0;
  struct node * temp;
  temp = head;
  if (temp == NULL) {
    add(num);
  } else {
    while (temp != NULL) {
      if (temp -> data < num)
        c++;
      temp = temp -> next;
    }
    if (c == 0)
      add(num);
    else if (c < count())
      addafter(num, ++c);
    else
      append(num);
  }
}


void display(struct node * r) {
  r = head;
  if (r == NULL) {
    return;
  }
  while (r != NULL) {
    printf("%d ", r -> data);
    r = r -> next;
  }
  printf("\n");
}


void search(int val) {
struct node *temp;
int c = 1;
temp = head;
  while(temp!=NULL) {
    if(temp->data==val){
    	printf("Found %d at position %d\n", val, c);
	}
	temp=temp->next;
    c++;
  }
  printf("\n");
}

int main() {
  int i, num, c, loc;
  struct node * n;
  head = NULL;
  insert(1);
  insert(4);
  insert(3);
  insert(4);
  insert(4);
  while (1) {
  	system("cls");
    printf("Linked List Operations\n");
    printf("===============\n");
    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Size\n");
    printf("4.Add After\n");
    printf("5.Add Before\n");
    printf("6.Search\n");
    printf("7.Delete\n");
    printf("8.Delete All\n");
    printf("9.Exit\n");
    printf("===============\n");
    printf("Enter your choice : ");
    if (scanf("%d", & i) <= 0) {
      printf("Enter only an Integer\n");
      exit(0);
    } else {
      switch (i) {
      case 1:
      	system("cls");
        printf("Enter the number to insert : ");
        scanf("%d", & num);
        insert(num);
        break;
      case 2:
        if (head == NULL) {
          printf("List is Empty\n");
        } else {
          printf("Element(s) in the list are : ");
        }
        display(n);
        system("pause>0");
        break;
      case 3:
        printf("Size of the list is %d\n", count());
        system("pause>0");
        break;
      case 4:
      	printf("Enter value and location: ");
      	scanf("%d %d", &num, &loc);
      	addafter(num, loc);
      	system("pause>0");
      	break;
      case 5:
      	printf("Enter value and location: ");
      	scanf("%d %d", &num, &loc);
      	addbefore(num, loc);
      	system("pause>0");
      	break;
      case 6:
      	printf("Enter the number to search : ");
        scanf("%d", & num);
        search(num);
        system("pause>0");
        break;
      case 7:
        if (head == NULL)
          printf("List is Empty\n");
        else {
          printf("Enter the number to delete : ");
          scanf("%d", & num);
          if (ddelete(num))
            printf("%d deleted successfully\n", num);
          else
            printf("%d not found in the list\n", num);
        }
        system("pause>0");
        break;
      case 8:
      	printf("Number to delete? \n");
    	scanf("%d" , &num);
    	deleteall(num);
        system("pause>0");
        break;
      case 9:
        exit (0);
      default:
        printf("Invalid option\n");
      }
    }
    
  }
  return 0;
}
