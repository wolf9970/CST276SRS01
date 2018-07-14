//
// Created by wolf on 7/9/18.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H


#include "Observer.h"
#include <vector>
#include <functional>
#include <algorithm>


class Subject {

public:

    virtual void Attach(Observer* observer);
    virtual void Detach(Observer* observer);
    virtual void Notify();

protected:

    virtual ~Subject();

private:
    std::vector<Observer> observers_;
};


#endif //OBSERVER_SUBJECT_H
