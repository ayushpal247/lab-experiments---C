/*
wap to take check if the triangle is valid or not. if the validity is established,do check if the triangle is isosceles , equilateral,right angled triangle, or scalene.take sides of the triangle as input from a user.
*/

#include<stdio.h>   
#include<math.h>
int main(){
    int a,b,c,s,area;
    printf("enter the sides of the triangle:");
    scanf("%d %d %d", &a , &b, &c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    if (area>0){
        if(a==b && b==c){
            printf("the triangle is equilateral");
        }
        else if(a==b || b==c || c==a){
            printf("the triangle is isosceles");
        }
        else{
             if((a*a==b*b+c*c) || (b*b == a*a +c*c) || (c*c==a*a+b*b))
             printf("the triangle is right angled");
             else{
                printf("the triangle is scalene");
             }


        }

        }
        else{
            printf("the triangle is not valid");

        }
        return 0;
        
        }
    

