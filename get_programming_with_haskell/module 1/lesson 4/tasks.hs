
import Data.List

-- example 4.2

ifEven func x = if even x
                then func x
                else x

inc :: Integer -> Integer
inc n = n + 1

double :: Integer -> Integer
double n = n * 2

square :: Integer -> Integer
square n = n ^ 2

ifEvenInc n = ifEven inc n

ifEvenDouble n = ifEven double n

ifEvenSquare n = ifEven square n

-- check 4.1
-- ifEven (\x -> x*x*x) n

sortNames :: [(String, String)]
sortNames = let names = [("Mamontov", "Vlad"), ("Annikov", "Anton"), ("Basyrov", "Sergey")]
            in
                sort names

compareNames name1 name2 = if lastName1 > lastName2
                           then GT
                           else if lastName1 < lastName2
                             then LT
                             else if firstName1 > firstName2
                               then GT
                               else if firstName2 < firstName1
                                 then LT
                                 else EQ
    where lastName1 = snd name1
          lastName2 = snd name2
          firstName1 = fst name1
          firstName2 = fst name2

sortNames' :: [(String, String)]
sortNames' = let names = [("Mamontov", "Vlad"), ("Basyrov", "Anton"), ("Basyrov", "Sergey")]
            in
                sortBy compareNames names


-- example 4.6

addressLetter name location = nameText ++ " - " ++ location
  where nameText = (fst name) ++ " " ++ (snd name)


sfOffice name =
    if lastName < "L"
    then nameText ++
        " - A/i 1234, San-Francisco, st. California, 94111"
    else nameText ++
        " - A/i 1010, San-Francisco, st. California, 94109"
    where lastName = snd name
          nameText = (fst name) ++ " " ++ lastName

nyOffice name = 
        nameText ++
        ": A/i 789, New-York, st. New-York, 10013"
    where nameText = (fst name) ++ " " ++ (snd name)

renoOffice name =
        nameText ++ 
        " - 456, Rino, st. Nevada, 89523"
    where nameText = snd name

-- Task 4.2
colOffice name =
        "Dear " ++ " " ++ nameText ++
        " - 852, Washington DC, st. Columbia, 78536"
    where nameText = fst name

getLocationFunction location =
    case location of
        "ny" -> nyOffice
        "sf" -> sfOffice
        "reno" -> renoOffice
        "col" -> colOffice
        _ -> (\name ->
                (fst name) ++ " " ++ (snd name))

addressLetter' name location = locationFunction name
    where locationFunction = getLocationFunction location

returnFunc = (\x -> x)


-- Task 4.1



