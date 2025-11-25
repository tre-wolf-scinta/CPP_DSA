/**
    Problem: Search in Rotated Sorted Array

    Problem Statement: 

    You are given an integer array nums of length n that was originally sorted in strictly increasing order, 
    then rotated at an unknown pivot index k (0 ≤ k < n). The resulting array is:
        nums = [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]

    You are also given an integer target. Your task is to determine whether target exists in nums. 
    If it exists, return its index; otherwise, return -1.

    The array contains distinct integers.

    Input:
        - An integer array nums of length n (n ≥ 0), which is a rotated version of a strictly 
          increasing sorted array.
        - An integer target.

    Output:
        - An integer index i such that nums[i] == target, or -1 if target is not present.

    Constraints:
        - 0 ≤ n ≤ 100,000
        - -10^9 ≤ nums[i] ≤ 10^9
        - -10^9 ≤ target ≤ 10^9
        - All elements in nums are distinct.

    Target Time Complexity: O(log n)
    Target Extra Space: O(1)
**/