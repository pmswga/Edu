
{-

    class|interface|trait _
    {
        public|private|protected int|string $_;
        ...

        public|private|protected function _()
        {
    
        }

    }

-}

generateHeader structure name = structure ++ " " ++ name

classHeader = generateHeader "class"

generateBrace brace = brace ++ "\n"

openFigBrace = generateBrace "{"

closeFigBrace = generateBrace "}"

newline = "\n"

-- generateInterfaceHeader name = generateHeader "interface"

-- generateTraitHeader name = generateHeader "trait"


generateClass className =
    classHeader className ++ "\n" ++
    openFigBrace ++
    closeFigBrace





main :: IO()
main = do
    putStrLn(generateClass "Person")
