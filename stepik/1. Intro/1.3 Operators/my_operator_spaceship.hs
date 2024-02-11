
infix 4 <=>

a <=> b = 
        if a == b
        then 0
        else (if a > b
                then -1
                else 1)
