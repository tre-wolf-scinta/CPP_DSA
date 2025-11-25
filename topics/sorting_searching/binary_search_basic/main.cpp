/**
    Problem: Binary Search (Basic)

    Problem Statement: 

    You are given a sorted integer array nums of length n and an integer target. The array is sorted in 
    non-decreasing order.

    Your task is to determine whether target exists in nums. If it exists, return its index; otherwise, 
    return -1.

    You must implement the search using the binary search algorithm.

    Input: 
        - A sorted integer array nums of length n (n ≥ 0), in non-decreasing order.
        - An integer target.

    Output: 
        - An integer index i such that nums[i] == target, or -1 if target is not present.

    Constraints:
        - 0 ≤ n ≤ 100,000
        - -10^9 ≤ nums[i] ≤ 10^9
        - -10^9 ≤ target ≤ 10^9

    Target Time Complexity: O(log n)
    Target Extra Space: O(1)
**/