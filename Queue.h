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
    Queue(); // Constructor to create an object
    void init(int); // Initializing an object
    void add(int); // Adding element
    int remove(); // Removing element
    bool isFull(); // Checking full or not
    bool isEmpty(); //Checking empty or not
    int getCounter(); // Getting how many elements the queue contains
};

#endif /* Queue_h */
