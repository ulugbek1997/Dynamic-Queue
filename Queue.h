//
//  Queue.hpp
//  Queue
//
//  Created by Ulugbek on 09/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#ifndef Queue_h
#define Queue_h
#include <iostream>

class Queue{
private:
    int front, rear, counter, size;
    int* arrayOfInt;
    
public:
    Queue();
    void init(int);
    void add(int);
    int remove();
    bool isFull();
    bool isEmpty();
    int getCounter();
    void show();
    bool isLastElement();
    bool isFirstElement();
};

#endif /* Queue_h */
