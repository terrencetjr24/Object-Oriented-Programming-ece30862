#ifndef GPS_H
#define GPS_H
#include "Observer.h"
#include "Subject.h"


class GPS: public Subject, public Observer {
    double x, y;
    int idx;
    int size;
    Observer* obs;
public:
    void subscribe(Observer*);
    void update(double,double);
    
};
#endif /* GPS_H */
