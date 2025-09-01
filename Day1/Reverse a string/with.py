def reverse_string(s): # type: ignore
    result = "" 
    for char in s: # type: ignore
        result = char + result # type: ignore
    return result # type: ignore

print(reverse_string("uhbiR"))  
