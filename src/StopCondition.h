#ifndef STOP_CONDITION_H
#define STOP_CONDITION_H

#include <vector>

class StopCondition{
    public:
        /**
         * Control if the condition has been met
         */
        virtual bool check(int iterC, double error) = 0;
};

#endif // STOP_CONDITION_H
