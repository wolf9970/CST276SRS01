//
// Created by wolf on 7/9/18.
//

#include "ConcreteObserver.h"

ConcreteObserver::ConcreteObserver() : observerState_(false)
{

}

void ConcreteObserver::Update()
{
    observerState_ = subject->GetState();
}

