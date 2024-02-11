
{-
	Ограниченные типы, 
		типы которые имеют минимальные и максимальные значения


-}

myAverage :: [Double] -> Double
myAverage aList = sum aList / len
    where len = fromIntegral (length aList)


x :: Int
x = 2

y :: Integer
y = 2

letter :: Char
letter = 'a'

interest :: Double
interest = 0.375

isTrue :: Bool
isTrue = True

isFalse :: Bool
isFalse = False

values :: [Int]
values = [1..100]

testScores :: [Double]
testScores = [0.99, 0.7, 0.8]

letters :: [Char]
letters = ['a', 'b', 'c']

myString :: String
myString = "This is my string"

myStringList :: [String]
myStringList = ["first", "second", "third"]

{--
	
	tuples

--}

myFIO :: (String, String, String)
myFIO = ("Basyrov", "Sergey", "Amirovich")


half :: Int -> Double
half n = (fromIntegral n) / 2

halve :: Integer -> Integer
halve value = value `div` 2

printDouble :: Int -> String
printDouble x = show (x*2)

makePerson :: String -> Int -> (String, Int)
makePerson name age = (name, age) 

makePerson' = (\name -> 
                (\age -> (name, age)))


{-- 

    higer order functions 

    function name :: (function declare) -> result type

--}


ifEven :: (Int -> Int) -> Int -> Int
ifEven f n = if even n
             then f n
             else n

{-- Типовые переменные. Обозначают любой другой тип --}


simpleInt :: Int -> Int
simpleInt n = n

simple :: a -> a
simple x = x

makeTuple :: a -> b -> (a, b)
makeTuple a b = (a, b)

map' :: (a -> b) -> [a] -> [b]
map' f [] = []
map' f (x:xs) = new_x : map' f xs
    where new_x = f x

-- task 11.1

filter' :: (a -> a) -> [a] -> [a]
filter' f (x:xs) = undefined

tail' :: [a] -> [a]
tail' [] = []
tail' (x:xs) = xs

head' :: [a] -> a
head' [] = error "Empty list error"
head' (x:xs) = x

myFoldl :: (b -> a -> b) -> b -> t a -> b
myFoldl f init [] = init
myFoldl f init (x:xs) = myFoldl f newInit xs
    where newInit = f init x





