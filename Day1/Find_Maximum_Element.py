def find_max (arr):
    max = arr[0]
    for num in arr:
        if num > max:
            max = num 
    return max 

print(find_max([3,4,2,6,9,2,0,-1,5]))
