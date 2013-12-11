typedef char String[256];

typedef struct{
	String name;
        int time;
        int priority;
        int num;
} Process;

Process* addProcess(String name,int time,int priority);
void* scheduler(Process* process);

typedef struct{
        void* head;
        int total;
        int time;
} Scheduler;

Scheduler* create(int takentime);
int insertProcess(Scheduler* scheduler,Process* process);
int insert(Process* process);
