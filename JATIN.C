#include<stdio.h>

void main(){int days,bookprice;float fine;
scanf("%d",&days);
printf ("enter the bookprice");scanf("%d",&bookprice);
if(days<=30){fine=0;}
else{
if(days>30 && days<=60){fine=(days-30)*0.5;}
else{
if(days>60 && days<90){fine=(days-60)*0.6;}
else{
fine=days*1.0;}
if (fine>2*bookprice){fine=2*bookprice;}
}
}
printf("the fine of book=%f",fine);
}
//end main[]