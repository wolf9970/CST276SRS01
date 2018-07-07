#include "Observer.h"
#include <vector>

class Subject
{
 public:

  virtual ~Subject() =0;
  virtual void Attach(Observer* o);
  virtual void Detach(Observer* o);
  virtual void Notify();

 private:

  //vector

};






































class Subject
{
 public:
  virtual ~Subject();
  virtual void Attach(Observer*);
  virtual void Detach(Observer*);
  virtual void Notify();
  
 protected:
  Subject();

 private:
  List<Observer*> *_observes;
};
