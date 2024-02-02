// #include<stdio.h>
// int main() {
    
//     for(int i=1; i<=5; i++){
//         printf("shalindra aporiya \n");
//     }
//     return 0;
// }

//*************************************************
//question1:
// number print 1-100;
// #include<stdio.h>
// int main() {
//     for(int i=1; i<=100; i=i+1){
//         printf("%d \n", i);
//     }
//     return 0;
// }
//************************************************
//quesstion;2
//1to 10 number print:
// #include <stdio.h>
// int main() {
//     for(int i=10; i>=0; i=i-1){
//         printf("%d \n", i);
//     }
//     return 0;
// }
//**********************************************************************************
//question3:
//for loop:
// #include<stdio.h>
//  int main() {
//     int n;
//     printf("enter number:");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i=i+1){
//         printf("%d \n", i);

//     }
//     return 0;
//  }
//***********************************************************************************************
//question4:
// take a number print the even number till n:
// #include<stdio.h>
//  int main() {
//     int number;
//     printf("enter number");
//     scanf("%d", &number);
//     for(int i=2; i<number; i=i+2){
//         printf("%d \n", i);

//     }
//     return 0;
//  }
//*********************************************************************
//question5:
//
// #include <stdio.h>
// int main(){
//    for( float i=1.0; i<=5; i=i+1){
//       printf("%f \n",i);
//    }

// return 0;
// }
//**************************************************************8
//question6:
// #include <stdio.h>
// int main(){
//    for(char ch='a'; ch <='z'; ch++){
//       printf("%c \n", ch);

//    }
//    return 0;
// }
    //************************************************************
//quetion7:

//while loop:
// #include <stdio.h>
// int main(){
//    int i=1;
//    while(i<=5){
//       printf("%d \n",i);
//       i++;
//    }
// }
//*****************************************************************
//quetion8:

//print the numbber 0to n given by user :
// #include <stdio.h>
// int main(){
//    int n;
//    printf("enter number:");
//    scanf("%d", &n);
//    int i=1;
//    while(i<=n){
//       printf("%d \n",i);
//       i++;
//    }
//    return 0;
// }
//*****************************************************************************
//question9:
//do while loop:
// #include <stdio.h>
// int main(){
//    int i=1;
//    do{
//       printf("%d \n",i);
//       i++;
//     } while(i<=5);
   
//    return 0;
// }
//*************************************************************************88
//quetion10:
//print the sum natural number given by user:
// #include <stdio.h>
// int main(){
//    int n;
   
//    printf("enter number:");
//    scanf("%d", &n);
//    int sum =0;
//    int i=1;
//    while(i<=n){
//       sum=sum+i;
//       i++;
//    }
//       printf("sum %d \n", sum);
   
//    return 0;
// }
//******************************************************************************
//quetion11:
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);

//     int sum = 0;
//     for (int i = 1, j = n; i <= n && j >= 1; i++, j--) {
//         sum = sum + i;  
//         printf("%d \n", j);
//     }

//     printf("Sum: %d", sum);

//     return 0;
// }
//*********************************************************************************
//question12:
//print the table of a number input by the user:
// #include <stdio.h>

// int main() {
//    int n;
//    printf("enter number:");
//    scanf("%d",&n);
//    for(int i=1; i<=10; i++){
//       printf(" %d \n", n*i);
//    }
//    return 0;
// }
//******************************************************************************
// break use:
// #include <stdio.h>

// int main() {
   
//    for(int i=1; i<=6; i++ ){
//       if(i==3){
//          break;
      
//    }
// printf("%d \n",i);
//    }
//    printf("end");
// return 0;
//    }
//**************************************************************************
//quetion13:
//keep taking number as input from user untill user enters odd numbers:
// #include <stdio.h>

// int main() {
//    int n;
//    do {
//       printf("Enter number: ");
//       scanf("%d", &n);
//       printf("%d \n", n);
//       if (n % 2 != 0) {
//          break;
//       }
//    } while (1);
//    printf("Thank you\n");
//    return 0;
// }
//**************************************************************************************
//quetion14:
//keep taking number as input from user untill user enters a which number of  multiple of 7:

