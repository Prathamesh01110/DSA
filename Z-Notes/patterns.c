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
//     return 0;
// }
// // memo solution
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


