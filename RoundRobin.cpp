#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//#include "ArgumentManager.h"
using namespace std;
//priority queue is an unordered array, and afterwards it is ordered by its priority
//we use heaps to implement priority queue, but priority queues are NOT heaps

//this program has a queue of jobs
//job is a struct j
//we want to output a log/text file of jobs being completed

//process: create randomly jobs and assign them to the queue
//next:decide the round Robin factor (2H?)
//next: keep doing...(loop) dequeue 
//next:: eneque again (6-2) 4
//next: stop when queue is empty and print log

//log file will have = job number, round robin factor, remaining hours and cumulative time
struct j
{
    int h; //hours
    j *next;
};

class queue
{
    private:
    
    public:
}





int main()
{

}
