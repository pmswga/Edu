module Lesson13 where

addThenDouble :: Num a => a -> a -> a
addThenDouble x y = (x + y)*2


class Describable a where
    describe :: a -> String


{--
    Классы типов

    Получение информации о классе типов
    > :info class_type

    Num     - определяет класс обозначающий простую арифметику 
    Eq      - определяет класс обозначающий равенство элементов
    Ord     - определяет класс обозначающий порядок элементов
    Bounded - определяет класс обозначающий границы


--}


data Icecream = Chocolate | Vanilla 
    deriving (Show, Eq, Ord)



