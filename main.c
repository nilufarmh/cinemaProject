#include <stdio.h>
struct date 
{
	int day;
	int month;
	int year;
};
struct sans 
{
	char sansName[20];
	struct date dateStart[10];
	struct date dateEnd[10];
	int startTime[10];
	int endTime[10];
	char movieName[50];
	int emptySets[10];
};

int main()
{
	struct sans s={"Motreb"}; // when u are initializing a structure, actually u shoud set any strings between ""
	printf ("%s", s.sansName);
	printf("\n");
	return 0;
}
