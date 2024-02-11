
-- Check 3.2
doubleDouble :: Integer -> Integer
doubleDouble x = dubs*2 -- (x*2)*2
    where dubs = x*2

doubleDouble' :: Integer -> Integer
doubleDouble' x = (\n -> n*2 ) x*2


-- example 3.3

sumSquareOrSquareSum :: Integer -> Integer -> Integer
sumSquareOrSquareSum x y = let sumSquare = (x^2 + y^2)
                               squareSum = (x + y)^2
                           in
                            if sumSquare > squareSum
                             then sumSquare
                             else squareSum

-- example 3.2
overwrite :: Integer -> Integer
overwrite x = let x = 2
              in let x = 3
                in let x = 4
                    in x

-- Check 3.3
overwrite' :: Integer -> Integer
overwrite' x = (\x -> 
                (\x -> 
                 (\x -> x) 4) 3) 2


-- Task 3.2
task_3_2 :: Integer -> Integer
task_3_2 x = (\x -> 
              (\x -> inc) inc) inc
    where inc = x + 1

libraryAdd :: Integer -> Integer -> Integer
libraryAdd a b = (\x y -> x + y) a b
