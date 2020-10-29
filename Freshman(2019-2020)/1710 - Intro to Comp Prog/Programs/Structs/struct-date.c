#include <stdio.h>

const int currentyear = 2019;

struct date
{
     int month;
     int date;
     int year;
};


struct studentinfo
{
     char last[20], first[16];
     struct date bday;
};


int age(struct studentinfo z)
{
     int howold;
     howold = currentyear - z.bday.year;
     return howold;
}

int main()
{
     struct studentinfo swozniak = {"Wozniak", "Steve", 8, 11, 1950};
     printf("Name: %s %s, Age: %i\n", swozniak.first, swozniak.last, age(swozniak));
}
