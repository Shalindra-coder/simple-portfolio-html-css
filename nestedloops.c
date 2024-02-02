// qestion1; tringle pattren
//#include <stdio.h>

// int main() {
//     int n, i, j;

//     // Taking input from the user
//     printf("Enter the value of N: ");
//     scanf("%d", &n);

//     // Check if the input is a positive integer
//     if (n > 0) {
//         // Nested loops to print the right-angled triangle pattern
//         for (i = 1; i <= n; i++) {
//             for (j = 1; j <= i; j++) {
//                 printf("* ");
//             }
//             printf("\n");
//         }
//     } else {
//         printf("Please enter a positive integer.\n");
//     }

//     return 0;
// }
//*****************************************************************
//question2:tringle pattern
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter is number N:");
//   scanf("%d", &n);
//   if(n>0){
//     for(int i=1; i<=n; i++){
//       for(int j=1; j<=i; j++){
//         printf("*");
//       }
//       printf("\n");

//     }
  
    
//     }
//       return 0;

//     }
//************************************************************8\
// question3:tringle
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter is number N:");
//   scanf("%d", &n);
//   if(n>0){
//     for(int i=1; i<=n; i++){
//       for(int j=n; j>0; j--){
//         printf("*");
//       }
//       printf("\n");

//     }
  
    
//     }
//       return 0;

//     }
//**************************************
//question4:tringle


// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter is number N:");
//   scanf("%d", &n);
  
//     for(int i=1; i<=n; i++){
//       for(int j=n-i; j>0; j--){
//         printf(" ");
//       }
//       for(int k=1; k<=i; k++){
//         printf("*");
//       }
//       printf("\n");
//     } 
  
 
//    return 0;

//    } 
//*******************************************************************
//question5:tringle
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter is number N:");
//   scanf("%d", &n);
//   if(n>0){
//     for(int i=1; i<=n; i++){
//       for(int j=n; j>=i; j--){
//         printf("*");
//       }
//       printf("\n");

//     }
  
    
//     }
//       return 0;

//     }
//     //**
//******************************************************
//question6:half diomond pattern
// #include<stdio.h>

// int main() {
//     int n, i, j, k;
//     int s = 1;

//     printf("Enter a number N: ");
//     scanf("%d", &n);

//     if (n > 0) {
//         for (i = 1; i <= n; i++) {
        
//             for (j = n - i; j >= 1; j--) {
//                 printf(" ");
//             }

            
//             for (k = 1; k <= s; k++) {
//                 printf("*");
//             }

//             s += 2; 
//             printf("\n");
//         }
    
//     }

//     return 0;
// }
//*****************************
// //question7 complete diomond pattern
// #include<stdio.h>

// int main() {
//     int n, i, j, k;
//     int s = 1;

//     printf("Enter a number N: ");
//     scanf("%d", &n);

//     if (n > 0) {
  
//         for (i = 1; i <= n; i++) {
//             for (j = n - i; j >= 1; j--) {
//                 printf(" ");
//             }

//             for (k = 1; k <= s; k++) {
//                 printf("*");
//             }

//             s += 2; 
//             printf("\n");
//         }

        
//         s = s - 4;
        
    
//         for (i = n - 1; i >= 1; i--) {
//             for (j = 1; j <= n-i; j++) {
//                 printf(" ");
//             }

//             for (k = 1; k <= s; k++) {
//                 printf("*");
//             }

//             s -= 2;
//             printf("\n");
//         }
  
//     }

//     return 0;
// }
//*****************************************************************************
////question8 butterfly pattern
// #include<stdio.h>

// int main() {
//     int n, i, j, k;
  

//     printf("Enter a number N: ");
//     scanf("%d", &n);


  
//         for (i = 1; i <= n; i++) {
//             for (j = 1; j<=i; j++) {
//                 printf("*");
//             }

//             for (k = 1; k <= 2*(n-i); k++) {
//                 printf(" ");
//             }
//             for (int l = 1; l <= i; l++) {
//                 printf("*");
//         }
//         printf("\n");
//         }


//         for (i = n-1; i >= 1; i--) {
//             for (j = 1; j<=i; j++) {
//                 printf("*");
//             }

//             for (k = 1; k <= 2*(n-i); k++) {
//                 printf(" ");
//             }
//             for (int l = 1; l <= i; l++) {
//                 printf("*");
//         }
//         printf("\n");
//         }
        

        


