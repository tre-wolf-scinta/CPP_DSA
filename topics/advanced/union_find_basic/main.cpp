/**
    Problem: Union-Find (Disjoint Set Union) Basic

    Problem Statement: 

    You are to design and implement a Union-Find (Disjoint Set Union, DSU) data structure to maintain 
    a collection of disjoint sets over elements labeled from 0 to n - 1.

    The structure should support the following operations:

        - find(x): Return the representative (root) of the set containing element x.
        - unite(x, y): Merge the sets containing elements x and y.
        - connected(x, y): Return true if x and y belong to the same set, false otherwise.

    The implementation should use path compression and union by rank/size to achieve near-constant 
    time per operation.

    Input:
        - An integer n (number of elements, labeled 0..n-1).
        - A sequence of operations:
            - "unite x y"
            - "connected x y"
            - "find x"

    Output:
        - For each "connected x y" operation, output true or false.
        - For each "find x" operation, output the representative (root) of the set containing x.
        - "unite" operations do not directly produce output.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - 1 ≤ number of operations ≤ 100,000
        - 0 ≤ x, y < n

    Target Time Complexity:
        - Amortized O(α(n)) per operation, where α is the inverse Ackermann function (practically constant).

    Target Extra Space:
        - O(n)   // for parent and rank/size arrays
**/