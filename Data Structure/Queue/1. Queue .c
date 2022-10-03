#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int queue[CAPACITY];
int  front = 0, rear = -1, totalItem = 0;

bool full(){
    if(totalItem == CAPACITY){
        return true;
    }
    return false;
}

bool empty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}

void enqueue(int value){
    if(full()){
        printf("Queue is full\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    queue[rear] = value;
    totalItem++;
}

int dequeue(){
    if(empty(){
        printf("Sorry! Queue is empty.\n");
        return -1;
    }
    int frontItem = queue[front];
    queue[front] = 0;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}

int print(){
    printf("Queue: ");
    for(int i = 0; i < CAPACITY; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main(){
    printf("Queue implementing!\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    print();
    enqueue(40);
    print();
    enqueue(50);
    enqueue(60);
    printf("Deque: %d\n",dequeue());
    print();
    enqueue(60);
    print();
return 0;
}
