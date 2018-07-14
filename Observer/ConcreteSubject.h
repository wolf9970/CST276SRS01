//
// Created by wolf on 7/9/18.
//

#ifndef OBSERVER_CONCRETESUBJECT_H
#define OBSERVER_CONCRETESUBJECT_H

#include "Subject.h"

class ConcreteSubject : public Subject {

private:

    bool subjectState_ = false;

public:

    ConcreteSubject();
    ~ConcreteSubject();

    bool GetState() const;
    void SetState(bool const state);


};


#endif //OBSERVER_CONCRETESUBJECT_H
