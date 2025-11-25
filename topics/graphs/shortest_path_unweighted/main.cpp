/**
    Problem: Shortest Path in an Unweighted Graph

    Problem Statement: 

    You are given an unweighted graph with n vertices labeled from 0 to n - 1 and a list of undirected
    or directed edges between them (depending on the variant). You are also given a source vertex s.

    Your task is to compute the shortest path distance (in terms of number of edges) from the source vertex s 
    to every other vertex that is reachable from s.

    If a vertex is not reachable from s, its distance should be reported as some sentinel value 
    (e.g., -1 or infinity).

    Input:
        - An integer n (number of vertices, labeled 0..n-1).
        - A list of edges, where each edge is a pair (u, v) representing an adjacency between u and v.
        - An integer s representing the source vertex (0 ≤ s < n).

    Output:
        - An array dist of length n where:
            - dist[i] is the minimum number of edges in any path from s to i, if i is reachable.
            - dist[i] is a sentinel value (e.g., -1) if i is not reachable.

    Constraints:
        - 1 ≤ n ≤ 100,000
        - 0 ≤ number of edges E ≤ 200,000 (typical)
        - 0 ≤ u, v < n
        - Graph may be directed or undirected (clarify in implementation).

    Target Time Complexity: O(V + E)   // using BFS
    Target Extra Space:
        - O(V + E) for adjacency list and BFS queue
**/