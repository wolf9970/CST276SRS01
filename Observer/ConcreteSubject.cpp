#include "ConcreteSubject.h"

bool ConcreteSubject::GetState() const
{
  return subjectState;
}

void ConcreteSubject::setState(auto const state_)
{
  subjectState = state_;
}
