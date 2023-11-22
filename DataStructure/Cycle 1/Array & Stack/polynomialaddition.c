#include<stdio.h>

struct polynomial {
  float coefficient;
  int exponent;
}; struct polynomial a[20],b[20],c[20];

void main(){
    int degree_1,degree_2;
    int k=0,l=0;


    //first polynomial
    printf("Enter the highest degree of Polynomial 1 :");
    scanf("%d",&degree_1);
    for(int i=0;i<degree_1;i++){
        printf("Enter the coefficient of x^%d :",i);
        scanf("%f",&a[i].coefficient);
        a[l++].exponent=i;
        
    }


    //second polynomial
    printf("Enter the highest degree of Polynomial 2 :");
    scanf("%d",&degree_2);
    for(int i=0;i<degree_2;i++){
        printf("Enter the coefficient of x^%d :",i);
        scanf("%f",&b[i].coefficient);
        b[k++].exponent=i;
        
    }

    //print polynomial 1
    printf("poyl_1 =%f",a[0].coefficient);
    for(int i=1;i<degree_1;i++){
        printf("+%f^%d",a[i].coefficient,a[i].exponent);
    }



    //print polynomial 2
    printf("\npoyl_2 =%f",b[0].coefficient);
    for(int i=1;i<degree_2;i++){
        printf("+%f^%d",b[i].coefficient,b[i].exponent);
    }


     int v=0;   
    if(degree_1>degree_2){
        for(int i=0;i<=degree_2;i++){
            c[v].coefficient=a[i].coefficient+b[i].coefficient;
            c[v].exponent=a[i].exponent;
            v++;
        }
        for(int i=degree_2+1;i<degree_1;i++){
            c[v].coefficient=a[i].coefficient;
            c[v].exponent=a[i].exponent;
        }
    }
    else
    {
         for(int i=0;i<=degree_1;i++){
            c[v].coefficient=a[i].coefficient+b[i].coefficient;
            c[v].exponent=b[i].exponent;
            v++;
        }
        for(int i=degree_1+1;i<degree_2;i++){
            c[v].coefficient=b[i].coefficient;
            c[v].exponent=b[i].exponent;
        }      
    }

    //Result 
    printf("\nresult =%f",c[0].coefficient);
    for(int i=1;i<v;i++){
        printf("+%f^%d",c[i].coefficient,c[i].exponent);
    }   
}
