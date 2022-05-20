class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        tracker = set()
        
        for n in nums:
            if n in tracker:
                return True
            tracker.add(n)
        
        return False
