/**
    Problem: Two Sum

    Problem Statement: 

    You are given an integer array nums of length n and an integer target. Your task is to find two distinct
    indices i and j (i != j) such that nums[i] + nums[j] == target, and return those indices.

    You may assume that exactly one valid solution exists, and you may not use the same element twice.

    The order of the returned indices does not matter.

    Input: 
        - An integer array nums of length n (n ≥ 2).
        - An integer target.

    Output: 
        - A pair of integers representing indices i and j such that nums[i] + nums[j] == target.

    Constraints:
        - 2 ≤ n ≤ 100,000
        - -10^9 ≤ nums[i] ≤ 10^9
        - -10^9 ≤ target ≤ 10^9
        - Exactly one solution exists.

    Target Time Complexity: O(n)
    Target Extra Space: O(n)   // for the hash map
**/