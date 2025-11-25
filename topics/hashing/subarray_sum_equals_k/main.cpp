/**
    Problem: Subarray Sum Equals K

    Problem Statement: 

    You are given an integer array nums of length n and an integer k. Your task is to count the total 
    number of contiguous subarrays whose sum equals k.

    A subarray must consist of consecutive elements from the array.

    Formally, determine how many subarrays nums[i..j] satisfy:
        sum(nums[i..j]) == k

    Input:
        - An integer array nums of length n (n ≥ 1).
        - An integer k.

    Output:
        - An integer representing the total number of contiguous subarrays whose sum equals k.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - -10^5 ≤ nums[i] ≤ 10^5
        - -10^7 ≤ k ≤ 10^7

    Target Time Complexity: O(n)
    Target Extra Space: O(n)   // for the prefix sum hash map
**/