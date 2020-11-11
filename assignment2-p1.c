/* Lacy Hayes
COP 3223C
9.25.20
Assignment 2 */

// this program will find out how many seconds have elapsed since Jan 1, 1970

#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
	
// defining variable for now
long int now = time(NULL);

// defining variables for how many seconds are in a minute, hour, day, week, and year
int seconds_min, seconds_hour, seconds_day, seconds_week, seconds_month, seconds_year;

// defining variables for how many hours, days, weeks, months, and years have gone by since Jan 1, 1970
int hours, days, weeks, months, years;

// defining variables for how many seconds will remain after different calculations
int seconds_remain1, seconds_remain2, seconds_remain3, seconds_remain4;

// calculating how many seconds are in a minute, hour, day, week, and year
seconds_min = 60;
seconds_hour = 60*seconds_min;
seconds_day = 24*seconds_hour;
seconds_week = 7*seconds_day;
seconds_month = 30.42*seconds_day;
seconds_year = 365*seconds_day;

// calculating how many years have passed
years = now/seconds_year;
seconds_remain1 = now - (years*seconds_year);

// calculating how many months have passed
months = seconds_remain1/seconds_month;
seconds_remain2 = seconds_remain1 - (months*seconds_month);

// calculating how many weeks have passed
weeks = seconds_remain2/seconds_week;
seconds_remain3 = seconds_remain2 - (weeks*seconds_week);

// calculating how many days have passed
days = seconds_remain3/seconds_day;
seconds_remain4 = seconds_remain3 - (days*seconds_day);

// calculating how many hours have passed
hours = seconds_remain4/seconds_hour;

// printing how many years, months, weeks, days, and hours have passed since Jan 1, 1970
printf("It has been %d years, %d months, %d weeks, %d days, and %d hours since January 1, 1970.", years, months,
weeks, days, hours);

 return 0;
}

