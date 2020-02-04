
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


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

void timerDestroy(tTimer *self)
{
    free(self);
    self = NULL;
}

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

int main(int argc, char const *argv[])
{
    tTimer *timer1 = timerCreate(10, 100);
    tTimer *timer2 = timerCreate(20, 50);

    while (true)
    {
        bool timer1SUCCESS;
        bool timer2SUCCESS;
        int time1 = timerCountUp(timer1, &timer1SUCCESS);
        int time2 = timerCountUp(timer2, &timer2SUCCESS);

        // if(!timer1SUCCESS && !timer2SUCCESS)
        if(timer1SUCCESS == false && timer2SUCCESS == false)
        {

            break;

                /*
                # as long as time is not None print
                if time1 is not None:
                 print("time1", time1)

                if time2 is not None:
                print("time2", time2)
                */
        }

    }
    


    timerDestroy(timer1);
    timerDestroy(timer2);
    return 0;
}
