//billing program
#include <stdio.h>
int main(){
  //initialize and declare variables with data types
  char name[25];
  int oilPrice=150;
  int shampooPrice=700;
  int saltPrice=800;
  int oilNumber;
  int shampooNumber;
  int saltNumber;
  //remember sequence of input and calculation
printf("insert name:");
scanf("%s",name);
printf("oil:");
scanf("%d",&oilNumber);
printf("shampoo:");
scanf("%d",&shampooNumber);
printf("salt:");
scanf("%d",&saltNumber);
int Total= oilPrice*oilNumber+shampooPrice*shampooNumber+saltPrice*saltNumber;
printf("Total:%d\n",Total);
printf("thankyou\n");
printf("%s",name);
}