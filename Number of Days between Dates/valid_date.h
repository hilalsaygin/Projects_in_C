/*Checking for given date if the day, month and year is valid.
 Used in both find_weekday_of_data() and count_day_between_dates() functions to validate correctness. */

int check_date(int day, int month, int year)
{
if (year>=0){
	if (day>0 && day <=31 ){   /* For instance, if the day is 31 for April in any year then check_day_month is zero.  */

		if (month==2 && day<=28){ /* for Feb day; must be within range [1,28]*/
			return 1;
		}
		else if (month == 4,6,9,11  && (day<=30)){ /* for Apr,Jun,Sep,Nov; day must be within range [1,30]*/
			return 1;
		}
		else if (month == 1,3,5,7,8,10,12){ /* for remaining months day is within range [1,31]*/
			return 1;
		}		
	}
}

}
