//c ternary operator 

# include <studio.h>
int main(){
int age;

//Take input from the user

printf("enter your age:");
scanf("%d",&age);

//Ternary operator to find if a person can vote or not

(age>=18)?printf("you can vote"):printf("can not vote");
return 0;
}
