//lab8clock.cpp
#include "lab8clock.h"
Clock(){
	hour = 0;
	minute = 0;
	second = 0;
}
Clock(int m){
	if(m<0){
		hour = 0;
		minute = 0;
		second = 0;
	}
	sec_to_hms(m);
}
Clock(int s, int m, int h){
	if((s>59 || s<0) || (m>59 || s<m) || (h>23 || h<0)){
		hour = 0;
		minute = 0;
		second = 0;
	}
	second = s;
	minute = m;
	hour = h;
}
int hms_to_sec(){
	return second + (minute*60) + (hour*3600);
}
void sec_to_hms(int n){
	int sum = n;
	hour = n/3600;
	minute = 
}
int get_hour()const{
	return hour;
}
int get_minute()const{
	return minute;
}
int get_second()const[
	return second;
}
void set_hour(int h){
	
}
void set_minute(int m);
void set_second(int s);
void increment();
void decrement();
void add_seconds(int s);
