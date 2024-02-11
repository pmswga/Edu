module Lesson15 where

data FourLetterAlphabet = L1 | L2 | L3 | L4
    deriving (Show, Enum, Bounded)


rotN :: (Bounded a, Enum a) => Int -> a -> a
rotN alphabetSize c = toEnum rotation
    where halfAlphabet = alphabetSize `div` 2
          offset = fromEnum c + halfAlphabet
          rotation = offset `mod` alphabetSize


largestCharNumber :: Int
largestCharNumber = fromEnum (maxBound :: Char)

rotChar :: Char -> Char
rotChar charToEncrypt = rotN sizeOfAlphabet charToEncrypt
    where sizeOfAlphabet = 1 + fromEnum (maxBound :: Char)


message :: [FourLetterAlphabet]
message = [L1, L3, L4, L1, L1, L2]

fourLetterAlphabetEncoder :: [FourLetterAlphabet] -> [FourLetterAlphabet]
fourLetterAlphabetEncoder msg = map rot4l msg
    where
        alphaSize = 1 + fromEnum (maxBound :: FourLetterAlphabet)
        rot4l = rotN alphaSize



data ThreeLetterAlphabet = Alpha | Beta | Kappa 
    deriving (Show,Enum,Bounded)

threeLetterMessage :: [ThreeLetterAlphabet]
threeLetterMessage = [Alpha,Alpha,Beta,Alpha,Kappa]

threeLetterEncoder :: [ThreeLetterAlphabet] -> [ThreeLetterAlphabet]
threeLetterEncoder vals = map rot3l vals
    where
        alphaSize = 1 + fromEnum (maxBound :: ThreeLetterAlphabet)
        rot3l = rotN alphaSize


xorBool :: Bool -> Bool -> Bool
xorBool v1 v2 = (v1 || v2) && (not (v1 && v2))

xorPair :: (Bool, Bool) -> Bool
xorPair (v1, v2) = xorBool v1 v2

xor :: [Bool] -> [Bool] -> [Bool]
xor l1 l2 = map xorPair (zip l1 l2)


type Bits = [Bool]


maxBits :: Int
maxBits = length (intToBits' maxBound)

intToBits' :: Int -> Bits
intToBits' 0 = [False]
intToBits' 1 = [True]
intToBits' n = if (remainder == 0)
               then False : intToBits' nextVal
               else True : intToBits' nextVal
    where
        remainder = n `mod` 2
        nextVal = n `div` 2


intToBits :: Int -> Bits
intToBits n = leadingFalses ++ reversedBits
    where
        reversedBits = reverse (intToBits' n)
        missingBits = maxBits - (length reversedBits)
        leadingFalses = take missingBits (cycle [False])



drp :: Int -> [a] -> [a]
drp n _  | n < 0 = []
drp _ []         = []
drp 0 xs         = xs
drp n (x:xs)     = drp (n-1) xs


