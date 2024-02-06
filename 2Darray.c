// qustion 1 2d arrau input and display:
// #include<stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     int matrix[rows][cols];

  
//     printf("Enter elements of the 2D array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// // 
//     printf("The 2D array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n"); 
//     }

//     return 0;
// }

//********************************
//question 2
//Write a program to add two matrices and store them in a separate matrix.
// #include<stdio.h>

// int main() {
//     int rows, cols;
// int rows1, cols1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     printf("Enter the number of rows1: ");
//     scanf("%d", &rows1);

//     printf("Enter the number of columns1: ");
//     scanf("%d", &cols1);

//     int matrix1[rows][cols];
//     int matrix2[rows1][cols1];

  
//     printf("Enter elements of the first 2d array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }
//     printf("Enter elements of the second 2d array:\n");
//     for (int i = 0; i < rows; i++) {
        
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

// for(int i=0; i<rows; i++){
//     // sum=0;
//     for(int j=0; j<cols; j++){
        
//         matrix1[i][j]=matrix1[i][j]+matrix2[i][j];
//     }
// }  
//     printf("The 2D array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix1[i][j]);
//         }
//         printf("\n"); 
//     }

//     return 0;
// }
//*****************************
//question3:
//Write a program to subtract two matrices and store them in a separate matrix.
// #include<stdio.h>

// int main() {
//     int rows, cols;
// int rows1, cols1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
//     printf("Enter the number of rows1: ");
//     scanf("%d", &rows1);

//     printf("Enter the number of columns1: ");
//     scanf("%d", &cols1);

//     int matrix1[rows][cols];
//     int matrix2[rows1][cols1];

  
//     printf("Enter elements of the first 2d array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }
//     printf("Enter elements of the second 2d array:\n");
//     for (int i = 0; i < rows; i++) {
        
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

// for(int i=0; i<rows; i++){
//     // sum=0;
//     for(int j=0; j<cols; j++){
        
//         matrix1[i][j]=matrix1[i][j]-matrix2[i][j];
//     }
// }  
//     printf("The 2D array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix1[i][j]);
//         }
//         printf("\n"); 
//     }

//     return 0;
// }
//***************************************
//question 4
//Write a program to transpose matrix A. Store the result in a separate matrix.
// #include<stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     int matrix[rows][cols];

  
//     printf("Enter elements of the 2D array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

  
    // printf("The 2D array is:\n");
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         printf("%d ", matrix[j][i]);
    //     }
//         printf("\n"); 
//     }

//     return 0;
// }
//*******************************
//question 5:
//Write a program to find the minimum element in the matrix.
// #include<stdio.h>
// #include<math.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     int matrix[rows][cols];

  
//     printf("Enter elements of the 2D array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d",&matrix[i][j]);

//         }
//     }

//   int minelement=pow(2,32);

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols-1; j++) {
//             if(matrix[i][j]<minelement){
//                 minelement=matrix[i][j];
//             }else{
//                 minelement=minelement;
// break;
//             }
//                   }
        
//     }
// printf("minelement%d\n",minelement);
  
//     return 0;
// }
//********************************************88888888
// //question6:matrix rotate clockwise 90degree

// #include<stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     int matrix[rows][cols];

  
//     printf("Enter elements of the 2D array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// printf("rotate clockwise 90degree:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = cols-1; j >= 0; j--) {
//             printf("%d ", matrix[j][i]);
//         }
  
    
        
    
//         printf("\n"); 
//     } 
//     return 0;
// }
//***************************************
// question7:matrix rotate anticlockwise 90degree

// #include<stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     int matrix[rows][cols];

  
//     printf("Enter elements of the 2D array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// printf("rotate anti clockwise 90degree:\n");
//     for (int i = rows-1; i >= 0; i--) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[j][i]);
//         }
  
    
        
    
//         printf("\n"); 
//     } 
//     return 0;
// }
//********************************
//question 8: print spiral pattern 
// #include <stdio.h>


// int main() {
//   printf("enter numberN:");
    
  
//     int n;
//     scanf("%d",&n);
//     int matrix[n][n];
//     int value = 1;
//     int minRow = 0, minCol = 0;
//     int maxRow = n - 1, maxCol = n - 1;


//     while (value <= n * n) {
//         for (int i = minCol; i <= maxCol; i++) {
//             matrix[minRow][i] = value++;
//         }
//         minRow++;

//         for (int i = minRow; i <= maxRow; i++) {
//             matrix[i][maxCol] = value++;
//         }
//         maxCol--;

//         for (int i = maxCol; i >= minCol; i--) {
//             matrix[maxRow][i] = value++;
//         }
//         maxRow--;

//         for (int i = maxRow; i >= minRow; i--) {
//             matrix[i][minCol] = value++;
//         }
//         minCol++;
//     }

//     // Printing the spiral pattern
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%2d ", matrix[i][j]);
//         }
//         printf("\n");
//     }



//     return 0;
// }
//**************************************************88
//question 9:check magic squar matrix:

// #include<stdio.h>

// int main() {
//     int rows, cols;
//     printf("enter rows number:");
//     scanf("%d", &rows);
//     printf("enter cols number:");
//     scanf("%d", &cols);

//     int matrix[rows][cols];

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int csum,rCount=0,cCount=0,diCount=0,di2Count=0;
//     printf("enter csum:");
//     scanf("%d", &csum);

//     // Check row sums
//     for (int i = 0; i < rows; i++) {
//         int rsum = 0;
//         for (int j = 0; j < cols; j++) {
//             rsum += matrix[i][j];
//         }
//         if (rsum == csum) {
            
//             rCount++;

//         }
//     }

//     // Check column sums
//     for (int i = 0; i < cols; i++) {
//         int colsum = 0;
//         for (int j = 0; j < rows; j++) {
//             colsum += matrix[j][i];
//         }
//         if (colsum == csum) {
            
//             cCount++;
//         }
//     }

//     // Check diagonal sums
//     int d1sum = 0, d2sum = 0;
//     for (int i = 0; i < rows; i++) {
//         d1sum += matrix[i][i];
//         d2sum += matrix[i][cols - 1 - i];
//     }

//     if (d1sum == csum) {

//         diCount++;
//     }

//     if (d2sum == csum) {
        
//         di2Count++;
//     }


//   if(rCount==cCount && di2Count==diCount){
//     printf("Its is a magic square");
//   }else{
//     printf("Its not a magic square");
//   }
//     return 0;
// }
