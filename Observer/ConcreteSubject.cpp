//
// Created by wolf on 7/9/18.
//

#include "ConcreteSubject.h"

bool ConcreteSubject::GetState() const {

    return subjectState_;
}

void ConcreteSubject::SetState(bool const state) {

    subjectState_ = state;
}