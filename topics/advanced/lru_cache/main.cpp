/**
    Problem: LRU Cache

    Problem Statement: 

    You are to design and implement a Least Recently Used (LRU) cache with a fixed positive capacity.

    The cache should support the following operations:

        - get(key): Return the value associated with key if it exists in the cache; otherwise return -1.
                     Accessing a key counts as using it, making it the most recently used entry.
        - put(key, value): Insert or update the value associated with key. If inserting this key
                           causes the number of items in the cache to exceed capacity, then evict the 
                           least recently used item.

    The cache must evict the least recently used entry when it exceeds capacity, and both operations
    must run in O(1) average time.

    Input:
        - An integer capacity > 0.
        - A sequence of operations:
            - "get key"
            - "put key value"
        - Keys and values are integers.

    Output:
        - For each "get" operation, output the value associated with key, or -1 if key is not present.
        - "put" operations do not directly produce output.

    Constraints:
        - 1 ≤ capacity ≤ 10^5
        - 1 ≤ number of operations ≤ 100,000
        - -10^9 ≤ key, value ≤ 10^9

    Target Time Complexity:
        - get(key): O(1) average
        - put(key, value): O(1) average

    Target Extra Space:
        - O(capacity)   // for storing up to capacity key-value pairs and their usage order
**/