def list_adder(list):
    '''When passed a list, will return an intiger containing the total
    of the list'''

    ans=0
    for i in range(len(list)):
        ans+=list[i]

    return ans

sample_list = [1,2,3,4,5,6]
print("The answer is", list_adder(sample_list))