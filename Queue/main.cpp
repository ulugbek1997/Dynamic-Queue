//
//  main.cpp
//  Queue
//
//  Created by Ulugbek on 09/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include <iostream>
#include "Queue.h"
using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Please enter the size of queue: ";
    int size = 0;
    cin >> size; //Taking the size of queue 10, 100, 1000 .....
    Queue myQueue; // Creating an object type queue
    myQueue.init(size); // Initializing an objects
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now(); //Beginning time
    for (int i = 0; i < size; i++)
        myQueue.add(rand()); //Adding random value to queue
    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now(); // Ending time
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count(); //Calculating adding time
    cout << "The inserting time is: " << (double)duration / 1000<<" ms"<<endl; 
    
    t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
        myQueue.remove(); // Removing elements from queue
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count(); // Calculating removing time
    cout << "The deleting time is: " << (double)duration / 1000<<" ms"<<endl;
    return 0;
}
