#include "scheduler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Process* addProcess(String name,int time,int priority){
        Process *process = calloc(1,sizeof(Process));
        strcpy(process->name,name);
        process->time = time;
        process->priority = priority;
        return process;
}
Scheduler* create(int time){
        Scheduler *scheduler = calloc(1, sizeof(Scheduler));
        scheduler->head = NULL;
        scheduler->total = 0;
        scheduler->time = time;
        return scheduler;
}
int insert(Process* process){
        int i;
        int j = 0;
        for(i = 0; i<process->num;i++){
                if(process->priority == 1){
                        if(process->time == 0)
                                return 0;
                        else{
                                process->time =  process->time-10;
                                j++;
                        }
                }
        }
        return j;
}