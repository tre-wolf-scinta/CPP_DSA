/**
    Problem: Single Number

    Problem Statement: 

    You are given an integer array nums of length n where every element appears exactly twice except for 
    one element which appears only once.

    Your task is to find and return the element that appears exactly once.

    You must implement a solution using bit manipulation to achieve linear time and constant extra space.

    Input:
        - An integer array nums of length n (n ≥ 1), where all elements but one appear twice.

    Output:
        - An integer representing the single element that appears exactly once.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - -10^9 ≤ nums[i] ≤ 10^9

    Target Time Complexity: O(n)
        // XOR accumulates pairs to zero and leaves the unique element

    Target Extra Space: O(1)
**/