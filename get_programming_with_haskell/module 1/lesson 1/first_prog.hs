
main :: IO()
main = do
    putStrLn "Ваша фамилия?"
    secondName <- getLine
    putStrLn "Ваше имя?"
    firstName <- getLine
    putStr ("Вас зовут: " ++ firstName ++ " " ++ secondName)
    putStrLn ""


