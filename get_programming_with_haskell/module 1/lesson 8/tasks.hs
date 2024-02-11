

getLength [] = 0
getLength (x:xs) = 1 + getLength xs


getElem _ [] = []
getElem 0 _ = []
getElem n (x:xs) = x:rest
    where rest = getElem (n-1) xs


finiteCycle (first:rest) = first:rest ++ [first]

cycle' (first:rest) = first : cycle' (rest ++ [first])

{-
    Функция Аккермана
    если m = 0, вернуть n + 1
    если n = 0, вернуть A(m - 1, 1)
    если m != 0 и n != 0, вернуть A(m - 1, A(m, n - 1))
-}

ackermann :: Integer -> Integer -> Integer
ackermann 0 n = n + 1
ackermann m 0 = ackermann (m-1) 1
ackermann m n = ackermann (m-1) (ackermann m (n-1))


collatz 1 = 1
collatz n = if even n
                then 1 + collatz (n `div` 2)
                else 1 + collatz (n*3 + 1)


-- task 8.1

reverse' l = rev l []
    where
        rev []     a = a
        rev (x:xs) a = rev xs (x:a)

