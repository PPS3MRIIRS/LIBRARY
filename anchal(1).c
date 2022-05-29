//two dimensional array to store and print values
//C program to store temperature of two cities of a week and display it

# include <stdio.h>
const int city=2;
const int day=7;
int main(){
int temperature [city][day];

//Using nested loop to store values in a 2 dimensional array

for(int=i;i<city;++i){
for(int=j;j<day;++j){
printf("city%d,day%d:",i+1,j+1);
scanf("%d",&temperature[i][j]);
}
}
printf("displaying values:\n\n");

//Using nested loop to display values of a 2-D array

for(int i=0;i<city;++i){
for(int j=0;j<day;++j){
printf("city%d,day%d=%d\n",i+1,j+1,temperature[i][j]);
}
}
return 0;
}
