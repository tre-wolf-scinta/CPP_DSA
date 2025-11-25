/**
	Problem: Container with Most Water

	Problem Statement: 

	You are given an array height of length n, where each element height[i] (for 0 ≤ i < n) represents a vertical line drawn on the x-	axis at position i with height height[i].
	Two lines together with the x-axis form a container. The container’s area (the amount of water it could hold) is determined by:
		- The distance between the lines: j - i
		- The shorter of the two heights: min(height[i], height[j])

	Formula for area for lines i and j (i < j) is: area(i, j) = (j - i) * min(height[i], height[j])

	Your task is to: Find the maximum area of water a container can store using any two lines from the array.

	You cannot reorder the lines; you must use indices as given.
	Input: An integer array height of length n (n ≥ 2), where each height[i] is a non-negative integer.
	Output: A single integer: the maximum possible area.

	Constraints:
		- 2 ≤ n ≤ 100,000
		- 0 ≤ height[i] ≤ 10^4 (or up to 10^9 in some versions)

	Target Time  Complexity: O(n)
	Target Extra Space: O(1)  
**/

