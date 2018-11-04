//lab8clock.cpp
#include "lab8clock.h"
Clock::Clock(){
	hour = 0;
	minute = 0;
	second = 0;
}
Clock::Clock(int m){
	if(m<0){
		hour = 0;
		minute = 0;
		second = 0;
	}else
		sec_to_hms(m);
}
Clock::Clock(int h, int m, int s){
	if((s>59 || s<0) || (m>59 || m<0) || (h>23 || h<0)){
		hour = 0;
		minute = 0;
		second = 0;
	}else{
		second = s;
		minute = m;
		hour = h;
	}
}
int Clock::hms_to_sec(){
	return second + (minute*60) + (hour*3600);
}
void Clock::sec_to_hms(int n){
	hour = n/3600;
	minute = (n%3600)/60;
	second = (n%3600)%60;
	if(hour>=24){
		hour = hour%24;
	}
	if(hour == 0 && minute == 0 && second<0){
		hour = 23;
		minute = 59;
		second = 60 + second;
	}
}
int Clock::get_hour()const{
	return hour;
}
int Clock::get_minute()const{
	return minute;
}
int Clock::get_second()const{
	return second;
}
void Clock::set_hour(int h){
	if(h>=0 && h<=23){
		hour = h;
	}
}
void Clock::set_minute(int m){
	if(m>=0 && m<=59){
		minute = m;
	}
}
void Clock::set_second(int s){
	if(s>=0 && s<=59){
		second = s;
	}
}
void Clock::increment(){
	int seconds = hms_to_sec();
	seconds++;
	sec_to_hms(seconds);
}
void Clock::decrement(){
	int seconds = hms_to_sec();
	seconds--;
	sec_to_hms(seconds);
}
void Clock::add_seconds(int s){
	if(s>-1){
		int seconds = hms_to_sec();
		seconds+=s;
		sec_to_hms(seconds);
	}
}
