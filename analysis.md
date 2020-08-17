## Introduction
The three algorithms that we chose to schedule the classes is First Come First Serve(FCFS), Shortest Job First(SJF) and Priority based scheduling. In FCFS, the class that comes first will be served first. The implementation is based on FIFO(first in first out) queue. For SJF algorithm, the class that has the shortest duration will be conducted first. In priority based scheduling, the class with the highest priority will be conducted first.

## Consideration
There a few factors that we have considered to choose these algorithms. In each algorithm, we measure the average waiting time and the average turnaround time. Waiting time is the sum of the periods spent waiting in the ready queue. Turnaround time means the amount of time taken to complete a process or fulfill a request. The shorter the times, the better the algorithm.

## Analysis
| Algorithm | Average Waiting Time | Average Turnaround Time |
|-----------|----------------------|-------------------------|
| FCFS      | 1.67                 | 4.67                    |
| SJF       | 1.00                 | 3.33                    |
| Priority  | 1.67                 | 4.33                    |

Based on the result, SJF has the shortest average waiting and turnaround compare to the others. The average waiting time for FCFS and Priority is similar which is 1.67 but Priority has shorter average turnaround time.