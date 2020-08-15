// Shortest Job First (SJF) algorithm

#include <iostream>
using namespace std;

struct Process{
    int ccode;
    int duration;
    int priority;
    int arrival_time;
};

// turn around time = burst time + waiting time
float getAverageTurnAroundTime(Process proc[], int length, int order[]){
    float waitingTime = 0.0;
    float total = 0.0;
    float average = 0.0;
    for(int i = 0 ; i<length ; i++){
        int burstTime = proc[order[i]].duration;
        total += burstTime + waitingTime;
        waitingTime += burstTime;
    }
    average = total/(float)length;
    return average;
}

float getAverageWaitingTime(Process proc[], int length, int order[]){
    float average = 0.0;
    float total = 0.0;
    for(int i = 0 ; i<length-1 ; i++){
        total += proc[order[i]].duration;
    }
    average = total/(float)length;
    return average;
}

void getOrder(Process proc[], int length, int order[]){
    for(int i = 0 ; i<length ; i++){
        for(int j = 0 ; j<length ; j++){
            if(proc[i].duration > proc[j].duration){
                order[i]++;
            }
        }
    }
}

int main(){
    const int length = 3;
    Process proc[length] = {{2201,3,2,1}, {3401, 2, 3,2}, {1103, 1,1,3}};
    int order[length] = {0, 0, 0};
    getOrder(proc, length, order);

    cout << "Class order from start to end: ";
    for(int i = 0 ; i<length ; i++){
        cout << proc[order[i]].ccode;
        if(i < length-1) cout << " -> ";
    }
    cout << "\nAverage waiting time: " << getAverageWaitingTime(proc, length, order);
    cout << "\nAverage turnaround time: " << getAverageTurnAroundTime(proc, length, order);

    return 0;
}