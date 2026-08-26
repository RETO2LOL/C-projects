#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

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

// cart project
//  int main() {
//    // declarig variables
//    char TypeOfFood[30] = "";
//    float PriceofFood = 0.0f;
//    int HowMuch = 0;
//
//    // getting the input from the user
//    printf("What do you need: ");
//    fgets(TypeOfFood, sizeof(TypeOfFood), stdin);
//
//    printf("How much do you want for it:");
//    scanf("%f", &PriceofFood);
//
//    printf("How much do you want:");
//    scanf("%d", &HowMuch);
//
//    // adding the output for the user
//    float Total = PriceofFood * HowMuch;
//    printf("you have bought %d %s", HowMuch, TypeOfFood);
//    printf("your Total is %.1f\n", Total);
//
//    return 0;
//  }

// game project
// int main() {
//   // declarig variables
//   char description[50] = "";
//   char noun[50] = "";
//   char adjective[50] = "";
//   char verb[50] = "";
//   char adjective2[50] = "";
//
//   // getting input from the user
//   printf("Enter an adjective (description): ");
//   fgets(description, sizeof(description), stdin);
//   description[strlen(description) - 1] = '\0';
//
//   printf("Enter a noun(animal or person): ");
//   fgets(noun, sizeof(noun), stdin);
//   noun[strlen(noun) - 1] = '\0';
//
//   printf("Enter a adjective(description): ");
//   fgets(adjective, sizeof(adjective), stdin);
//   adjective[strlen(adjective) - 1] = '\0';
//
//   printf("Enter a verb(ending /w -ing): ");
//   fgets(verb, sizeof(verb), stdin);
//   verb[strlen(verb) - 1] = '\0';
//
//   printf("Enter a adjective(description): ");
//   fgets(adjective2, sizeof(adjective2), stdin);
//   adjective2[strlen(adjective2) - 1] = '\0';
//
//   printf("Today I went to a %s.\n", description);
//   printf("In an exhibit, I saw a  %s.\n", noun);
//   printf("%s was %s and %s.\n", noun, adjective, verb);
//   printf("I was %s\n", adjective2);
//
//   return 0;
// }

// some math functions
//  int main() {
//    float x = 9.50;
//    // x = sqrt(x);
//    // x = pow(x, 3);
//    // x = round(x);
//    // x = ceil(x);
//    // x = floor(x);
//
//    return 0;
//  }

// cercle Area calculator
// int main() {
//   // declarig variables
//   double radius = 0.0;
//   double Area = 0.0;
//   double SurfaceArea = 0.0;
//   double volume = 0.0;
//   const double pi = 3.14159265359;
//   // getting input from the user
//   printf("Enter  the radius: ");
//   scanf(" %lf", &radius);
//
//   // calculating
//   Area = pi * pow(radius, 2);
//   SurfaceArea = Area * 4;
//   volume = (4.0 / 3.0) * pi * pow(radius, 3);
//   // sending input to the user
//   printf("Area: %.2lf\n", Area);
//   printf("Surface Area: %.2lf\n", SurfaceArea);
//   printf("Volume: %.2lf\n", volume);
//
//   return 0;
// }

// oprator intrest calculator

// int main() {
//   // declarig variables
//   double initialAmount = 0.0;
//   double annualInterestRate = 0.0;
//   double interestPerYear = 0.0;
//   double numberOfYear = 0.0;
//   double finalAmount = 0.0;
//
//   // getting input from the user
//   printf("Enter the principal (P): ");
//   scanf("%lf", &initialAmount);
//
//   printf("Enter the annual Interest Rate (r):  ");
//   scanf("%lf", &annualInterestRate);
//
//   printf("Enter the Interest Per Year (n): ");
//   scanf("%lf", &interestPerYear);
//
//   printf("Enter the Number Of Years (t): ");
//   scanf("%lf", &numberOfYear);
//
//   // calculating
//   finalAmount = initialAmount * pow(1 + annualInterestRate / interestPerYear,
//                                     (interestPerYear * numberOfYear));
//   // sending input to the user
//   printf("After %.1lf years, the total will be $% 2.lf\n", numberOfYear,
//          finalAmount);
//
//   return 0;
// }

// if statemnt in c
// int main() {
//   // examble one
//   // int age = 0;
//   // printf("Enter your age: ");
//   // scanf("%d", &age);
//   // if (age >= 18) {
//   //   printf("you are a bitch\n");
//   //  } else if (age < 0) {
//   //   printf("you will come from a bitch\n");
//   //  } else if (age == 0) {
//   //   printf("you came from a bitch\n");
//   //  } else {
//   //   printf("you are a kid and a bitch\n");
//   //  }
//
//   // examble 2
//   //  bool isStudent = true;
//   //  if (isStudent) {
//   //    printf("You are nigga");
//   //  } else {
//   //    printf("you are a thife");
//   //  }
//
//   // examble 3
//   char name[50] = "";
//
//   printf("Enter your name");
//   fgets(name, sizeof(name), stdin);
//
//   if (strlen(name) == 0) {
//     printf("Your name does not exist");
//   } else {
//     printf("your name is very bad");
//   }
//
//   return 0;
// }

// converter in c
int main() {
  // declarig variables
  int choice = 0;
  float Kilogram = 0;
  float Pound = 0;
  // getting input from the user
  printf("1.Kilograms to Pounds\n");
  printf("2.Pounds to Kilograms\n");
  printf("Enter your choice 1 or 2:");
  scanf("%d", &choice);
  // calculating input
  if (choice == 1) {
    printf("Enter the weight in Kilograms:");
    scanf("%f", &Kilogram);
    Pound = Kilogram / 2.20462;
    printf("%.2f Pounds\n", Pound);
  } else if (choice == 2) {
    printf("Enter the weight in Pounds:");
    scanf("%f", &Pound);
    Kilogram = Pound * 0.45359237;
    printf("%.2f Kilograms\n", Kilogram);
  }

  return 0;
}
