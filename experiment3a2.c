// bmi index calculation.
#include<stdio.h>
int main(){   
    float bmi,w,h;
    printf("enter your weight in kg: ");
    scanf("%f",&w);
    printf("enter your height in meter: ");
    scanf("%f",&h);
    bmi=w/(h*h); 
    if (bmi<15)
    printf("starvation");
    else if (bmi>=15.1 && bmi<=17.5)
    printf("anorexic");
    else if (bmi>=17.6 && bmi<=18.5)
    printf("underweight");
    else if(bmi>=18.6 && bmi<=24.9)
    printf("ideal");
    else if(bmi>=25 && bmi<=29.9)
    printf("overweight");
    else if("bmi >=30 && bmi <=39.9")
    printf("obese");
    else if (bmi>=40)
        printf("morbidity obese");
    return 0;
}
