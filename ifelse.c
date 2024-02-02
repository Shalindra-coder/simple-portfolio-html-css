// #include<stdio.h>

// int main() {
//     int age;
//     printf("Enter age: ");
//     scanf("%d", &age);

//     if (age < 18) {
//         printf("You are a minor.\n");
//     } else {
//         printf("You are an adult.\n");}
//     return 0;
//     }
// ************************************************************************************************************
// int age;
// printf("enter age :");
// scanf("%d",&age);

// if(age<15) {
//     printf("Child \n");
// }else if(age>=15 && age<=18){
//     printf("teenager \n");
// } else {
//     printf("Senier citizen");
// }
//     return 0;

// }
// ***********************************************************************************************************
//
// ****************************************************************************************************
// #include<stdio.h>

//  int main() {
//     int age;
//     printf("enter age");
//     scanf("%d",&age);
//     age >= 18 ? printf("adlut \n") : printf("not adlut \n");
//     return 0;

//  }

// // ******************************************************************************************;
// #include <stdio.h>
// int main() {
//     int day; // 1-Monday, 2-Tuesday, ..., 7-Sunday

//     printf("Enter day (1-7): ");
//     scanf("%d", &day);

//     switch (day) {
//         case 1:
//             printf("Monday\n");
//             break;
//         case 2:
//             printf("Tuesday\n");
//             break;
//         case 3:
//             printf("Wednesday\n");
//             break;
//         case 4:
//             printf("Thursday\n");
//             break;
//         case 5:
//             printf("Friday\n");
//             break;
//         case 6:
//             printf("Saturday\n");
//             break;
//         case 7:
//             printf("Sunday\n");
//             break;
//         default:
//             printf("Not a valid day!\n");
//             break;
//             }

//         return 0;
//         }
//**********************************************************************************************

// nested if nested else:
// question1:

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter number: ");
//     scanf("%d", &number);

//     if (number >= 0) {
//         printf("Positive\n");

//         if (number % 2 == 0) {
//             printf("Even\n");
//         } else {
//             printf("Odd\n");
//         }
//     } else {
//         printf("Negative\n");
//     }

//     return 0;
// }
//***************************************************************************
// question2:
// write a progrm if a students check pass and failed:
// marks>30 pass
// marks<30 fail

// #include <stdio.h>

//  int main() {
//     int marks;
//     printf("enter marks (1-100)");
//     scanf("%d", &marks);
//     if(marks >= 0 && marks<30){
//         printf(" fail\n");

//     } else if (marks > 30 && marks <= 100){
//         printf("pass \n");
//     } else{
//         printf(" wrong marks\n");
//     }
//     return 0;
//     }
//****************************************************************
// ternary opertor:
// #include <stdio.h>

//   int main() {
//     int marks;
//     printf("enter marks");
//     scanf("%d", &marks);
//     marks >= 30 ? printf("pass\n") : printf("fail \n");
//     return 0;
//   }
//***********************************************************************************************
// question3:
// wrinte a program to give a grades to a studens:
// marks<30 grade c
// 30<=marks<70 grade b
// 70<=marks<90 grade a
// 90<=marks<=100 grade a+
// #include <stdio.h>

//  int main() {
//     int marks;
//     printf("enter marks (1-100):");
//     scanf("%d",&marks);
//     if(marks >= 0 && marks < 30){
//         printf("grade c\n");
//         }
//         else if(marks >= 30 && marks <= 70){
//             printf("grade b \n");
//         }
//         else if(marks >= 70 && marks <= 90){
//             printf("grade a \n");
//         }
//         else if (marks >=90 && marks<100){
//             printf("grade a+ \n");
//         }
//         else{
//             printf("not valid marks! \n");
//         }
//             return 0;
//         }
//***********************************************************************
// question4:
// #include <stdio.h>

//  int main() {
//     int a=2;
//     if(a==1){
//         printf("a is equal to 1 \n");
//     }
//     else{
//         printf("a is not equal to 1 \n");
//     }

//     return 0;
//  }
//**********************************************************************
// question5:
// write a program to find if charecter enter by user is a upper case is note:
// #include <stdio.h>

