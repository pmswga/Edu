import System.Exit

exit = undefined

command_a :: IO()
command_a = do
    putStrLn "Run command a"

command_b :: IO()
command_b = do
    putStrLn "Run command b"

main :: IO()
main = do
    input <- getLine
    if input == "command_a" then command_a else main
    if input == "exit" then exitWith (ExitFailure 0) else main 
