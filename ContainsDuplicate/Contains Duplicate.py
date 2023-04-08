from typing import List


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if len(nums) > len(set(nums)):
            return True
        return False
        # a = [x for x in nums if nums.count(x) > 1]
        # if a:
        #     return Truenu
        # return False


solution = Solution()
print(solution.containsDuplicate([1, 2, 3, 1]))
