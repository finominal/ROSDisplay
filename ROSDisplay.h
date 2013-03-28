// Code by JeeLabs http://news.jeelabs.org/code/
// Released to the public domain! Enjoy!

#ifndef __ROSDisplay_H__
#define __ROSDisplay_H__

class Display
{
  public:
  Display(int d, int h, int m, int s);
  Display();
  void ZeroAll();
  char* toString(char* buf, int maxlen);
  int day, hour, minute, second;
};

#endif 