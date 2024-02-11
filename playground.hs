
type AddResult = Int
type MulResult = Int

type Result = Add AddResult
            | Mul MulResult


myAdd :: Int -> Int -> Result
myAdd x y = x + y


main :: IO ()
main = putStrLn "Hello World!"
