#include <ctime>
#include <stdio.h>
#include <cstdlib>  
#pragma once
class TimeUtil
{
public:
	TimeUtil();
	~TimeUtil();
	void TimeToStrng(time_t time1, char *szTime);
	time_t StringToTime(char * szTime);
};
