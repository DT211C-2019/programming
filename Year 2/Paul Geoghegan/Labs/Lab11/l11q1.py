str_list = ['hi','mom','dad',['grandma','grandpa']] 
new_list = str_list 
copy_list = str_list[:] 

str_list[0] = 'bye' 
new_list[1] = 'mother' 
copy_list[2] = 'father'
copy_list[-1][0] = 'nanna' 

print(str_list) # Line 1 
print(new_list) # Line 2 
print(copy_list) # Line 3
