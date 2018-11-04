#ifndef lab8clock.h
#define lab8clock.h
Class Clock{
	private:
		int second;
		int minute;
		int hour;
		int hms_to_sec();
		void sec_to_hms(int n);
		
	public:
		Clock();
		Clock(int m);
		Clock(int s, int m, int h);
		int get_hour()const;
		int get_minute()const;
		int get_second()const;
		void set_hour(int h);
		void set_minute(int m);
		void set_second(int s);
		void increment();
		void decrement();
		void add_seconds(int s);
		
};
#endif //lab8clock.h
