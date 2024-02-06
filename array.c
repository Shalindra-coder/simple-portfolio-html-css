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


//**********************************************************
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
  //#include <stdio.h>

// int main() {
//     int N;

//     printf("Enter the number of elements: ");
//     scanf("%d", &N);

    
//     int arr[N];

    

//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }

  
  
//     for (int i = 0; i < N; i++) {
//         int count = 1;

      
//         if (arr[i] != 0) {
//             for (int j = i + 1; j < N; j++) {
//                 if (arr[i] == arr[j]) {
//                     count++;
                
//                     arr[j]=0;
//                 }
//             }

  
//             printf("%d occurs %d times\n", arr[i], count);
//         }
//     }

//     return 0;
// }

    //**********************************************
//question22:
    //rotatio number 
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int r;
//     printf("Enter the number of rotations: ");
//     scanf("%d", &r);

//     for (int j = 1; j <= r; j++) {
    
//         int temp = arr[0]; 

//         for (int i = 0; i < n - 1; i++) {
//             arr[i] = arr[i + 1];
//         }

//         arr[n - 1] = temp; 

    
        
//         for (int i = 0; i < n; i++) {
//             printf("rotate number %d\n", arr[i]);
//         }
//     }

//     return 0;
// }
//*******************************************************************
//quesiont23:
//Write a program to take a binary array which contains 0 and 1, and print the maximum number of consecutive 1's in the array.
//Test Case 6:
//Testcase
//Input: 3 1:
//Input:
//Output:
//1
//110111
//Output:
//121
//133 3 1
//Explanation:
//The
//Test first
//Casetwo
//7: digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// #include<stdio.h>

// int main() {
//     char n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements:\n", n);
    
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int count = 0;
  
