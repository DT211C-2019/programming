
def find_max(nums):
	"""Finds the largest element in a list"""

	#Creates max
	max = 0

	#Finds max
	for i in range(0, len(nums)):
		if max < nums[i]:
			max = nums[i]
	#Prints max
	print(max)

#Main
nums = [1, 2, 3, 7, 5, 6]
find_max(nums)