/**
    Problem: Implement Trie (Prefix Tree)

    Problem Statement: 

    You are to design and implement a Trie (prefix tree) that supports the following operations on 
    lowercase English words:

        - insert(word): Insert the string word into the trie.
        - search(word): Return true if the string word is in the trie (as a complete word), false otherwise.
        - startsWith(prefix): Return true if there exists any word in the trie that starts with the 
          given prefix, false otherwise.

    The trie should efficiently store and query string prefixes.

    Input:
        - A sequence of operations of the form:
            - "insert word"
            - "search word"
            - "startsWith prefix"
        - Each word / prefix consists only of lowercase English letters 'a'–'z'.

    Output:
        - For each "search" operation, output true or false.
        - For each "startsWith" operation, output true or false.
        - "insert" does not directly produce output.

    Constraints:
        - 1 ≤ number of operations ≤ 100,000
        - 1 ≤ length of each word/prefix ≤ 100
        - All words and prefixes consist only of characters 'a'–'z'

    Target Time Complexity:
        - insert(word): O(L)
        - search(word): O(L)
        - startsWith(prefix): O(P)
        where L is the length of the word and P is the length of the prefix.

    Target Extra Space:
        - O(TotalCharacters)   // total number of characters inserted across all words
**/