import Data.Char

{-
    map    - Применение переданной функции для каждого элемента списка
    filter - Применение логических функций для каждого элемента списка. Добавляет в список элементы, прошедшие проверку
    foldl  - Левая свёртка списка. Последовательное применение бинарной операции к элементу
    foldr  - Правя свёртка списка. 
-}


multiple [] = 0
multiple xs = foldl (*) 1 xs

sum' [] = 0
sum' xs = foldl (+) 0 xs

remove [] = []
remove (x:xs) = if even x
                then x : remove xs
                else remove xs 

remove' f [] = []
remove' f (x:xs) = if f x
                   then x : remove' f xs
                   else remove' f xs  

sumOfSquares xs = foldl (+) 0 (map (^2) xs)

rcons xs y = y:xs

myReverse xs = foldl rcons [] xs

myFoldl f init [] = init
myFoldl f init (x:xs) = myFoldl f newInit xs
    where newInit = f init x

myFoldr f init [] = init
myFoldr f init (x:xs) = f x rightResult
    where rightResult = myFoldr f init xs

-- task 9.1

elem' _ [] = False
elem' x xs = if length (exsits x xs) >= 1 then True else False 
    where exsits n xs = filter (\x -> x == n) xs

-- task 9.2

isPalindrom str = pureString == reverse pureString
    where lowerCaseStr = map toLower str
          pureString = filter (\x -> x /= ' ') lowerCaseStr

-- task 9.3

harmonic 0 = 0
harmonic n = harmonic (n-1) + partial
    where partial = 1/(n+1)


