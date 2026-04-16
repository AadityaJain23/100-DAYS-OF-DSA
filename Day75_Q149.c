/* Problem Statement
Given an array of integers containing both positive and negative values, find the length of the longest contiguous subarray whose sum is equal to zero.

Input Format
An integer array arr[].

Output Format
Print the length of the longest subarray with sum equal to zero.

Sample Input
15 -2 2 -8 1 7 10 23

Sample Output
5

Explanation
The subarray [-2, 2, -8, 1, 7] has a sum of 0 and is the longest such subarray.
*/

#include <stdio.h>
#include <stdlib.h>

int maxLen(int arr[], int n) {
    int maxLen = 0;
    int sum = 0;

    int hash[200001];
    
    for (int i = 0; i < 200001; i++) {
        hash[i] = -2; 
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == 0) {
            maxLen = i + 1;
        }

        int idx = sum + 100000;

        if (hash[idx] != -2) {
            int length = i - hash[idx];
            if (length > maxLen)
                maxLen = length;
        } else {
            hash[idx] = i; 
        }
    }

    return maxLen;
}

int main() {
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", maxLen(arr, n));
    return 0;
}