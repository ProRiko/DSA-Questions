def find_max (arr): # type: ignore
    max = arr[0] # type: ignore
    for num in arr: # type: ignore
        if num > max:
            max = num  # type: ignore
    return max  # type: ignore

print(find_max([3,4,2,6,9,2,0,-1,5]))
