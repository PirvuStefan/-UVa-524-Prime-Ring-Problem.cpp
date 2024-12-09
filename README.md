# UVA-524-Prime-ring

This C++ program generates all circular permutations of integers rangin from 1 to n
The sum of every two adjacent integers in the permutation is a prime number.
The sequence is circular, meaning the last number in the sequence also connects back to the first number, and their sum is also prime.
The code uses a backtracking algorithm to explore all valid permutations efficiently.

# Approach

The first number of the permutation needs to always be 1, so right now we are not getting TLE.
Function prime to return if a sum of 2 nodes is prime
Implementation of the permutation algorithm of the index 1, since x[0] will always be 1.
Additional test in the Ok() function to test if every node sum stays a prime number.
