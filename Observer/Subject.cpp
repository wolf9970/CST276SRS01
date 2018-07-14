//
// Created by wolf on 7/9/18.
//

#include "Subject.h"


void Subject::Attach(Observer* observer)
{
    observers_.emplace_back(observer);
}

// code from Mitch's in-class slide on erase-remove idiom
void Subject::Detach(Observer* observer)
{
    observers_.erase(std::remove_if(observers_.begin(), observers_.end(),
                                    [&observer](Observer const &value) {
                                        auto const result = &value == &observer;
                                        return result;
                                    }),
                     observers_.end()
    );
}

void Subject::Notify()
{
    for (Observer* observer : observers_)

        observer->Update();
    }
}
