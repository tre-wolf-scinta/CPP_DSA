/**
    Problem: Kth Largest Element in an Array

    Problem Statement: 

    You are given an integer array nums of length n and an integer k. Your task is to find the kth largest 
    element in the array.

    Note that "kth largest" refers to the element that would appear in sorted order if the array were sorted 
    in non-increasing (descending) order. For example, k = 1 returns the maximum element, k = 2 the second largest, etc.

    Input:
        - An integer array nums of length n (n ≥ 1).
        - An integer k (1 ≤ k ≤ n).

    Output:
        - An integer representing the kth largest element in nums.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - -10^9 ≤ nums[i] ≤ 10^9
        - 1 ≤ k ≤ n

    Target Time Complexity:
        - O(n log k) using a size-k min-heap (priority queue),
          or O(n) average using Quickselect.

    Target Extra Space:
        - O(k) for the heap-based approach,
          or O(1) for in-place Quickselect (excluding recursion stack).
**/