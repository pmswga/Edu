
ifEven func x = if even x
                then func x
                else x

inc :: Integer -> Integer
inc n = n + 1

double :: Integer -> Integer
double n = n * 2

square :: Integer -> Integer
square n = n ^ 2


-- example 5.1

genIfEven f = (\x -> ifEven f x)

ifEvenInc = genIfEven inc

ifEvenDouble = genIfEven double

ifEvenSquare = genIfEven square

-- check 5.1
genIfEvenX x = (\f -> ifEven f x)

-- example 5.2

getRequestURL host apiKey resource id =
    host ++ "/" ++ resource ++ "/" ++ id ++ "?token=" ++ apiKey

defaultRequestURL apiKey resource id =
    getRequestURL "https://example.com" apiKey resource id

httpGenerator domain = "https://" ++ domain

getRequestURL' host apiKey resource id =
    (httpGenerator host) ++ "/" ++ resource ++ "/" ++ id ++ "?token=" ++ apiKey


genHostRequestBuilder host = (\apiKey resource id -> 
                                getRequestURL host apiKey resource id)

defaultURLBuilder = genHostRequestBuilder "http://example.com"

genAPIRequestBuilder host apiKey = (\resource id -> 
                                    getRequestURL host apiKey resource id)

genAPIRequestBuilder' hostBuilder apiKey =
                        (\resource id -> hostBuilder apiKey resource id)

genAPIRequestBuilder'' hostBuilder apiKey resource = 
                        (\id -> hostBuilder apiKey resource id)

defaultURLBuilder' = genAPIRequestBuilder "http://example.com" "my_best_token"

myRequestUrl = genAPIRequestBuilder' defaultURLBuilder "214214214"

myBookRequestUrl = genAPIRequestBuilder'' defaultURLBuilder "12214124" "book"


-- 

add4 a b c d = a + b + c + d

addXto3 x = (\b c d -> add4 x b c d)


-- check 5.3

getBookRequestURL = getRequestURL "http://example.com" "1337hAsk3ll" "book"

-- check 5.4


my_func name location = name ++ " " ++ location

flipBinaryArgs binaryFunction = (\x y -> binaryFunction y x)


substract2 = flip (-) 2


-- Task 5.1

ifEvenInc' = ifEven inc

ifEvenDouble' = ifEven double

ifEvenSquare' = ifEven square


-- Task 5.2

binaryPartialApplication binaryFunction = (\y -> (\x -> binaryFunction x) y)
