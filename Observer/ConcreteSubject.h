#include "Subject.h"

class ConcreteSubject : public Subject
{

 private:
  auto subjectState{ true };

 public:
  bool GetState() const; 
  void SetState(auto const state_);

};
