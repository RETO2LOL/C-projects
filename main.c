#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

// lesson 1 basic input and output
/*

int main(){
  printf("Hello, world!\n");
  printf("nice\n");
  return 0;
}

*/

// lesson 2 variables

/*
int main(){

  //this is a variable that can contain a value like a number but can't conatin
a dicemal number
  //int age = 30;
  //printf("you are %d years old\n",age);

  // and this is float that can conatin also a value like a number but this one
can conatin dicemal number we have also double the deffrece is that float can
have 4 byts but double can have 8
  //float price = 9.99;
  //printf("product price is %f \n",price);
  //double pi = 3.14159265358979;
  //printf("pi is %.15lf\n", pi);

  //we also have char it can contain a charecter a single charecter but sadly in
c there is nothing called string we can only store one char if you want to store
a more than one charecter you can use an array
  //an array smth that allow you to store more than one value to use it

  //char grade = 'a';
  //printf("your grade is %c\n",grade);

  //char name[] = "ammar";
  //printf("my name is %s\n",name);
  //return 0;

  //and finnaly we have boolean that can store value of true or false only to
use it we have to incude stdbool
  //bool isOnline = true;
  /*
    if(isOnline){
      printf("You are online");
    }
    else{
     printf("You are offline");
    }
  */
//}

// lesson 3 formant specifiers it is a Special tokens that begin with a %
// symbol, folowed by a character that specifiers the data
// int main() {
//
//   // int num = 15;
//   // float price = 19.99;
//   // double pi = 3.141592;
//   // char currency = '$';
//   // char name[] = "ammar";
//   // printf("%d\n", num);
//   // printf("%f\n", price);
//   // printf("%f\n", pi);
//   // printf("%c\n", currency);
//   // printf("%s\n", name);
//
//   // width
//   // int num1 = 1;
//   // int num2 = 10;
//   // int num3 = -100;
//   //
//   // printf("%3d\n", num1);
//   // printf("%-4d\n", num2);
//   // printf("%+4d\n", num3);
//
//   // precision
//   float price1 = 19.99;
//   float price2 = 1.99;
//   float price3 = 14.99;
//
//   printf("%.2f\n", price1);
//   printf("%.3f\n", price2);
//   printf("%.5f\n", price3);
//
//   return 0;
// }
//

// lesson 4 arthmatic oprators
// int main() {
//   int x = 2;
//   float y = 4;
//   float z = 0;
//
//   // z = x + y;
//   // z = x - y;
//   // z = x * y;
//   // z = x / y; //deviding with int will return 0
//   // z = x % y; //it gives the remain number to be even
//   // x++;
//   // x--;
//   // x+=3 this change the value of a variable by adding or suptracting
//   numbers printf("%d\n", x); printf("%d\n", y); printf("%d\n", z);
//
//   return 0;
// }

// User input
// int main() {
//   int age = 0;
//   float gpa = 0.0f;
//   char grade = '\0';
//   char name[30] = "";
//   printf("Enter your age: ");
//   scanf("%d", &age);
//   printf("your age is %d\n", age);
//   printf("Enter your gpa: ");
//   scanf("%f", &gpa);
//   printf("your gpa is %f\n", gpa);
//   printf("Enter your grade: ");
//   scanf(" %c", &grade);
//   printf("your grade is %c\n", grade);
//   printf("Enter your name: ");
//   getchar();
//   fgets(name, sizeof(name), stdin);
//   printf("your name is %s\n", name);
//   return 0;
// }

int main() {
  // declarig variables
  char TypeOfFood[30] = "";
  float PriceofFood = 0.0f;
  int HowMuch = 0;

  // getting the input from the user
  printf("What do you need: ");
  fgets(TypeOfFood, sizeof(TypeOfFood), stdin);

  printf("How much do you want for it:");
  scanf("%f", &PriceofFood);

  printf("How much do you want:");
  scanf("%d", &HowMuch);

  // adding the output for the user
  float Total = PriceofFood * HowMuch;
  printf("you have bought %d %s", HowMuch, TypeOfFood);
  printf("your Total is %.1f\n", Total);

  return 0;
}
