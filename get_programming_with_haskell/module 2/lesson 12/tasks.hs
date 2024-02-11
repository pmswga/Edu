

type Diameter = Double
type Area = Double

areaOfCircle :: Diameter -> Area
areaOfCircle d = 2*pi*d


type FirstName = String
type LastName = String
type Age = Int
type Height = Int

patientInfo :: FirstName -> LastName -> Age -> Height -> String
patientInfo fn ln a h = 
        name ++ " " ++ ageHeight
    where name = ln ++ ", " ++ fn
          ageHeight = "(Age: " ++ show a ++
                      "; Height: " ++ show h ++ " cm)"  


type PatientName = (String, String)


firstName :: PatientName -> String
firstName (fn, _) = fn

secondName :: PatientName -> String
secondName (_, sn) = sn

patientInfo' :: PatientName -> Age -> Height -> String
patientInfo' pn a h = 
        name ++ " " ++ ageHeight
    where name = firstName pn ++ ", " ++ secondName pn
          ageHeight = "(Age: " ++ show a ++
                      "; Height: " ++ show h ++ " cm)" 


data Sex = Male | Female

sexInitial :: Sex -> Char
sexInitial Male = 'M'
sexInitial Female = 'F'


data RhType = Pos | Neg

data ABOType = A | B | AB | O

data BloodType = BloodType ABOType RhType

patient1BT :: BloodType
patient1BT = BloodType A Pos

patient2BT :: BloodType
patient2BT = BloodType O Neg

patient3BT :: BloodType
patient3BT = BloodType AB Pos


showRh :: RhType -> String
showRh Pos = "+"
showRh Neg = "-"

showABO :: ABOType -> String
showABO A  = "A" 
showABO B  = "B" 
showABO AB = "AB" 
showABO O  = "O" 

showBloodType :: BloodType -> String
showBloodType (BloodType abo rh) = showABO abo ++ showRh rh


canDonateTo :: BloodType -> BloodType -> Bool
canDonateTo (BloodType O _) _ = True
canDonateTo _ (BloodType AB _) = True
canDonateTo (BloodType A _) (BloodType A _) = True
canDonateTo (BloodType B _) (BloodType B _) = True
canDonateTo _ _ = False


type MiddleName = String
data Name = Name FirstName LastName
          | NameWithMiddle FirstName MiddleName LastName

showName :: Name -> String
showName (Name f l) = f ++ " " ++ l
showName (NameWithMiddle f m l) = f ++ " " ++ m ++ " " ++ l

name1 = Name "Sergey" "Amirovich"

name2 = NameWithMiddle "Sergey" "Basyrov" "Amirovich"


data Patient = Patient Name Sex Int Int Int BloodType

johnDoe :: Patient
johnDoe = Patient (Name "John" "Doe") Male 43 188 92 (BloodType AB Pos)

jane :: Patient
jane = Patient (NameWithMiddle "Jane" "Jona" "James") Female 30 170 65 (BloodType A Neg)


getName :: Patient -> Name
getName (Patient n _ _ _ _ _) = n

getAge :: Patient -> Int
getAge (Patient _ _ a _ _ _) = a

getBloodType :: Patient -> BloodType
getBloodType (Patient _ _ _ _ _ bt) = bt


{-- Record style syntax --}

data Patient' = Patient' { name :: Name
                         , sex :: Sex
                         , age :: Int
                         , height :: Int
                         , weight :: Int
                         , bloodType :: BloodType}

jackieSmith :: Patient'
jackieSmith = Patient' { name = Name "Jeckie" "Smith"
                      , age = 43
                      , sex = Female
                      , height = 157
                      , weight = 52
                      , bloodType = BloodType O Neg}


-- task 12.1

-- canDonateTo :: Patient -> Patient -> Bool



-- task 12.2

showSex :: Sex -> String
showSex Male = "Male"
showSex Female = "Female"

patientSummary :: Patient' -> String
patientSummary p = 
    "**************" ++
    "Name: " ++ n ++
    "Male: " ++ m ++
    "Age: " ++ a ++
    "Height: " ++ h ++
    "Weight: " ++ w ++
    "Blood type: " ++ bt ++
    "**************\n"
  where n = showName (name p)
        m = showSex (sex p)
        a = show (age p)
        h = show (height p)
        w = show (weight p)
        bt = showBloodType (bloodType p)



main :: IO()
main = do 
  putStrLn "Hello World"