//     return 0;
// }
//*****************************************************************
// //queston9 holo pattern print tringle
// #include<stdio.h>
// int main(){
//   int i, j, n;
//   printf("enter number N:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//   for(j=1; j<=i; j++){
//   if(j==1 || i==j || i==n  ){
//     printf("*");
//   }
//  else{ printf(" ");
// }
//   }


 
//  printf("\n");
// }
// return 0;
// }
///queston10 holo pattern print tringle
// #include<stdio.h>
// int main(){
//   int i, j, n;
//   printf("enter number N:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//   for(j=n; j>=1; j--){
//   if(j==1 || i==j || i==n  ){
//     printf("*");
//   }
//  else{ printf(" ");
// }
//   }


 
//  printf("\n");
// }
// return 0;
// }
//***********************************************
// //question11: holo tringle print 
// #include<stdio.h>
// int main(){
//   int i, j, n;
//   printf("enter number N:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//   for(j=n; j>=i; j--){
//   if( i==1||j==n || i==j || i==n  ){
//     printf("*");
//   }
//  else{ printf(" ");
// }
//   }


 
//  printf("\n");
// }
// return 0;
// }
//************************************************************
//question12: holo tringle print 
// #include<stdio.h>

// int main() {
//     int i, j, n;

//     printf("Enter number N: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             if (i == 1 || j == 1 || j == n || i == n) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
//******************************************************************************
//question13 :half diomond pattern holo
// #include<stdio.h>

// int main() {
//     int n, i, j, k;
    

//     printf("Enter a number N: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) { 
//         for (j = n - i; j >= 1; j--) {
//             printf(" ");
//         }

//         for (k = 1; k <= (2 * i - 1); k++) {
//             if (k == 1 || k == (2 * i - 1) || i == n) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }
//********************************************************************
//question14 complete diomond pattern
// #include<stdio.h>

// int main() {
//     int n, i, j, k;

//     printf("Enter a number N: ");
//     scanf("%d", &n);

    
//     for (i = 1; i <= n; i++) {
//         for (j = n - i; j >= 1; j--) {
//             printf(" ");
//         }

//         for (k = 1; k <= (2 * i - 1); k++) {
//             if (k == 1 || k == (2 * i - 1)) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }

