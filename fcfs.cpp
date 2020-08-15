#include <iostream>
using namespace std;

struct Process{
    int ccode;
    int duration;
    int priority;
    int arrival_time;
};

int main(){
    Process proc[] = {{2201,3,2,1}, {3401, 2, 3,2}, {1103, 1,1,3}};

    cout << proc[0].arrival_time << proc[0].ccode;

    return 0;
}