class Date
{
public:
	Date();
	Date(unsigned int day, unsigned int month, unsigned int year, unsigned int hour, unsigned int min, unsigned int sec);
	Date(string DMY_hms);
	void setDay(unsigned int y);
	void setMonth(unsigned int h); 
	void setYear(unsigned int d);
	void setHours(unsigned int h);
	void setMinutes(unsigned int m);
	void setSeconds(unsigned int s);
	void setDate(unsigned int day, unsigned int month, unsigned int year, unsigned int hour, unsigned int min, unsigned int sec);
	unsigned int getDay(unsigned int y);
	unsigned int getMonth(unsigned int h);
	unsigned int getYear(unsigned int d);
	unsigned int getHours(unsigned int h);
	unsigned int getMinutes(unsigned int m);
	unsigned int getSeconds(unsigned int s);
	unsigned int getDate(unsigned int day, unsigned int month, unsigned int year, unsigned int hour, unsigned int min, unsigned int sec);
	~Date();

private:
	unsigned int day; 
	unsigned int month;
	unsigned int year;
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
};
