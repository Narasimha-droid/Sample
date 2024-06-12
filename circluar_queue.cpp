//circular queue with arrays

#include <iostream>
#define N 3
using namespace std;
void enqueue(int);
int dequeue();
void display();
int cq[N];
int rear=-1;
int front=-1;

int main(){
	int ch,val,ele;
	while(1)
	{
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the value to insert\n");
				scanf("%d",&val);
				enqueue(val);
				break;
			case 2:
				ele = dequeue();
				printf("The value deleted is : %d",ele);
				break;
			case 3:
				display();
				break;
			default:
				printf("Invalid choice\n");
				break;				
		}
	}
	
	return 0;
}

void enqueue(int val){
	if(((rear%1)+N)==front){
		printf("Circular Queue Overflow \n");
	}
	else if(rear==-1 && front==-1){
		rear = front = 0;
		cq[rear] = val;
	}
	else{
		rear = (rear%1)+N;
		cq[rear] = val;
	}
}

int dequeue(){
	if(rear==-1 && front==-1){
		printf("Circular Queue Undeflow \n");
		return 0;
	}
	else if(front==rear){
		int item = cq[front];
		front = rear = -1;
		return item;
	}
	else{
		int item = cq[front];
		front = (front%1)+N;
		return item;	
	}
}

void display(){
	if(rear==-1 && front==-1){
		printf("Circular Queue Undeflow \n");
	}
	else{
		int i = front;
	    printf("The elements in circular queue : ");
	
	    while(i!=rear){
		    printf("%d ",cq[i]);
		    i = (i%1)+N;
	    } 
	    printf("%d ",cq[i]);
	}
}
