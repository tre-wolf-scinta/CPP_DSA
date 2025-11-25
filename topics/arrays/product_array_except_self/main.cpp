/**
    Problem: Product of Array Except Self

    Problem Statement: 

    You are given an integer array nums of length n. Your task is to return a new array answer where 
    answer[i] is equal to the product of all the elements of nums except nums[i].

    You must compute the result without using division, and in O(n) time.

    Formally, for each index i, compute:
        answer[i] = product(nums[0..i-1]) * product(nums[i+1..n-1])

    Input: An integer array nums of length n (n ≥ 2).
    Output: An integer array answer of length n where answer[i] is the product of all nums[j] for j ≠ i.

    Constraints:
        - 2 ≤ n ≤ 100,000
        - -30 ≤ nums[i] ≤ 30
        - The product of all elements will fit in a 32-bit integer

    Target Time Complexity: O(n)
    Target Extra Space: O(1)   // excluding the output array
**/