//     int maxone = 0;  

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 1) {
//             count++;
//            if (count > maxone) {
//                maxone = count;
//            }
//        } else {
//            count = 0;  
//         }
//     }

   // printf("Maximum consecutive ones: %d\n", maxone);

//return 0;
//}
//********************************************8
//question24:
//Write
// program
// to take two sorted arrays of size M, N from the user as input and merge them into a single sorted array of size M+N (Do
// 1 5 10a10
// 51
// not
// use20sorting)
// 1 6 15
// 15 6 1
// 1 7 21 35 35 21 7 1
// Test
// Case1:
// 1 8 28
// 56 70 56 28 8 1
// Input:
// 1
// 2 5Case
// 6 8:
// Test
// 3
// 4 7 95
// Input:
// Out{put:
// 12345679
//**********************
// #include <stdio.h>

// int main() {
//     int M, N;


//     printf("Enter the size of the first array (M): ");
//     scanf("%d", &M);

//     printf("Enter the size of the second array (N): ");
//     scanf("%d", &N);

    
//     int arr1[M], arr2[N], mergedArr[M + N];

    
//     printf("Enter the elements of the first array (in sorted order):\n");
//     for (int i = 0; i < M; i++) {
//         scanf("%d", &arr1[i]);
//     }

    
//     printf("Enter the elements of the second array (in sorted order):\n");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr2[i]);
//     }

    
//     int i = 0, j = 0, k = 0;
//     while (i < M && j < N) {
//         if (arr1[i] <= arr2[j]) {
//             mergedArr[k] = arr1[i];
//             i++;
//         } else {
//             mergedArr[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }

  
//     while (i < M) {
//         mergedArr[k] = arr1[i];
//         i++;
//         k++;
//     }


//     while (j < N) {
//         mergedArr[k] = arr2[j];
//         j++;
//         k++;
//     }

    

//     for (int i = 0; i < M + N; i++) {
//         printf("%d ", mergedArr[i]);
//     }

//     return 0;
// }
//********************************
//qiestion 25:
// #include <stdio.h>

// int main() {
//     int m, n;

  
//     printf("Enter the size of the first array (m): ");
//     scanf("%d", &m);

    
//     printf("Enter the size of the second array (n): ");
//     scanf("%d", &n);

//     int arr1[m];
//     int arr2[n];
//     int arr3[m + n];

    
//     printf("Enter elements for the first array:\n");
//     for (int i = 0; i < m; i++) {
//         scanf("%d", &arr1[i]);
//     }


//     printf("Enter elements for the second array:\n");
//     for (int j = 0; j < n; j++) {
//         scanf("%d", &arr2[j]);
//     }

//     int i = 0, j = 0, k = 0;

    
//     while (i < m && j < n) {
//         if (arr1[i] <= arr2[j]) {
//             arr3[k++] = arr1[i++];
//         } else {
//             arr3[k++] = arr2[j++];
//         }
//     }

//     int count=0;
//     int sum=0;
//     for(int k=0; k<m+n; k++){
//       sum=sum+arr3[k];
//       count++;
//     }
// int median;
// median=sum/count;
// printf("median %d\n", median);
    
//     return 0;
// }
//*********************************************
//question 26:
//Write a program to take two sorted arrays from the user as input and find the Union and Intersection of the arrays.
//Test Case1:
//Input:
//13457
//2356
//Output:
//1234567
//35

// #include <stdio.h>

// int main() {
//     int m, n;

//     // Input sizes of the arrays
//     printf("Enter the size of the first array: ");
//     scanf("%d", &m);

//     printf("Enter the size of the second array: ");
//     scanf("%d", &n);

//     int arr1[m];
//     int arr2[n];

//     // Input elements of the first array
//     printf("Enter elements of the first array (sorted): ");
//     for (int i = 0; i < m; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     // Input elements of the second array
//     printf("Enter elements of the second array (sorted): ");
//     for (int j = 0; j < n; j++) {
//         scanf("%d", &arr2[j]);
//     }

//     // Find Union
//     printf("Union of the arrays: ");
//     int i = 0, j = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j]) {
//             printf("%d ", arr1[i++]);
//         } else if (arr1[i] > arr2[j]) {
//             printf("%d ", arr2[j++]);
//         } else {
//             printf("%d ", arr1[i++]);
//             j++;
//         }
//     }

    
//     printf("\n");

//     // Find Intersection
//     printf("Intersection of the arrays: ");
//     i = 0;
//     j = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j]) {
//             i++;
//         } else if (arr1[i] > arr2[j]) {
//             j++;
//         } else {
//             printf("%d ", arr1[i]);
//             i++;
//             j++;
//         }
//     }

//     printf("\n");

//     return 0;
// }
//***********************************************
//qustion 27
//Write a program to take an unsorted array of size N that contains only non-negative integers, and find a contiguous subarray that adds to
//a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right. Let us say the array is
//3, 6, 7, 5, 10. And the value of S = 12. The output should be: 7, 5
// #include<stdio.h>

// int main() {
//     int n; 
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     printf("Enter elements of the array:\n");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int s;
//     printf("Enter the target sum: ");
//     scanf("%d", &s);

//     int found = 0; 
    
//     printf("Pairs with sum %d are:\n", s);
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(s == arr[i] + arr[j]) {
//                 printf("(%d, %d)\n", arr[i], arr[j]);
//                 found = 1;
//             }
//         }
//     }

//     if (!found) {
//         printf("No elements found with the given sum.\n");
//     }

//     return 0;
// }
//**********************************
//question28:
//Take N numbers from the user as input and print them in an ascending order.
//Use the following algorithms to sort the array -
//Selection Sort
//Insertion Sort
//Bubble Sort
//*selection sort
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     printf("Enter elements of the array:\n");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }


//     for(int i = 0; i < n-1; i++) {
//         int minIndex = i;

//         for(int j = i+1; j < n; j++) {
//             if(arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

    
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }

//     printf("Sorted array:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
//buble sort
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter elements of the array:\n");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
        
//             if(arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

    
//     printf("Sorted array:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
//inserstionn sort
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter elements of the array:\n");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
    
//     for(int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }

    
//     printf("Sorted array:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
//******************************
//qustion 29
//binary search algorithm
#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the sorted array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int found = -1;

    // Perform binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target) {
            found = mid;
            break;
        }

        // If the target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }

        // If the target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Display the result
    if (found != -1) {
        printf("Element %d is present at index %d.\n", target, found);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
