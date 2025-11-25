/**
    Problem: Non-overlapping Intervals

    Problem Statement: 

    You are given an array intervals where intervals[i] = [start_i, end_i] represents a closed interval 
    on the real line.

    Your task is to determine the minimum number of intervals you must remove from intervals so that 
    the remaining intervals are non-overlapping.

    Two intervals [a, b] and [c, d] are considered overlapping if their intersection is non-empty 
    (i.e., they share any common points in time).

    Input:
        - An array intervals of length n (n ≥ 0), where each element is a pair [start_i, end_i] with 
          start_i < end_i.

    Output:
        - An integer representing the minimum number of intervals you must remove so that the remaining 
          intervals are non-overlapping.

    Constraints:
        - 0 ≤ n ≤ 100,000
        - -10^9 ≤ start_i < end_i ≤ 10^9

    Target Time Complexity: O(n log n)
        // due to sorting by end time for the greedy selection

    Target Extra Space: O(1)
        // or O(n) if you store a sorted copy of the intervals
**/