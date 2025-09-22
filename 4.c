//the population of a town is 100000. the population increases by 10% every year for 10 years. write a program to determine the populatio at the end of each year in the last decade.
#include<stdio.h>
int main()
{
    int year;
    int population = 100000;
    int growth_rate = 10;

    printf("Year\tPopulation\n");
    for(year = 1; year <= 10; year++)
    {
        population += (population * growth_rate) / 100;
        printf("%d\t%d\n", year, population);
    }
    return 0;
}