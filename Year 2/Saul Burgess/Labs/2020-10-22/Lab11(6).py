sample_data = [('item1', '12.20'), ('item2', '15.10'), ('item3', '24.5')]

sample_data.sort(key = lambda x: float(x[1]), reverse = True) 

print(sample_data)