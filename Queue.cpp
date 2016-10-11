//
//  Queue.cpp
//  Queue
//
//  Created by Ulugbek on 09/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include "Queue.h"

Queue::Queue(){
    std::cout<<"The queue has created"<<std::endl;
}

void Queue::init(int size){
    this->size = size;
    front = rear = -1;
    counter = 0;
    arrayOfInt = new int[size];
    std::cout<<"The queue has initialized"<<std::endl;
}

void Queue::add(int element){
    if (isFull()){
        std::cout<<"The stack is empty"<<std::endl;
        exit(1);
    }
    else{
        counter++;
        arrayOfInt[++rear] = element;
        front = 0;
    }
}

int Queue::remove(){
    if (isEmpty()){
        std::cout<<" The stack is empty"<<std::endl;
        exit(1);
    }
    else{
        counter--;
        return arrayOfInt[++front];
    }
}

bool Queue::isFull(){
    if (counter == size)
        return true;
    else
        return false;
}

bool Queue::isEmpty(){
    if (counter == 0)
        return true;
    else
        return false;
}


void Queue::show(){
    for (int i = front; i <= rear; i++)
        std::cout<<arrayOfInt[i]<<" ";
}














