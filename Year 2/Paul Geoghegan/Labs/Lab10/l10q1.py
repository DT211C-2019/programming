
def list_sum(nums):
	"""This gets the sum of all the numbers in a list"""

	#creates sum
	sum = 0

	#Calculates sum
	for i in range(0, len(nums)):
		sum += nums[i]
	print(sum)

#Main
nums = [1, 2, 3, 4, 5, 6]
list_sum(nums)