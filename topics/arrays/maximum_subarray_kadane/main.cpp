/**
    Problem: Maximum Subarray (Kadane's Algorithm)

    Problem Statement: 

    You are given an integer array nums of length n. Your task is to find the contiguous subarray 
    (containing at least one element) that has the largest possible sum, and return that sum.

    A subarray must consist of consecutive elements from the array, and you must choose at least one element.

    Formally, among all possible subarrays nums[i..j], find the one with the highest sum and return that sum.

    Input: An integer array nums of length n (n ≥ 1). Values may be positive, zero, or negative.
    Output: A single integer representing the maximum possible sum of any contiguous subarray.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - -10^5 ≤ nums[i] ≤ 10^5

    Target Time Complexity: O(n)     // Kadane's Algorithm
    Target Extra Space: O(1)
**/