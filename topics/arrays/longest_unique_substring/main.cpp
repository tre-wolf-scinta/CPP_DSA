/**
    Problem: Longest Unique Substring (Longest Substring Without Repeating Characters)

    Problem Statement: 

    You are given a string s of length n. Your task is to find the length of the longest substring 
    that contains no repeating characters.

    A substring is a contiguous sequence of characters within the string.

    Formally, among all substrings s[i..j] that contain only distinct characters, return the maximum length (j - i + 1).

    Input: A string s of length n (n ≥ 0).
    Output: An integer representing the length of the longest substring of s without repeating characters.

    Constraints:
        - 0 ≤ n ≤ 100,000
        - s[i] can be any valid ASCII character (or standard lowercase/uppercase letters and digits, 
          depending on the specific version).

    Target Time Complexity: O(n)
    Target Extra Space: O(k)   // where k is the character set size, typically O(1) for fixed ASCII
**/