
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// typedef
typedef struct sTimer
{
    int targetTime;
    int counterValue;
}tTimer;

// constructor
tTimer *timerCreate(int startTime, int targetTime)
{
    tTimer *self = calloc(1, sizeof(tTimer));
    // TODO error check here
    self->targetTime = targetTime;
    self->counterValue = startTime;
    return self;
}

// destructor
void timerDestroy(tTimer *self)
{
    free(self);
    self = NULL;
}

// counter function
int timerCountUp(tTimer *self, bool *SUCCESS)
{
    if (self->counterValue < self->targetTime)
    {
        self->counterValue++;

        *SUCCESS = true;
        return self->counterValue;
    }
    else
    {
        *SUCCESS = false;
        return 0;
    }
 
}

// main loop
int main(int argc, char const *argv[])
{
    tTimer *timer1 = timerCreate(10, 100);
    tTimer *timer2 = timerCreate(20, 50);

    while (true)
    {
        bool timer1Success;
        bool timer2Success;
        int time1 = timerCountUp(timer1, &timer1Success);
        int time2 = timerCountUp(timer2, &timer2Success);

        // if(!timer1Success && !timer2Success)
        if(timer1Success == false && timer2Success == false)
        {
            break;
        }

        if (timer1Success)
        {
            printf("Time 1 %d\n", time1);
        }

        if (timer2Success)
        {
            printf("Time 2 %d\n", time2);
        }
    }
    
    timerDestroy(timer1);
    timerDestroy(timer2);
    return 0;
}
