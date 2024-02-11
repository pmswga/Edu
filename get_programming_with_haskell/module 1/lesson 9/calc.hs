
sum' = foldl (*) 0 [1..100]

sub' = foldl (-) 0 [1..100]

mul' = foldl (*) 1 [1..100]


main :: IO()
main = do
    command <- getLine
    case command of
        "+" -> sum'
        "-" -> sub'
        "*" -> mul'
        "exit" -> error "Stop program"
    main