//         printf("\n");
//     }

    
//     int s = 2 * (n - 1) - 1;
//     for (i = n - 1; i >= 1; i--) {
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         for (k = 1; k <= s; k++) {
//             if (k == 1 || k == s || i == 1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }

//         s -= 2;
//         printf("\n");
//     }

//     return 0;
// }
//***********************************************************************
//number pattern :
//question15:
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter numberN:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//     for(j=n; j>=1; j--){
//       printf("%d", j);
//     } 
  
//   printf("\n");
//   }
//   return 0;
// }
//****************************************************
//1
//12
//123
//question16:
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter numberN:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//       printf("%d", j);
//     } 
  
//   printf("\n");
//   }
//   return 0;
// }
//************************************************
//1234
//1234
//1234
//question17:
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter numberN:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//     for(j=1; j<=n; j++){
//       printf("%d", j);
//     } 
  
//   printf("\n");
//   }
//   return 0;
// }
//********************************************************************
//6) N=5
//1
//121
//12321
//1234321
//123454321
//question18:
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   printf("enter numberN:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//       printf("%d", j);
//     } 
//     for(int k=i-1; k>=1; k--){
//       printf("%d", k);
//     }
//   printf("\n");
//   }
//   return 0;
// }
//*****************************************************
//1
//23
//456
//78910
//question19:
// #include<stdio.h>
// int main(){
//   int n, i, j;
//   int c=0;
//   printf("enter numberN:");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//       c+=1;
//       printf("%d", c);
//     } 
    
    
//   printf("\n");
//   }
//   return 0;
// }
//************************************************************
//question20:
//5) N=4
//2
//2 4
//2 4 8
//2 4 8 16// 
// #include<stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         int num = 2;  

//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num *= 2;  
//         }

//         printf("\n");
//     }

//     return 0;
// }
//*****************************************************
//question21:
//5) N=4
//0
//2 4
//4 8 8
//8 16 16 16
//*************************************************************
// #include<stdio.h>wrong question
// #include<math.h>
// int main(){
//   int n,i,j,r;
//   int count=0;
//   int count1=0;
//   printf("enter number:N");
//   scanf("%d", &n);
//   for(i=1; i<=n; i++){
//     for(j=1; j<=i; j++){
//       if(j==1){
//         printf("%d",count);
//       }else{
//         r=pow(2,count);
//       }
//     }
//       count1=pow(2, i);
//       count1++;
// printf("\n");
//     }

// int n,p=0,r=0;
// printf("Enter the number:");
// scanf("%d",&n);

// for(int i=1;i<=n;i++){
//   for(int j=1;j<=i; j++){
//     if(j==1){
//       printf("%d",p);
//     }else{
//       r=pow(2,i);
//       printf("%d",r);
//     }
//   }
//   p=pow(2,i);
//   printf("\n");
// }

//   return 0;
// }
//**************************************************************
//question22:
//prime number check
// #include<stdio.h>
// int main(){
//   int n, i;
//   printf("enter numberN:");
//   scanf("%d",&n);
//   int c=0;
//   for(i=1; i<=n; i++){
//     if(n%i==0){
//       c++;
//     } 
//   }
//   if(c==2){
//     printf("primenumber\n");
//   }else{
//     printf("not prime");
//   }
//   return 0;
// }
//********************************************************************
//question23: range prime number:
// #include<stdio.h>

// int main() {
//   int m, n;
//   printf("Enter two numbers: ");
//   scanf("%d%d", &m, &n);

//   if (m < n) {
//     for (int m; m <= n; m++) {
//       int c = 0;

//       for (int i = 1; i <= m; i++) {
//         if (m % i == 0) {
//           c++;
//         }
//       }

//       if (c == 2) {
//         printf("%d\n", m);
//       }
    
//     }
    
//     return 0;1
//   }
// }
//************************************************
//question24:check palindrome number:
// #include<stdio.h>

// int main() {
//   int n, original, reverse = 0;

//   printf("Enter a number: ");
//   scanf("%d", &n);

//   original = n; 

//   while (n != 0) {
//     int digit = n % 10;
//     reverse = reverse * 10 + digit;
//     n = n / 10;
//   }

//   if (original == reverse) {
//     printf("Palindrome\n");
//   } else {
//     printf("Not a Palindrome\n");
//   }

//   return 0;
// }
//***********************************************************
//question25: palindrome range
// #include<stdio.h>

// int main() {
//   int n, m, reverse = 0;
  

//   printf("Enter two numbers: ");
//   scanf("%d%d", &m, &n);

//   if (m < n) {
//     for (int num = m; num <= n; num++) {
//       int temp = num; 

//       while (temp != 0) {
//         int digit = temp % 10;
//         reverse = reverse * 10 + digit;
//         temp = temp / 10;
//       }

//       if (num == reverse) {
//         printf("%d is a Palindrome\n", num);
//       }

    
//     }
  
    
    
//   }

//   return 0;
// }
//************************************************
//question26:armstrong number check
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, original, remainder, result = 0, n = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     original = num;

  
//     while (original != 0) {
//         original /= 10;
//         ++n;
//     }

//     original = num;

    
//     while (original != 0) {
//         remainder = original % 10;
//         result += pow(remainder, n);
//         original /= 10;
//     }

    
//     if (result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }
//********************************************
//question 26:hcf find

// #include<stdio.h>
// int main(){
//   int a,b;
//   printf("enter two number:");
//   scanf("%d%d", &a, &b);
//   if(a<b){
//     for(int i=1; i<=a; i++){
//       if(a%i==0  && b%i==0){
//         printf("hcf is %d", i);
//       }
//     }

//   }
//   return 0;
// }
//*****************************************
//question 27:max check
// #include<stdio.h>
// int main(){
//   int n= 8,a;
  
// int max=0;
// printf("Enter the number:");

// scanf("%d",&n);
//  for(int i=1; i<=n; i++){
//   printf("Enter Number:%d\n",i);
//   scanf("%d",&a);

//   if(a>max){
//     max=a;
//   }else{
//     max=max;
//   }
//  }
//  printf("%d",max);
// return 0;
// }
//******************************************************************
//question28 check second max:
// #include<stdio.h>
// int main(){
//   int n= 8,a;
  
// int max=0;
// int smax=0;
// printf("Enter the number:");

// scanf("%d",&n);
//  for(int i=1; i<=n; i++){
//   printf("Enter Number:%d\n",i);
//   scanf("%d",&a);

//   if(a>max){
    
//     max=a;
//     smax=max;
//   //}else if(a<max){
//     //smax=a;
  
//   }
//  }
//  printf("%d",smax);
// return 0;
// }