//  int main() {
//     char ch;
//     printf("enter charectar :");
//     scanf("%c", &ch);
//     if(ch >= 'A' && ch <= 'Z'){
//         printf("upper case \n");
//     }
//     else if(ch >= 'a' && ch <= 'z'){
//         printf("lower case \n");
//     }
//     else{
//         printf("not english letter \n");
//     }
//     return 0;
//  }
//********************************************************************************
// question6:
// write a program ta take numberas from the user determine the greater those two given number:
// #include <stdio.h>
// int main() {
//     int a, b;
//     int max;

//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);

//     if (a > b) {
//         max = a;
//         printf("Max is a: %d\n", max);
//     } else {
//         max = b;
//         printf("Max is b: %d\n", max);
//     }

//     return 0;
// }
//***************************************************************************************
// question7:
// three number max
// #include <stdio.h>
// int main() {
//     int a,b,c;
//     int max;
//     printf("enter three number:");
//     scanf("%d%d%d",&a, &b, &c);

//     if(a>b && a>c){
//         max=a;
//     }
//     else if(b>c){
//         max=b;
//     }
//     else{
//         max=c;
//     }

//     printf("%d",max);

//     return 0;
// }
//***********************************************************************************8
// question8:
// check even odd number:
// #include <stdio.h>
// int main(){
//     int a;
//     int even;
//     int odd;
//     printf("enter a:");
//     scanf("%d",&a);
//     if(a % 2==0){
//         even=a;
//         printf("even is a %d \n", a);

//     }else{
//         odd=a;
//         printf("odd is a %d \n", a);
//     }

// return 0;
// }


//******************************************************************************************************
// wuestion9:
// check number positive or negative and zero:
// #include <stdio.h>
// int main(){
//     int number;
//     printf("enter number:");
//     scanf("%d", &number);
//     if(number>0){
//         printf("positive %d \n",number);
//         }
//      else if(number <0){
//         printf("nagative %d \n", number);
//     }

// else{
//     printf("zero %d \n", number);

// }
// return 0;
// }


//*******************************************************************************


// question10:
// write a program to take  inteeger  asinput and print the smallest positive integer that is a multiple of both 2and n:
// #include <stdio.h>
//  int main(){
//     int a;
//     printf("eter a:");
//     scanf("%d", &a);
//     if(a % 2==0){
//         printf("a is %d \na", a);
//     }
//     else{
//         printf("2*a is %d \n", a*2);
//     }
//     return 0;
//  }


//**********************************************************************************************8


// question11:
// four number mAX:
//   #include <stdio.h>

// int main() {
//     int a, b, c, d;
//     int max;

//     printf("Enter four numbers: ");
//     scanf("%d%d%d%d", &a, &b, &c, &d);

//     if (a > b && a > c && a > d) {
//         max = a;
//     } else if (b > c && b > d && b > a) {
//         max = b;
//     } else if (c > d && c > a && c > b) {
//         max = c;
//     } else {
//         max = d;
//         printf("Max is %d\n", max);
//     }

//     return 0;
// }


//*************************************************************************


// question12:
// check leaf year:
// #include <stdio.h>

// int main() {
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0 )||(year % 400 == 0)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }

//     return 0;
// }
//***********************************************************************
// question13:
// write a program to take the basic salary of an employee and calculate its gross salary according to the following:
// of basic salary, HRA, and DRA)
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

//     #include <stdio.h>

// int main() {
//     int salary;
//     printf("Enter salary: ");
//     scanf("%d", &salary);

//     if (salary <= 10000) {
//         printf("Basic salary: %d\n", salary + (int)(salary * 0.2 * 0.8));
//     } else if (salary <= 20000) {
//         printf("Basic salary: %d\n", salary + (int)(salary * 0.25 * 0.9));
//     } else {
//         printf("Basic salary: %d\n", salary + (int)(salary * 0.3 * 0.95));
//     }

//     return 0;
// }
//**************************************************
// quetion14:
// Write a program to take two sides as input and check whether it is a rectangle or a square.
// testcase:
// if user given two sides as one side is 40 and another side is 40. then output should be "Square"
// if user given two sides as one side 40 and another is 20 then output should be "Rectangle".

