class Solution(object):
    def searchInsert(self, nums, target):
        low = 0
        high = len(nums) - 1
        while low <= high:
            middle = (low + high) // 2
            if nums[middle] == target:
                return middle
            if nums[middle] < target:
                low = middle + 1
            else:
                high = middle - 1
        return low