//
// Created by wolf on 7/9/18.
//

#ifndef OBSERVER_CONCRETEOBSERVER_H
#define OBSERVER_CONCRETEOBSERVER_H

#include "Observer.h"
#include "ConcreteSubject.h"

class ConcreteObserver : public Observer
{
private:
    ConcreteSubject* subject;
    bool observerState_ = false;

    public:
    ConcreteObserver();
    ~ConcreteObserver() = default;

    void Update();

};


#endif //OBSERVER_CONCRETEOBSERVER_H
