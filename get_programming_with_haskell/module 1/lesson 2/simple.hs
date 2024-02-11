
calcChange :: Integer -> Integer -> Integer
calcChange owed given = if given - owed > 0
                        then given - owed
                        else 0

calcChange' :: Integer -> Integer -> Integer
calcChange' owed given = if change > 0
                        then change
                        else 0
    where change = given - owed


doublePlusTwo :: Integer -> Integer
doublePlusTwo x = doubleX + 2
    where doubleX = x*2
