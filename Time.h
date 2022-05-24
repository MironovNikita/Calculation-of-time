#pragma once
class Time
{
private:
    int hour;
    int min;
    int sec;
public:
    /*Time()
    {

    }*/

    Time(int sec)
    {
        hour = sec / 3600;
        min = (sec % 3600) / 60;
        this->sec = sec % 60;
    }

    Time(int hour, int min, int sec)
    {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    Time add(Time t2)
    {
        return Time(t2.toSec() + toSec());
    }
    /*int getHour()
    {
        return hour;
    }
    int getMin()
    {
        return min;
    }
    int getSec()
    {
        return min;
    }*/

    int toSec()
    {
        return (sec + min * 60 + hour * 3600);
    }

    void print()
    {
        cout << hour << " : " << min << " : " << sec << endl;
    }

    /* int plusTime(Time t2)
     {
         float h = hour + t2.getHour();
         return h;
     }*/
};

