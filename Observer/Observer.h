//
// Created by wolf on 7/9/18.
//

#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H

#include "Subject.h"


class Observer {

public:
    virtual void Update() = 0;

protected:
    virtual ~Observer();
};


#endif //OBSERVER_OBSERVER_H
