/**
    Problem: Valid Parentheses

    Problem Statement: 

    You are given a string s consisting of characters '(', ')', '{', '}', '[' and ']'.

    Your task is to determine whether the input string is a valid parentheses sequence.

    A string is considered valid if:
        - Open brackets are closed by the same type of brackets.
        - Open brackets are closed in the correct order.
        - Every closing bracket has a corresponding previous unmatched opening bracket.

    Input:
        - A string s of length n (n ≥ 0) consisting only of the characters '(', ')', '{', '}', '[' and ']'.

    Output:
        - A boolean value (true/false) indicating whether s is a valid parentheses sequence.

    Constraints:
        - 0 ≤ n ≤ 10^5

    Target Time Complexity: O(n)
    Target Extra Space: O(n) 
        // for the stack used to track opening brackets
**/