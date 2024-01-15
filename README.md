# Abhiraj Pratap Singh
---


---

### Two Approach .
- Brute Force 
- Optimal ( Binary Search )
---

# Approach 1 ( Brute Force Approach )
<!-- Describe your approach to solving the problem. -->
1. Initialize Variables:
    - Initialize variables i, j, and count to keep track of indices and count of pairs.
2. Outer Loop:
    - Use a while loop with i to iterate through each element in the vector (nums).
3. Inner Loop:

    - Use a nested while loop with j to iterate through the elements after the current i in the vector (nums).
4. Check Sum:

    - Inside the inner loop, check if the sum of elements at indices i and j is less than the target.
5. Increment Count:

    - If the sum is less than the target, increment the count variable.
6. Increment Inner Loop:

    - Increment j to consider the next element in the inner loop.
7. Increment Outer Loop:

    - Increment i to consider the next element in the outer loop.
8. Return Count:

    - Return the final count of pairs whose sum is less than the target.

---

# Code 1 ( Brute Force Approach )
```
class Solution {
public:
    int countPairs(vector<int>& nums, int target) 
    {
        int i=0;
        int j;
        int count=0;
        while(i<nums.size())
        {
            j=i+1;
            while(j<nums.size())
            {
                if(nums[i]+nums[j]<target)
                    count++;
                j++;
            }
            i++;
        }    
        return count;
    }
};
```
# Complexity

- **Time complexity: O(n*n) ,** The nested loops result in quadratic time complexity.

---

- **The space complexity O(1),** is constant as it uses a fixed number of variables regardless of the input size.

---
---

![Screenshot (47).png](https://assets.leetcode.com/users/images/cd54b3b5-edb9-4f09-96ed-b98856d03876_1705333508.1644714.png)

---
---

# Approach 2 ( Optimal Approach )

1. Sort the Array:
    - Sort the input vector nums in non-decreasing order.
2. Initialize Pointers:
    - Initialize two pointers, start at the beginning of the array and end at the end of the array.
3. Initialize Count:
    - Initialize a variable count to keep track of pairs.
4. Iterate using Two Pointers:
    - Use a while loop to iterate while start is less than end.
    - Check if the sum of elements at start and end is less than the target.
5. Increment Count and Move Pointer:
    - If the sum is less than the target, increment the count by the difference between end and start (indicating all pairs between start and end satisfy the condition).
    - Move start pointer to the next element.
6. Decrement End Pointer:
    - If the sum is greater than or equal to the target, decrement the end pointer.
7. Repeat:
    - Repeat steps 4-6 until start is less than end.
8. Return Count:
    - Return the final count of pairs whose sum is less than the target.

---


# Complexity:


- **Time complexity: O(nlogn)** , Sorting the array takes O(nlogn) time, and the subsequent two-pointer traversal takes O(n) time.

---


- **Space complexity: O(1)** , The space complexity is constant as it uses a fixed number of variables regardless of the input size.












# Code 2 ( Optimal Approach )
```
public:
    int countPairs(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        int count=0;
        while(start<end)
        {
            if( nums[start]+nums[end]<target )
            {
                count=count+end-start;
                start++;
            }
            else
                end--;
        }   
        return count;
    }
};
```


---
