//#include<stdio.h>
#include"sum.h"
#include"diff.h"
#include"product.h"
#include"div.h"
typedef struct complex_t {
 
   float real;

  float imaginary;

} complex_t;
int main(){
   complex_t s1={12.5,10.5};
   sum(s1.real,s1.imaginary);
   diff(s1.real,s1.imaginary);
   product(s1.real,s1.imaginary);
   div(s1.real,s1.imaginary);
}