//     #include <stdio.h>
//  int main() {
//     int side1, side2;
//     printf("enter two side:");
//     scanf("%d%d",&side1,&side2);
//     if(side1==side2){
// printf("square ");
//     }
//     else if(2*side1==side2){
//         printf("rectengle");
//     }
//     else{
//         printf("not valid");
//     }
//     return 0;
//  }
//*************************************************************************
// quetion15:
// Write a program to check whether a number is the smallest 4 digit number.

// #include <stdio.h>
//  int main() {
//     int n;
//     printf("enter number");
//     scanf("%d", &n);
//     if(n>999 && n<=1000){
//         printf("smallest number \n");

//     }
//     else{
//         printf("not smallest number  \n");
//     }
// return 0;
//  }
//*********************************************************
// question16:
// Write a program to check whether a number is the largest 3 digit number.
// #include <stdio.h>
//  int main() {
//     int n;
//     printf("enter number:");
//     scanf("%d",&n);
//     if(n<1000 && n>=999){
//         printf("largest three digit number \n");
//     }
//     else{
//         printf("not largest three digit number");
//     }
//     return 0;
//  }
//****************************************************************
// quetion17:
// Write a program to check whether a number is divisible by 7 or not.
// testcase:
// input:
// 49
// output:
// YES
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     if(n % 7 == 0) {
//         printf("Yes\n");
//     } else {
//         printf("Not\n");
//     }

//     return 0;
// }
//****************************************************
// question18:
// Write a program to check whether the last digit of a number (entered by user) is divisible e by 3 or not.

// #include <stdio.h>

// int main() {
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     int p=n%10;
//     if(p % 3==0){
//         printf("yes \n");
//     }else{
//         printf("not \n");
//     }
//         return 0;
//     }
//*******************************************************
// question19:
// Write a program to display "Hello" if a number entered by the user is a multiple of five , otherwise print "Bye"
// #include <stdio.h>

// int main() {
//     int n;
//     printf("enter number");
//     scanf("%d", &n);
//     if(n %5 == 0){
//         printf("hello \n");
//     }else{
//         printf("bye \n");
//     }
//     return 0;
// }
//*****************************************************************
// question20:
// Write a program to check whether a number entered is a three digit number or not.
// #include <stdio.h>

//  int main() {
//     int n;

//     printf("enter number:");
//     scanf("%d", &n);

// if(n>=100 && n<=999){
// printf("yes \n");

// }else{
//     printf("not \n");
// }
// return 0;
//  }
//******************************************************************************
// question21
// Accept the temperature in degrees Celsius of water and check whether it is boiling temperature or not (boiling point of water is
// #include <stdio.h>

// int main() {
//     int celsius;
//     printf("Enter Celsius temperature: ");
//     scanf("%d", &celsius);

//     if (celsius > 99 && celsius <= 100) {
//         printf("Boiling point\n");
//     } else {
//         printf("Not boiling point\n");
//     }

//     return 0;
// }
//***************************************************************************
// question22:
// A shop will give a discount of 10% if the cost of the purchased quantity is more than 1000. Ask the user for quantity, Suppose,
// one unit will cost 100. Judge and print total cost for the user.

// #include <stdio.h>

// int main() {
//     int discount;
//     printf("Enter discount: ");
//     scanf("%d", &discount);

//     int p = discount * 100;

//     if (p > 1000) {
//         printf("Total cost: %d\n", p - (int)(p * 0.1));
//     } else {
//         printf("%d\n", p);
//     }

//     return 0;
// }
//***************************************************************************8
//question23:
//A company decided to give a bonus of 5% of his salary to an employee if his/her year of service is more than 5 years. Ask users
//for their salary and year of service and print the bonus amount.
// #include <stdio.h>

// int main() {
//     int year;
//     int salary;

//     printf("Enter year and salary: ");
//     scanf("%d %d", &year, &salary);

//     if (year > 5) {
//         printf("Bonus amount: %d\n", (int)(salary * 0.5));
//     } else {
//         printf("Not eligible for bonus\n");
//     }

//     return 0;
// }
//*********************************************************************************************
//question24:*************************
//A student will not be allowed to sit in an exam if his/her attendance is less than 75%. Take following input from the user. Number
//of classes held. Number of classes attended. And print, percentage of class attended. Is the student allow sit the exam

//  #include <stdio.h>

// int main() {
//     int percentage;
//     printf("Enter  percentage: ");
//     scanf("%d", &percentage);

//     if (percentage > 75) {
//         printf("Allowed to sit in the exam\n");
//     } else {
//         printf("Not allowed to sit in the exam\n");
//     }

//     return 0;
// }
//*******************************************************
//question25:
//Write a program to check whether a number is the 4 digit number and it should be divisible by 7 and itquotient after dividing
//with 7 should be even. 
// #include <stdio.h>

//  int main() {
//     int n;
//     printf("enter number");
//     scanf("%d", &n);
//     int q=n/7;
//     printf("q %d \n",q);
//     return 0;
//  }
//*******************************************************
//quetion26:
//Take an integer N as input and check whether it ends with 3 or 7. If it ends with 3, print “ends with 3”, if it ends with 7, print “ends
//with 7”, otherwise print the number itself.
//Input: Output:
//N=12 12
//N=137 ends with 7
//N=9343 ends with 3
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     int lastDigit = n % 10;

//     if (lastDigit == 3) {
//         printf("Ends with 3\n");
//     } else if (lastDigit == 7) {
//         printf("Ends with 7\n");
//     } else {
//         printf("%d\n", n);
//     }


//     return 0;
// }
//******************************************************
//question27:
//Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4,
//therwise, decrement its valu by 1
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter number:");
//     scanf("%d", &n);
//     if(n%4==0){
//         printf("n %d\n",  n+1);

//     }
//     else{
//         printf("n %d \n", n-1);
//     }
//         return 0;
//     }
//****************************************************************
//question28:
//  Write a program to obtain 2 numbers (A and B) and an arithmetic operator (C) and then design a calculator depending upon the
//operator entered by the use  

// #include <stdio.h>

// int main() {
//     float a, b, result;
//     char operator;

//     printf("Enter two numbers: ");
//     scanf("%f%f", &a, &b);

//     printf("Enter the operator (+, -, *, /): ");
//     scanf(" %c", &operator);  

//     if (operator == '+') {
//         result = a + b;
//     } else if (operator == '-') {
//         result = a - b;
//     } else if (operator == '*') {
//         result = a * b;
//     } else if (operator == '/') {
//         
//         if (b != 0) {
//             result = a / b;
//         } else {
//             printf("Error: Division by zero\n");
//             return 1;  
//         }
//     } else {
//         printf(" Invalid operator\n");
//         return 1;  
//     }

//     printf("Result: %f\n", result);
//     return 0;
// }//
//****************************************************************************************************
//question29:
//Write a program to input the length (L) and breadth (B) of a rectangle and output whether its area is greater or perimeter is
//greater or both are equal
// #include <stdio.h>

// int main() {
//     int height;
//     int width;

//     // Corrected the typo in the scanf function
//     printf("Enter height and width: ");
//     scanf("%d%d", &height, &width);

//     // Calculate area and perimeter
//     int rectangleArea = height * width;
//     int rectanglePerimeter = 2 * (height + width);

//     // Compare area and perimeter
//     if (rectangleArea > rectanglePerimeter) {
//         printf("Rectangle Area: %d\n", rectangleArea);
//     } else {
//         printf("Rectangle Perimeter: %d\n", rectanglePerimeter);
//     }

//     return 0;
// }
//*******************************************************************
//question30:
//Write a program to input the month number and print the number of days in that month. Take an input from the user between 1
//and 12 inclusive. (Ou
// #include <stdio.h>

// int main() {
//     int month;
//     printf("Enter the month number (1-12): ");
//     scanf("%d", &month);

    
//     if (month >= 1 && month <= 12) {
        
//         int days;

//         switch (month) {
//             case 2:  
//                 days = 28;
//                 break;
//             case 4: case 6: case 9: case 11:  
//                 days = 30;
//                 break;
//             default:  
//                 days = 31;
//     }
//         printf("Number of days in month %d: %d\n", month, days);
//     } else {
        
//         printf("Invalid month. Please enter a number between 1 and 12 inclusive.\n");
//     }

//     return 0;
// }
//*************************************************************
//question31
//nput any city from the user and display the monument of that city.
//City Monument
//Delhi Red Fort
//Agra Taj Mahal
//Jaipur Jal Mahal
//For any other city as an input, print "No monument in the database for this city.".
// #include <stdio.h>

// int main() {
//     char city;
    
//     printf("enter cityname :");
//     scanf("%c", &city);

// char d;
    
// switch(city){
//         case d;

    
// return 0;
    

// }
// #include <stdio.h>

// int main(void) {
//     int k;
//     printf("Enter number: ");
//     scanf("%d", &k);

//     if (1973 <= k && k <= 2024) {
//         printf(" %d\n", k);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
// 	int p;
// 	int l,t;
// 	scanf("%d", &t);
// 	for(int i=1; i<=t; i++){
// 	    scanf("%d%d",&l,&p);
	    
// 	 int per=(p*100)/l;
	
// if(per>=75){
//     printf("YES\n");
// }else{
//     printf("NO\n");
// }

// }

//     return 0;
// }
//******************************************************
// question31
// nput any city from the user and display the monument of that city.
// City Monument
// Delhi Red Fort
// Agra Taj Mahal
// Jaipur Jal Mahal
// //For any other city as an input, print "No monument in the database for this city.".
// #include <stdio.h>

// int main() {
//     char city;
//     printf("Enter city name(d,a,j): ");
//     scanf("%c", &city);

    
        
//         // int delhi, agra,jaipur, redfort, tajmahal,jaimahal);

//         switch (city) {
//             case 'd': printf("red fort");
//                 break;
//             case 'a': printf("tajmahel");
//                 break;
//             case 'j': printf("jaimahal");
// 								break;
// 						default: printf("INVALID");
//     }

// 		return 0;
// }
//***********************************
//question 32:Roller Coasters require children to have a minimum height of 5 feet. Any child below this height is generally not allowed on them.
//Write a program to accept a child’s height in inches and display if he or she will be allowed to ride or not.
//Test cases:
//Input: 65
//Output: Yes
//Explanation:
//65 inches in feet is equal to 5 ft 5 inches. Since the height is greater than 5 ft, the user is allowed
     
// #include<stdio.h>
// int main(){
// 	float height;
// 	printf("enter height:");
// 	scanf("%f", &height);
// 	float total=height/12;
// 	if(total>5){
// 		printf("yes \n");

// 	}else{
// 		printf("NOT");
// 	}
// 	return 0;

// }
//*****************************************************
//question33:
//rite a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria :
//Cost price (in Rs) Tax
//> 100000 15 %
//> 50000 and <= 100000 10%
//<= 50000 5%
//Test cases:
//Input: 16000
//Output:2400
//Explanation:
//Since the price of the bike fallws in the bracket > 10000, the road tax is equal to 15% of the price = 2400
// #include<stdio.h>
// int main(){
// 	int costprice;
// 	printf("enter costprice:");
// 	scanf("%d", &costprice);
// 	if(costprice>100000){
// 		printf("tax is %2f\n", costprice*0.15);

// 	}else if(costprice<100000 && costprice>50000){
// 		printf("tax is %2f", costprice*0.10);
	
// }else{
// 	printf("tax is %", costprice*0.05);
// }
// return 0;
// }
//****************************************************************
//question34:
//Write a program to input electricity unit charges and calculate the total electricity bill according to the given condition:
//For the first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bil

// #include <stdio.h>

// int main() {
//     int unit;
//     printf("Enter unit: ");
//     scanf("%d", &unit);

//     if (unit > 0 && unit <= 50) {
//         float totalunit = unit * 0.50;
//         float tunit = (totalunit * 0.2)+totalunit;
//         printf("Total electricity bill: %f\n", tunit);

//     } else if (unit > 50 && unit <= 150) {
//         float totalunit = (50*0.5)+((unit - 50) * 0.75);
//         float tunit =  (totalunit * 0.2)+totalunit;
//         printf("Total electricity bill: %f\n", tunit);

//     } else if (unit > 150 && unit <= 250) {
//         float totalunit = (50*0.5)+(100 * 0.75)+((unit - 150) * 1.20);
//         float tunit = (totalunit * 0.2)+totalunit;
//         printf("Total electricity bill: %f\n", tunit);
//     } else {
//         float totalunit = (50*0.5)+(100*0.75)+(100*1.20)+((unit - 250) * 1.50);
//         float tunit = (totalunit * 0.2)+totalunit;
//         printf("Total electricity bill: %f\n", tunit);
//     }

//     return 0;
// }
//**************************************************************************
//question35:
//Write a program to calculate the electricity bill (Accept the number of units from the user) according to the following criteria: Unit
//Price
//First 100 units no charge
//Next 100 units Rs 5 per unit
//After 200 units Rs 10 per unit
// #include<stdio.h>

// int main() {
//     int unit;
//     printf("Enter unit: ");
//     scanf("%d", &unit);

//     int total;

//     if (unit > 0 && unit <= 100) {
//         total = unit * 0;  
//         printf("Total electricity bill: %d\n", total);
//     } else if (unit > 100 && unit <= 200) {
//         total = (100 * 0) + (unit - 100) * 5;
//         printf("Total electricity bill: %d\n", total);
//     } else {
//         total = (100 * 0) + (100 * 5) + (unit - 200) * 10;
//         printf("Total electricity bill: %d\n", total);
//     }

//     return 0;
// }
///**************(********************************
// question 36:
//Accept the age, gender (‘M’, ‘F’), and the number of days and display the wages accordingly
//If the age does not fall in any range then display the following message: “Enter appropriate age”
//Age: Gender Wage/day
//>=18 and <30 M 700
//F 750
//>=30 and <=40 M 800
//f=850
// #include<stdio.h>

// int main() {
//     int age, day;
//     char gender;

//     printf("Enter age & day: \n");
//     scanf("%d%d", &age, &day);
//     printf("enter the gender\n");
//     scanf(" %c",&gender);



//     if ( age >= 18 && age < 30) {
//         if (gender == 'm') {
//             printf("Total wage: %d\n", day * 700);
//         } else {
//             printf("Total wage: %d\n", day * 750);
//         }
//     } else if (age >= 30 && age <= 40) {
//         if (gender =='m') {
//             printf("Total wage: %d\n", day * 800);
//         } else {
//             printf("Total wage: %d\n", day * 850);
//         }
//     }

//     return 0;
// }
//question37:
//Accept the number of days from the user and calculate the charge for the library according to the following:
//First five days: Rs 2/day.
//Next 5 days: Rs 3/day.
//Next 5 days: Rs 4/day
//After 15 days: Rs 5/day
// #include<stdio.h>
// int main(){
//   int days;
//   printf("enter days:");
//   scanf("%d", &days);
//   if(days>0 && days<=5){
// printf("total cost: %d", days*2);
//   }
//   else if(days>5 && days<=10){
//     int totalcost=(5*2)+(days-5)*3;
//   }
//   else if (days>10 && days<=15){
//     int totalcost=(5*2)+(5*3)+(days-10)*4;
//     printf("total cost: %d", totalcost);
//   }
//   else{
//     int totalcost=(5*2)+(5*3)+(5*4)+(days-15)*5;
//     printf("total cost: %d", totalcost);
//   }

//     return 0;
    
  
//   }
//****************************************************************
//questiion 38:
//nput four sides of a quadrilateral ABCD in the order AB, BC, CD, DA and an internal angle I and write a program to categorize the
//shape of a quadrilateral as either a square, rhombus, rectangle, parallelogram, or irregular quadrilateral.
// #include <stdio.h>

// int main() {
//     float AB, BC, CD, DA, angle;

    
//     printf("Enter the sides AB, BC, CD, DA in order: ");
//     scanf("%f %f %f %f", &AB, &BC, &CD, &DA);

//     printf("Enter the internal angle : ");
//     scanf("%f", &angle);

    
//     if (AB == BC && BC == CD && CD == DA) {
//         if (angle== 90) {
//             printf("It is a square.\n");
//         } else {
//             printf("It is a rhombus.\n");
//         }
//     } else if (AB == CD && BC == DA) {
//         if (angle == 90) {
//             printf("It is a rectangle.\n");
//         } else {
//             printf("It is a parallelogram.\n");
//         }
//     } else {
//         printf("It is an irregular quadrilateral.\n");
//     }

//     return 0;
// }
//****************************************************
//question39:
//Write a program to input two numbers and sum them. However, if the sum is between 15 to 20 it will return 20.

// #include<stdio.h>
// int main (){
//   int a, b;
//   printf("enter number:");
//   scanf("%d%d",&a,&b );
//   int sum=a+b;
//   if(sum>15 && sum<20){
//   printf("print number: %d\n",20);
// }
// else {
//   printf("number sum: %d\n",sum);
// }
// return 0;
// }
//**************************************************8
//question40:
// A certain steel is graded according to the following conditions:
// (i) Rockwell-hardness > 50
// (ii) Carbon content > 0.7
// (iii) Tensile strength > 5600 kg/cm2
// The steel is graded as follows:
// a. Grade 10, if all the conditions are satisfied
// b. Grade 9, if conditions (i) and (ii) are satisfied
// c. Grade 8, if conditions (ii) and (iii) are satisfied
// d. Grade 7, if conditions (i) and (iii) are satisfied
// e. Grade 0, otherwise
// #include <stdio.h>

// int main() {
//     float hardness, carbonContent, tensileStrength;

    
//     printf("Enter Rockwell hardness, carbon content, and tensile strength: ");
//     scanf("%f %f %f", &hardness, &carbonContent, &tensileStrength);


//     if (hardness > 50 && carbonContent > 0.7 && tensileStrength > 5600) {
//         printf("Grade 10\n");
//     } else if (hardness > 50 && carbonContent > 0.7) {
//         printf("Grade 9\n");
//     } else if (carbonContent > 0.7 && tensileStrength > 5600) {
//         printf("Grade 8\n");
//     } else if (hardness > 50 && tensileStrength > 5600) {
//         printf("Grade 7\n");
//     } else {
//         printf("Grade 0\n");
//     }

//     return 0;
// }
//******************************************************************
//question41:
//Write a program to check if the given number is divisible by 5, 11, both or none.
//If it is divisible by 5 then print 5
//If it is divisible by 11 then print 11
//If it is divisible by 5 and 11 then print “Both”
// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter number:");
//   scanf("%d",&n);
//   if(n%5==0 && n%11==0){
//     printf("number divisible by 5 & 11:\n");
//   }
//   else if(n%11==0){
//     printf("number divisible by 11:\n");
//   }
//   else if(n%5==0){
//     printf("number is divisible by 5:");
//   }
//   else{
//     printf("Not divisible by 5 and 11");
//   }
// return 0;

// }
//****************************************************
//question42:
//Input 3 numbers from the user and output the second max of 3 numbers.

// #include <stdio.h>

// int main() {
//     int a, b, c,d;

    
//     printf("Enter the first number: ");
//     scanf("%d", &a);

//     printf("Enter the second number: ");
//     scanf("%d", &b);

//     printf("Enter the third number: ");
//     scanf("%d", &c);

//     printf("Enter the fourth number: ");
//     scanf("%d", &d);
//     int max,smax,f1,f2;

//     if(a>d){
//       f1=a;
//     }else{
//       f1=d;
//     }
//     if(b>c){
//       f2=b;
//     }else{
//       f2=c;
//     }
//     if(f1>f2){
//       max=f1;
//       smax=f2;
//     }else{
//       max=f2;
//       smax=f1;
//     }

    



    //printf("The second maximum of the numbers is: %d\n",smax);
    //return 0;
//}
//***********************************************
//question43:
//nput three integers representing the angles of a triangle in degrees to determine whether they form a valid set of angles of a
//triangle. If it is not a valid set, then generate a message and terminate the process. If it is a valid set, then the process
//determines whether it is equiangular (all three angles are the same). It also determines if the triangle is right-angled (has one
//angle with 90 degrees), obtuse-angled (one anglei above 90), or acute-angled (all three angles are below 90 degrees). Finally, it
//shows the conclusion about the triangle.
#include<stdio.h>
int main(){
  int angle1, angle2, angle3;
  char equiangular, right-angle tringle, obtuse-angled, acute-angled
  printf("endter three angle:");
  scanf("%d%d%d", &angle1,&angle2, &angle3);
  if(angle1==angle2 && angle1==angle3){
    printf("equiangular %c", equiangular);
  }
  else if(angle1==90 || anle2== 90 || angle==90 ) {
    printf("right-angle tringle %c", right-angle tringle);
  }
}