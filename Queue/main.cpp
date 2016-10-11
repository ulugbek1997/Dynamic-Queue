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
    int size = 1000000;
    Queue myQueue;
    myQueue.init(size);
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
        myQueue.add(rand());
    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    cout << "The inserting time is: " << (double)duration / 1000<<" milliseconds"<<endl;
    
    t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
        myQueue.remove();
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    cout << "The deleting time is: " << (double)duration / 1000<<" milliseconds"<<endl;
    return 0;
}
