

-- task 7.1

gcd' a b = let remain = a `mod` b
    in
        if remain == 0
        then b
        else gcd' b remain

rgcd a b = case remain of
        0 -> b
        _ -> rgcd b remain
    where remain = a `mod` b 


-- example 7.2

sayAmount n = case n of
    1 -> "one"
    2 -> "two"
    n -> "many"


isEmpty' [] = True
isEmpty' _ = False

myHead [] = error "No head"
myHead (x:xs) = x

myTail [] = error "No tail"
myTail (_:xs) = xs
