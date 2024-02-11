module Lesson17 where

import Data.List
import Data.Semigroup

myLast :: [a] -> a
myLast = head . reverse

myMin :: Ord a => [a] -> a
myMin = head . sort

myMax :: Ord a => [a] -> a
myMax = myLast . sort


myAll :: (a -> Bool) -> [a] -> Bool
myAll f = (foldr (&&) True) . (map f)


myAny :: (a -> Bool) -> [a] -> Bool
myAny testFunc = (foldr (||) False) . (map testFunc)


-- Охранные выражения

howMuch :: Int -> String
howMuch n 
    | n > 10 = "Much"
    | n > 0 = "Few"
    | otherwise = "oh, no"


-- Полугруппа

instance Semigroup Integer where
    (<>) x y = x + y


-- Пример с цветами


data Color = Red | Yellow | Blue | Green | Purple | Orange | Brown
    deriving (Show, Eq)


instance Semigroup Color where
    (<>) Red Blue = Purple 
    (<>) Blue Red = Purple
    (<>) Yellow Blue = Green
    (<>) Blue Yellow = Green 
    (<>) Yellow Red = Orange
    (<>) Red Yellow = Orange
    (<>) a b
            | a == b = a
            | all (`elem` [Red, Blue, Purple]) [a, b] = Purple
            | all (`elem` [Blue, Yellow, Green]) [a, b] = Green
            | all (`elem` [Red, Yellow, Orange]) [a, b] = Orange
            | otherwise = Brown









