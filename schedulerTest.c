#include "testUtils.h"
#include "scheduler.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void test_create_new_process(){
        Process *process = addProcess("gcc", 30,1);
        ASSERT(process->priority == 1);
        ASSERT(process->time == 30);
        ASSERT(strcmp(process->name,"gcc") == 0);
}
void test_create_scheduler(){
        Scheduler *scheduler = create(10);
        ASSERT(scheduler->head == NULL);
        ASSERT(scheduler->total == 0);
        ASSERT(scheduler->time == 10);
}
