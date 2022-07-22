import sys
class Solution:
def findMin(self, nums: List[int]) -> int:
n = len(nums)
low = 0
high = n - 1
minm = sys.maxsize
while(low<=high):
mid = (low+high) // 2
if(nums[low] <= nums[mid]):
minm = min(minm , nums[low])
low = mid+1
else:
minm = min(minm , nums[mid])
high = mid -1
return minm