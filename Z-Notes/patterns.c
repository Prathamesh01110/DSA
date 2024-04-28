// #include <stdio.h>
// int main() {
//     int n, i, j, num = 1, space;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(space = 1; space <= n - i; space++)  printf(" ");
//         for(j = i; j <= 2 * i - 1; j++) printf("%d", j);
//         for(j = 2 * i - 2; j >= i; j--) printf("%d", j);
//         printf("\n");
//     }
//     return 0;
// }
// Enter the number of rows: 8
//        1
//       232
//      34543
//     4567654
//    567898765



// for(int j=0;j<i+1;j++) printf("  ");
// for(int j=n-i; j>0 ; j--)  printf("* ");
//   * * * * * 
//     * * * * 
//       * * * 
//         * * 
//           * 

// for(int j=0;j<i+1;j++)   printf(" ");
// for(int j=n-i ; j>0  ; j--)   printf("* ");
//     * * * * * 
//      * * * * 
//       * * * 
//        * * 
//         * 

// for(int j=n-i;j>0;j--)  printf(" ");
// for(int j=0 ; j<i+1  ; j++)   printf("* ");
//      * 
//     * * 
//    * * * 
//   * * * * 

// for (int j = 0; j <= i; j++) printf("%c", ch + j);
// A
// AB
// ABC
// ABCD

// this one is little fucked up skip this one for now
// for (int k = n - i; k > 0; k--) printf(" ");
// for (int j = 0, ok=-1 ; ok<i, j <= i ; ok++, j++){ 
//     if(j==0){
//         printf("1");
//         continue;
//     }
//     printf("%d%c",j+1, ch + ok);
//     }
//    1
//   12A
//  12A3B
// 12A3B4C

//fibonaci working till 10 numbers
// #include <stdio.h>
// int fibo(int n) {
//     if (n <= 1) return n;
//     return fibo(n - 1) + fibo(n - 2);
// }
// int main() {
//     int n;
//     printf("Enter the position in Fibonacci sequence: ");
//     scanf("%d", &n);
//     int arr[10];
//     for (int i = 0; i < n; i++)  arr[i] = fibo(i);
    
//     for(int i = 0; i < n; i++)  printf("%d ", arr[i]);
//     printf("\n");
//     return 0;
// }
// // memoization solution wrong till 100000 numbers
// #include <stdio.h>
// int fibo(int n, int memo[]) {
//     if (n <= 1) return n;
//     if (memo[n] != -1)  return memo[n];
//     memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);
//     return memo[n];
// }
// int main() {
//     int n;
//     printf("Enter the position in Fibonacci sequence: ");
//     scanf("%d", &n);
//     int memo[n + 1];
//     for (int i = 0; i <= n; i++) memo[i] = -1; 
//     for (int i = 0; i < n; i++)  printf("%d ", fibo(i, memo));
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         printf("*");
//     }
//     printf("\n");
// }
// }
// ****
// ***
// **
// *

// perfect number
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) sum += i;
//     }
//     if (sum == n) printf("%d is a perfect number\n", n);
//     else printf("%d is not a perfect number\n", n);
//     return 0;
// }

// #include <stdio.h>
// // Recursive function to calculate nCr
// int nCr(int n, int r) {
//     // Base cases
//     if (r == 0 || r == n) {
//         return 1;
//     }
//     // Recursive calls
//     return nCr(n - 1, r - 1) + nCr(n - 1, r);
// }
// int main() {
//     int n, r;
//     printf("Enter the values of n and r (nCr): ");
//     scanf("%d %d", &n, &r);
//     // Check if r is valid (0 <= r <= n)
//     if (r < 0 || r > n) {
//         printf("Invalid input: r must be between 0 and n.\n");
//         return 1;
//     }
//     // Calculate and print nCr
//     printf("%dC%d = %d\n", n, r, nCr(n, r));
//     return 0;
// }

// sum of digits
// #include <stdio.h>
// int main(){
//     int n,sum=0,r;
//     printf("Enter the Number: ");
//     scanf("%d", &n);
//     while(n!=0){
//         r=n%10;
//         sum+=r;
//         n=n/10;
//     }
//     printf("Sum of the digits: %d\n", sum);
// }
// Enter the Number: 156
// Sum of the digits: 12
