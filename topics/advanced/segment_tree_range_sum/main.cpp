/**
    Problem: Segment Tree Range Sum

    Problem Statement: 

    You are given an integer array nums of length n. You must design a data structure that supports
    the following operations efficiently:

        - build(nums): Construct the data structure from the initial array.
        - sumRange(left, right): Return the sum of the elements nums[left..right] (inclusive).
        - update(index, value): Update nums[index] to value.

    Implement this data structure using a segment tree so that both range sum queries and point
    updates are efficient.

    Input:
        - An integer array nums of length n (n ≥ 1).
        - A sequence of operations:
            - "sumRange left right"
            - "update index value"

    Output:
        - For each "sumRange" operation, output the sum of nums[left..right] after applying all 
          previous updates.
        - "update" operations do not directly produce output.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - -10^9 ≤ nums[i] ≤ 10^9
        - 1 ≤ number of operations ≤ 100,000
        - 0 ≤ left ≤ right < n
        - 0 ≤ index < n

    Target Time Complexity:
        - build(nums): O(n)
        - sumRange(left, right): O(log n)
        - update(index, value): O(log n)

    Target Extra Space:
        - O(n)   // for the segment tree storage
**/