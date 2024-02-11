module Lesson14 where

data SixSideDie = S1 | S2 | S3 | S4 | S5 | S6
    deriving (Eq, Ord, Enum)

instance Show SixSideDie where
    show S1 = "one"
    show S2 = "two"
    show S3 = "three"
    show S4 = "four"
    show S5 = "five"
    show S6 = "six"

{-- 

    deriving - автоматически порождает экземляры классов для типа

    instance Class Data where - самостоятельное определение функций класса
        func =  
 --}

-- instance Enum SixSideDie where
--     toEnum 0 = S1
--     toEnum 1 = S2
--     toEnum 2 = S3
--     toEnum 3 = S4
--     toEnum 4 = S5
--     toEnum 5 = S6
--     toEnum _ = error "Incorrect value"

--     fromEnum S1 = 0
--     fromEnum S2 = 1
--     fromEnum S3 = 2
--     fromEnum S4 = 3
--     fromEnum S5 = 4
--     fromEnum S6 = 5

-- instance Eq SixSideDie where
--     (==) S6 S6 = True 
--     (==) S5 S5 = True 
--     (==) S4 S4 = True 
--     (==) S3 S3 = True 
--     (==) S2 S2 = True 
--     (==) S1 S1 = True 
--     (==) _ _   = True 


-- instance Ord SixSideDie where
--     compare S6 S6 = EQ
--     compare S6 _  = GT
--     compare _ S6  = LT
--     compare S5 S5 = EQ
--     compare S5 _  = GT
--     compare _ S5  = LT
--     compare S4 S4 = EQ
--     compare S4 _  = GT
--     compare _ S4  = LT


data Book = Book { caption :: String
                 , author :: String
                 , year :: Int
                 }
    deriving(Eq)

instance Show Book where
    show (Book c a y) = show y ++ " - " ++ a ++ " - " ++ c


class Die where
    sm :: [a] -> Int


instance Die SixSideDie where
    sm  = x + sm xs

