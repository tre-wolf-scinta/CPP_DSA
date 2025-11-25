/**
    Problem: House Robber

    Problem Statement: 

    You are given an integer array nums of length n where nums[i] represents the amount of money 
    stashed in the i-th house on a street.

    Adjacent houses are protected by a security system that triggers an alarm if two directly adjacent 
    houses are robbed on the same night.

    Your task is to determine the maximum amount of money you can rob tonight without robbing any 
    two adjacent houses.

    Input:
        - An integer array nums of length n (n ≥ 0), where nums[i] ≥ 0 represents the money in house i.

    Output:
        - An integer representing the maximum amount of money that can be robbed without triggering the alarm.

    Constraints:
        - 0 ≤ n ≤ 100,000
        - 0 ≤ nums[i] ≤ 10^9

    Target Time Complexity: O(n)
    Target Extra Space:
        - O(1)   // if you only store a constant number of DP states (e.g., previous two values)
**/