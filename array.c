// question1:

// #include<stdio.h>
// int main(){
//   int marks[3];
//   printf("enter phy:");
//   scanf("%d", &marks[0]);
//   printf("enter che:");
//   scanf("%d",&marks[1]);
//   printf("enter math:");
//   scanf("%d", &marks[2]);
//   printf("phy = %d, che=%d, math=%d,", marks[0],marks[1], marks[2]);

//   return 0;
// }
//*************************************
// question2:
// three item price and sum total cost price:
// #include<stdio.h>
// int main(){
// float  price[3];
// printf("enter three prices:");
// scanf("%f", &price[0]);
// scanf("%f", &price[1]);
// scanf("%f", &price[2]);
// printf(" print total price 1; %f", price[0]+(0.18*price[0]));
// printf(" print total price 2; %f", price[1]+(0.18*price[1]));
// printf(" print total price 3; %f", price[2]+(0.18*price[2]));
// return 0;

// }
//******************************************************************************
// question3:
// #include<stdio.h>
// int main()[
// float int price[]={ 12.9, 23.3, 23.4};// array initilize
// float  price[3];
// printf("enter three prices:");
// scanf("%f", &price[0]);
// scanf("%f", &price[1]);
// scanf("%f", &price[2]);
// printf(" print total price 1; %f", price[0]+(0.18*price[0]));
// printf(" print total price 2; %f", price[1]+(0.18*price[1]));
// printf(" print total price 3; %f", price[2]+(0.18*price[2]));
// return 0;

// }
//*************************************************************************
// question4:
// arithmetic pointer use
// inteeger value;
// #include<stdio.h>
// int main(){
//   int age=22;
//   int *ptr=&age;
//   printf("ptr %u\n",ptr);
//   ptr++;
//   printf("ptr %u\n",ptr);
//   ptr--;
//   printf("ptr %u\n",ptr);
//   return 0;
// }
//**************************************************************************************
// question5:
// arithmetic pointer use
// float value;
// #include<stdio.h>
// int main(){
//   float price=22.4;
//   float *ptr=&price;
//   printf("ptr %u\n",ptr);
//   ptr++;
//   printf("ptr %u\n",ptr);
//   ptr--;
//   printf("ptr %u\n",ptr);
//   return 0;
// }
//*******************************************************
// question6:
// arithmetic pointer use
// charector value use
// charector value
// #include<stdio.h>

// int main() {
//   char star = '*';
//   char *ptr = &star;

//   printf("ptr = %p\n", ptr);
//   ptr++;
//   printf("ptr = %p\n", ptr);
//   ptr--;
//   printf("ptr = %p\n", ptr);

//   return 0;
//}
//*********************************************************
// question7:
// we can also substruct one pointer from another pointer:
// #include<stdio.h>
// int main(){
//   int age=22;
//   int _age=23;
//   int *ptr=&age;
//   int *_ptr=&_age;
//   printf("%u %u diffrence %u\n",ptr, _ptr, ptr-_ptr);

//   _ptr=&age;
//   printf("camparesion %u\n", ptr == _ptr);
//   return 0;

// }
//*********************************************************
// question8:
// pointer use an array;
// #include<stdio.h>

// int main() {
//   int addhar[5];
//   int *ptr = addhar;

//   // Input
//   for (int i = 0; i < 5; i++) {
//     printf("%d index:", i);
//     scanf("%d", ptr + i);
//   }

//   // Output
//   for (int i = 0; i < 5; i++) {
//     printf("%d index=%d\n", i, *(ptr + i));
//   }

//   return 0;
// }
//**************************************************************
// question9:
// without pointer use
// #include<stdio.h>

// int main() {
//   int addhar[5];
//   int *ptr = addhar;

//   // Input
//   for (int i = 0; i < 5; i++) {
//     printf("%d index:", i);
//     scanf("%d", &addhar[i]);
//   }

//   // Output
//   for (int i = 0; i < 5; i++) {
//     printf("%d index=%d\n", i, addhar[i]);
//   }

//   return 0;
// }
//*****************************************************
// queston 10:
// function use in array
// #include<stdio.h>

// void printnumbers(int arr[], int n);

// int main(){
//   int arr[] = {1, 2, 3, 4, 5, 6};
//   printnumbers(arr, 6);
//   return 0;
// }

// void printnumbers(int arr[], int n){
//   for(int i = 0; i < n; i++){
//     printf("%d\t", arr[i]);
//   }
//   printf("\n");
// }
// pointer use
// #include<stdio.h>

// void printnumbers(int *arr, int n);

// int main(){
//   int arr[] = {1, 2, 3, 4, 5, 6};
//   printnumbers(arr, 6);
//   return 0;
// }

// void printnumbers(int *arr, int n){
//   for(int i = 0; i < n; i++){
//     printf("%d\t", arr[i]);
//   }
//   printf("\n");
// }
//*******************************************
// question11:
// wrinte a function to count the number odd numbers in an array
// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//   int arr[] = {1, 2, 3, 3, 4, 5, 6};
//   printf("%d", countOdd(arr, 7));
//   return 0;
// }

