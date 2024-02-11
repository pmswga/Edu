module Main where

import System.Environment
import Control.Monad

{--

    ngramm

    lang
    la
    an
    ng

    язык (2)
    яз
    зы
    ык

    язык (3)
    язы
    зык

--}

ngramm :: String -> Int -> [String]
ngramm [] _ = [[]]
ngramm (c:str) size = current_ngram : ngramm str size
    where current_ngram = subseq (c:str) size

subseq :: String -> Int -> String
subseq [] _ = []
subseq _  0 = []
subseq (c:str) size = c : subseq str (size-1)


main :: IO ()
main = do
    args <- getArgs
    let linesToRead = if length args > 0
                      then read (head args)
                      else 0 :: Int

    numbers <- replicateM linesToRead getLine

    let ints = map read numbers :: [Int]

    print ("Count: " ++ show linesToRead)
    print ("Sum: " ++ show (sum ints))