// #include <stdio.h>

// int main() {
//    int n;
//    do{
//       printf("enter number");
//       scanf("%d",&n);
//       printf("%d \n",n);
//       if(n % 7 == 0){
//          break;
//       }

//    }while (1);
//    printf(" thank you \n");
//    return 0;
// }
//*******************************************************************8
//continue statement : skip to next iteratiion
// #include <stdio.h>

// int main() {
//    for(int i=1; i<=5; i++){
   
//    if(i==3){
//       continue;
//    }
// printf("%d \n",i);
//    }
// return 0;
//    }
//*********************************************************************************************
//question15:
// print all odd number 5 to 50:
// #include <stdio.h>

// int main() {
//    for(int i=5; i<=50; i++){
//       if(i % 2==0){
//       continue;
//    }
//    printf("%d \n", i);
//    }
// return 0;
// }
//***************************************************************************************
//quetion16:
//print the factorial of the number n:
// #include <stdio.h>

// int main() {
//    int n;
//    int factorial=1;
//    printf("enter number");
//    scanf("%d",&n);
//    for(int i=n; i>0; i--){
//       factorial=factorial*i;
//    }
// printf("%d \n", factorial);
// return 0;
// }
//*****************************************************************************************
//question17:
// print the reverse table for a numner n:

//    #include <stdio.h>

// int main() {
//    int n;
//    printf("enter number:");
//    scanf("%d",&n);
//    for(int i=10; i>=1; i--){
//    printf(" %d \n", i*n);
//    }
//    return 0;
// }
//***********************************************************************
//question18:
//print the sume all numbers between 5to 50:
// #include <stdio.h>

// // int main() {
//    int sum=0;
//    for(int i=5; i<=50; i++){


// sum=sum+i;
//    }
//    printf("sum %d \n",sum);
//    return 0;
// }
//****************************************************************
//funtion use:
// #include <stdio.h>
// //declearation function.// prototype
// void printhello();
// int main() {
// printhello();//funtion call
// printhello();
// printhello();

// return 0;
// }
// //funtion defination
// void printhello(){
//    printf("hello \n");
// printf("shalindra aporiya \n");


// }
//****************************************************************************
//quetion19;
//write two funtions - one to print "hallo" & second print "good bay".
// #include <stdio.h> 
// void printhallo();
// void printgoodbye();

// int main() {
//     printhallo();
//     printgoodbye();

//     return 0;

// }
// void printhallo(){
//     printf("hallo \n");
// }
// void printgoodbye(){
//     printf("goodbye \n");
// }
//***********************************************
//quetion20:
//write a functionn that print naiste if a user india & banjour
//if the user french;
// #include<stdio.h>

// void printnamaste();
// void printbonjour();

// int main() {
//     printf("Enter 'f' for French & 'i' for Indian: ");
//     char ch;
//     scanf(" %c", &ch); // Use %c to read a character

//     if(ch == 'i') {
//         printnamaste();
//     } else {
//         printbonjour();
//     }

//     return 0;
// } 

// void printnamaste() {
//     printf("Namaste\n");
// }

//void printbonjour() {
    //printf("Bonjour\n");
//}
//***************************************************
//question21:
//function use sume two value:
// #include<stdio.h>
// int sum(int a,int b);
// int main(){
//     int a, b;

//  printf("enter firstt number:");
//  scanf("%d",&a);
//  printf("enter second number:");
//  scanf("%d", &b);
//  int s=sum(a,b);
//     printf("sum %d \n", s);
 
//  return 0;
// }
// int sum(int x, int y){
//     return x+y;
// }
//**************************************
//question22:
// table print use function;
// #include<stdio.h>
// int sum(int a, int b);
// void printtable(int n);
// int main(){
//     int n;

//  printf("enter number:");
//  scanf("%d",&n);
 
 
 
// printtable(n);//argument//actul // perameter
 
//  return 0;
//  int sum(int x, int y){
//     return x+y;
//  }
// }

// void printtable(int n){//perameter// forrmal perameter
//     for(int i=1; i<=10; i++){
//         printf("%d \n", i*n);
//     }
// }
//******************************************
//question23:
//function use calculate price
// #include<stdio.h>

// void calculateprice(float value);

// int main() {
//     float value = 100.0;
//     calculateprice(value);
//     printf("value is %f \n", value);
//     return 0;
// }

// void calculateprice(float value) {
//     value = value + (0.18 * value);
//     printf("Final price is %f \n", value);
// }
//****************************************
//question24:
//use library functiion to calculate squar of a number given by use:
// #include<stdio.h>
// void calculatesquar(int n);
// int main(){
//     int n;
//     printf("enter number:");
//     scanf("%d",&n);
//     calculatesquar(n);

//     return 0;

// }
// void calculatesquar(int n){
//     int squar=n*n;
//     printf("squar %d \n", n*n);
// }
//*******************************************************
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n = 4;
    


//     printf("%f",pow(n,2));
    

//     return 0;
// }
//*****************************
//
// //quetion25:
// //write a functions to calculate area of squar,a cirlce & rectangle;

// #include <stdio.h>
// #include <math.h>

// float rectanglearea(float length, float width);
// float circlearea(float radius);
// float trianglearea(float base, float height);

// int main() {
//     float length = 5.0;
//     float width = 10.0;

//     printf("Area is %f", rectanglearea(length, width));

//     return 0;
// }

// float rectanglearea(float length, float width) {
//     return length * width;
// }

// float circlearea(float radius) {
//     return 3.14 * radius * radius;
// }

// float trianglearea(float base, float height) {
//     return 0.5 * base * height;
// }
//***************************************************
//question26:
//recrusion use
// #include<stdio.h>
// void printhw(int count);
// int main(){
//     printhw(10);
//     return 0;
// }
// void printhw(int count){
//     if(count==0){
//         return;
//     }
//     printf("hallo world\n");
//     printhw(count-1);
// }
//**********************************
//question27:
//recrusion use print n natural number
// #include<stdio.h>
// int sum(int n);
// int main(){
//     printf("sum is %d\n ",sum(5));

// }
// //recrusionn function
// int sum(int n){
//     if(n==1){
// return 1;
//     }
//     int sumnm1=sum(n-1);
//     int sumn=sumnm1+n;
// return sumn;
// }
//*************************************************
//quetion28:
//factorial recrusion use:
// #include<stdio.h>
// int factorial(int n);
// int main(){
//     printf("factorial is %d\n ",factorial(5));

// }
// //recrusionn function
// int factorial(int n){
//     if(n==1){
// return 1;
//     }
//     int factorialnm1=factorial(n-1);
//     int factorial=factorialnm1*n;
// return factorial;
// }
//*******************************************
// //question 29:wrong

// //write a program convert celsius to farhenhit
// #include<stdio.h>
// float printforhenhit(float celsius);
// int main (){

// }
// float printforhenhit(float celsius){
//     float forhenhit=celsius*(9/5)+5
// }



// #include <stdio.h>

// float printFarhenhit(float celsius);
//     int main(){

//     float temp=printFarhenhit(37);
//     return 0;
//     }
//     float printFarhenhit(float celsius){
//         float f=celsius*1.8+32;
//         printf("%f",f);
//         return f;
// }
//***************************************************
//question30:
//calculate percentage use functionn: math,hindi,science
// #include<stdio.h>
// int percal(int math, int hindi, int science );
// int main(){

// int math=99;
// int hindi=78;
// int science=90;
// printf("percentage %d\n ", percal(math, hindi, science));
// return 0;
// int prrcentage=math+hindi+science)/3);
// }
//*********************************************************
//question31:
// fibonacci sequence
// #include<stdio.h>
// int fib(int n);
// int main(){
//     printf("%d", fib(6));
//     return 0;
// }
//  int fib(int n){
//     if(n==0){
//         return 0;
//     }


//     if(n==1){
//         return 1;
//     }

// int fibNm1 = fib(n-1);
// int fibNm2 = fib(n-2);
// int fibN = fibNm1+fibNm2;
// //printf("fibN of %d is: %d \n", n,fibN);
// return fibN;
// }
//**********************************************************
//pointers use:32
// #include<stdio.h>
// int main(){


