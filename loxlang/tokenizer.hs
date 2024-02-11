
type Lexeme = String
type CodeLine = Int


data AriphmeticTokenType = Plus | Minus | Mul | Div
    deriving Show

data OperationTokenType = Equal | Less | Great
    deriving Show

data TokenType = AriphmeticTokenType AriphmeticTokenType | OperationTokenType OperationTokenType
    deriving Show

data Token = Token {
        lexeme :: Lexeme,
        line :: CodeLine,
        tokenType :: TokenType
    }
    deriving Show


makeTokenType :: Char -> TokenType
makeTokenType '+' = AriphmeticTokenType Plus
makeTokenType '-' = AriphmeticTokenType Minus
makeTokenType '*' = AriphmeticTokenType Mul
makeTokenType '/' = AriphmeticTokenType Div
makeTokenType '=' = OperationTokenType Equal
makeTokenType '<' = OperationTokenType Less
makeTokenType '>' = OperationTokenType Great

-- makeToken :: String -> Token
-- makeToken s = Token s 12 AriphmeticTokenType Plus