// int countOdd(int arr[], int n) {
//   int count = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] % 2 != 0) {
//       count++;
//     }
//   }
//   return count;
// }********************************************************
// queston12:
// count even numbers:
// #include <stdio.h>

// int counteven(int arr[], int n);

// int main() {
//   int arr[] = {1, 2, 3, 3, 4, 5, 6};
//   printf("%d", counteven(arr, 7));
//   return 0;
// }

// int counteven(int arr[], int n) {
//   int count = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] % 2 == 0) {
//       count++;
//     }
//   }
//   return count;
// }
//******************************************
// question13:
// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//   int arr[] = {1, 2, 3, 4,  5};
//   printf("%d\n", *(arr+2));
//   printf("%d\n", *(arr+5));
//   return 0;
// }

// int counteven(int arr[], int n) {
//   int count = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] % 2 != 0) {
//       count++;
//     }
//   }
//   return count;
// }
//***************************************************

// question14

// #include <stdio.h>

// int main() {
//     int n = 5;
//     int arr[] = {1, 2, 3, 4, 5};

//     for (int i = n - 1; i >= 0; i--) {
//         printf("reverse number %d\n", arr[i]);
//     }

//     return 0;
// }
//**************************************8
// question 15: reverse array:
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Reverse order:\n");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("Reverse number %d: %d\n", n - i, arr[i]);
//     }

//     return 0;
// }
//***********************************************
// // question16:Write a program to take size of array, array and target as input from the user and check whether the
// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);

//   int arr[n];

//   printf("Enter %d elements:\n", n);
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   int p;
//   printf("enter elementP:");
//   scanf("%d",&p);
  
  
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == p)
//     {
//       printf("yes");
//       return 0;
//     }
//   }

//   printf("no");

//   return 0;
//  }
//***********************************************
// question17:
//Write a program to print the sum of all the odd numbers and even numbers in the given array.
//Note: In the output, you should print odd numbers sum and even numbers sum in this order onl
// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);

//   int arr[n];

//   printf("Enter %d elements:\n", n);
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   int sumeven=0;
//   int sumodd=0;
  
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i]%2 == 0){
//       sumeven=sumeven+arr[i];
//     }
//     sumodd=sumodd+arr[i];
//   }
//   printf("sumeven %d\n", sumeven);
//   printf("sumodd %d\n", sumodd);
    
//       return 0;
    
//   }
//*************************************************************
//question18;
//Write a program to take N numbers from a user as input and store them in an array and then take another number from the user M, and
//delete the Mth element from the array. Print the final array.
//Note - (Do not use another array)
// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);

//   int arr[n];

//   printf("Enter %d elements:\n", n);
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
  
//   int p;
//   printf("enter numberP:");
//   scanf("%d",&p);
  
  
  
//   for (int i = 0; i < n; i++){
//     p=p-1;
  
//     if (arr[i]==p){
//       continue;
//     }
//       printf("%d",arr[i]);
    
    
//   }
      
//       return 0;
    
//   }
//**************************************************
//question19:
//Write a program to take N numbers from a user as input and then take another number from the user M, and a number X from the user
//to be inserted at the Mth location in the array. Print the final array.
//Note - (Do not use another array)
//   #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);

//   int arr[n];

//   printf("Enter %d elements:\n", n);
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   int N;
//   printf("enter numbe:");
//   scanf("%d", &N);
//   int p;
//   printf("enter numberP:");
//   scanf("%d",&p);
  
  
//   int temp=0;
//   for (int i = p-1; i < n+1; i++)
//   {  
//     temp = arr[i];
//     arr[i] = N;
//     N = temp;
             
//   }
//   for(int i=0; i<n+1; i++){
//       printf("%5d",arr[i]);
    
  
//   }
      
//       return 0;
    
//   }
  //******************************************
  //question20:
  //Write a program to take N numbers from a user as input and then print the duplicates in those N numbers. Also, take N as an input from
//the user.
 
// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);

//   int arr[n];

//   printf("Enter %d elements:\n", n);
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   for(int i=0; i<n; i++){
//    for(int j=i+1; j<n; j++){
//     if(arr[i]==arr[j]){
//       printf("duplicate number %d\n", arr[i]);
//     }
//    } 
// }
// return 0;
    
//   }
  //****************************************************
  //question21:
  //nput:a6program to take N numbers from the user and print the frequency of every numbe
#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n;i++)
  {

    scanf("%d", &arr[i]);
  }
  int r;
  printf("enter numberR:");
  scanf("%d",&r);
  
  
  for(int j=1; j<=r; j++){
    
    
   for(int i=0; i<n; i++){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
   }
  
    for(int i=0; i<n; i++){
      printf("rotate number%d\n:",arr[i]);
    
   }
  }

return 0;
    }