// int age=22;
// int *ptr=&age;
// int _age = *ptr;
// printf("%d",_age);
// return 0;
// }//***************************************************************
//learn printing pointer:33
// #include<stdio.h>
// int main(){


// int age=22;
// int *ptr=&age;
// //adders print:
// //printf("%p \n",&age);
// printf("%u \n",&age);
// printf("%u \n",ptr);
// printf("%u \n",&ptr);
// return 0;
// }
//*************************************************************8
//value print:34
// #include<stdio.h>
// int main(){


// int age=22;
// int *ptr=&age;
// //valu print:
// printf("%d\n",age);
// printf("%d \n",*ptr);
// printf("%d \n",*(&age));

// return 0;
// }
//*************************************************************************
//int *ptr35
//int x;
//ptr &x;
//*ptr=0;
// #include<stdio.h>
// int main(){


// int x;
// int *ptr;

// ptr = &x;
// *ptr=0;//0

// printf("%d\n", x);//0
// printf("%d \n",*ptr);//0

// return 0;
// }
//*********************************************
// #include<stdio.h>36
// int main(){


// int x;
// int *ptr;

// ptr = &x;
// *ptr=0;

// printf("x=%d\n", x);
// printf("*ptr=%d \n",*ptr);
// *ptr += 5;//5
// printf("x=%d\n", x);//5
// printf("*ptr=%d \n",*ptr);//5
// (*ptr)++;//6
// printf("x=%d\n", x);//6
// printf("*ptr=%d \n",*ptr);//6

// return 0;
// }
//****************************************
//use point to pointer:37
// #include<stdio.h>
// int main(){


// int i=5;
// int *ptr = &i;
// int **pptr = &ptr;




// printf("**pptr=%d\n", **pptr);

// return 0;
// }
//********************************************
///use pointe to function  call:38
// #include<stdio.h>
// void squar(int n);
// void _squar(int* n);
// int main(){


// int number = 4;
// squar(number);
// printf("number = %d\n", number);

//   _squar(&number);
//  printf("number = %d\n", number);






// return 0;
// }

// //call by value we pass value of variable as argument:
// void squar(int n){///copy valu stored n;
//     n=n*n;
//     printf(" squar %d \n", n);
// }
// //call by refrence
// //call by  we pass address of variable of argument;
// void _squar(int* n){
//     *n=(*n)*(*n);
//     printf("squar = %d \n", *n);
// }
//*********************************************************************8
//swap use by function39


// # include <stdio.h>

// void swap(int x, int y);
// void _swap(int *x, int *y);

// int main(){
//     int x=3, y=6;
    
//     _swap(&x,&y);
//     printf("x=%d & y=%d \n", x, y);

//     return 0;
// }
// //coll by value
// void swap(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
//     printf("a=%d & b=%d\n", a, b);
// }
// //call by refrence
// void _swap(int *a,int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
    
// }
//*************************************************
//queston:40
//will the address output be same:use pass by value and pass by refrence
// #include<stdio.h>
// void printaddress(int *n);
// int main(){
//     int n=5;
//     printaddress(&n);
//     printf("%u\n",&n);
    
//     return 0;
    
// }
// void printaddress(int *n){
//     printf("adress=%u\n",n);
// }
//********************************************************************8
//question 41 ;
// a functionto calculate the  sum, product and avrage
//of two number print that avrage in  main function
// #include<stdio.h>
// void dowork(int a, int b , int *sum, int *pro, int *avg);
// int main(){
//     int a=3, b=5;
//     int sum, pro, avg;
//     dowork(a, b, &sum, &pro, &avg);
//     printf("sum=%d pro=%d avg=%d", sum,pro,avg);
//     return 0;
// }
// void dowork(int a, int b, int *sum, int *pro, int *avg){
//     *sum=a+b;
//     *pro=a*b;
// *avg=(a+b)/2;
// }
//********************************************************************
//question42:
#include<stdio.h>
 int main() {
    int i,j;

    
    
    for(int i=1; i<=5; i=i+1){
        for(int j=1;j<=5; j--)

        printf("%c\n", '*'){
    
    printf("\n");
    
    
    return 0;
 }



