#ifndef TIME_H
#define TIME_H


class Time
{
public:
   Time(int=0,int=0,int=0);
   void setTime(int,int,int);
   void setHour(int);
   void setMinute(int);
   void setSecond(int);
   void tick();

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

   void printUniversal() const;
   void printStandard() const;
   void printtotalseconds() const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif
