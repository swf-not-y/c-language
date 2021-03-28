ums = [1,2,3,4,5,6,7,8,9]
target = 10
for i in nums:
    for j in nums:
        if(nums[i] + nums[j] == target):
            print("ÁĞ±íÎª%d,%d£º",i,j)
            nums1 = [i,j]
            print(nums1)
print(nums1)
