class Solution(object):
    def maximumCount(self, nums):
        pos = 0
        neg = 0
        for n in nums:
            if n > 0: pos += 1
            elif n < 0: neg += 1
        return max(pos, neg)
    
maxCount = Solution().maximumCount
print(maxCount([1, -2, -3, 4])) # 2
print(maxCount([1, 2, 3, 4])) # 4