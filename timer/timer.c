
// hashtag includes
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// typedef tTimer
typedef struct sTimer
{   
    // variable initialization of type int
    int targetTime;
    int counterValue;
}tTimer; // tTimer = typedef variable of this struct

// constructor of memory (tTimer)
// typeof tTimer pointer *timerCreate with function parameters ()
tTimer *timerCreate(int startTime, int targetTime)
{
    // allocate memory in the size of tTimer
    // typeof tTimer pointer *self becomes the memory of calloc
    tTimer *self = calloc(1, sizeof(tTimer));
    // TODO error check here

    // the Arrow(->) operator exists to access the members of the structure or the unions using pointers.
    // dereferencing pointer self from variable targetTime = function parameter targetTime
    self->targetTime = targetTime;
    // dereferencing pointer self from variable counterTime = function parameter counterTime
    self->counterValue = startTime;
    // returns pointer address (not value inside struct)
    return self;
}

// destructor of memory (tTimer)
void timerDestroy(tTimer *self)
{   
    // free the allocated memory on pointer address self
    free(self);
    // set pointer address self to NULL
    self = NULL;
}

// counter function
int timerCountUp(tTimer *self, bool *SUCCESS)
{   
    // check if value in dereferencing pointer to member counterValue
    // is smaller than dereferencing pointer to member targetTime
    if (self->counterValue < self->targetTime)
    {   
        // count + 1 for every iteration
        // long self->counterValue = self->counterValue + 1;
        self->counterValue++;
        // set value at pointer to true
        *SUCCESS = true;
        // return the value of counterValue to function caller
        return self->counterValue;
    }
    else
    {
        // set value at pointer to false
        *SUCCESS = false;
        // return 0 to function caller
        return 0;
    }
 
}

// main loop (standard function parameters)
int main(int argc, char const *argv[])
{   
    // calling the timerCreate function with function parameters (10, 100)
    // the return of this function call is stored in pointer *timer1 (of struct tTimer)
    tTimer *timer1 = timerCreate(10, 100);
    tTimer *timer2 = timerCreate(20, 50);

    while (true)
    {   
        // local variable of type bool named timer1Success
        bool timer1Success;
        bool timer2Success;
        // calling the timerCountUp function with function parameters ()
        // the return of this function call is stored in variable time1
        int time1 = timerCountUp(timer1, &timer1Success);
        int time2 = timerCountUp(timer2, &timer2Success);

        // short: if(!timer1Success && !timer2Success)
        if(timer1Success == false && timer2Success == false)
        {
            // exit the while loop
            break;
        }

        // if timer1success == true
        if (timer1Success)
        {
            printf("Time 1 %d\n", time1);
        }

        if (timer2Success)
        {
            printf("Time 2 %d\n", time2);
        }
    }
    
    // call function timerDestroy with parameter timer1
    timerDestroy(timer1);
    timerDestroy(timer2);
    // return 0 to function caller
    return 0;
}
