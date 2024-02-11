
{-

program = MainComponent { [components] }
components = [component name] { [properties] }
properties = [property]
property = [property name] : [property value] ;
component_name = IOComponents | LayoutComponents
property_name = string
property_value = string | integer | float
main_component = Window | Widget | Dialog
-}


-- data Components = Component String 


data ComponentName = InputComponents InputComponents | OutputComponents OutputComponents | LayoutComponents LayoutComponents
    deriving Show

data InputComponents = Button | LineEdit | TextEdit | SpinBox
    deriving Show

data OutputComponents = Label | List | Table
    deriving Show

data LayoutComponents = VeritcalLayout | HorizontalLayout | GridLayout
    deriving Show


type PropertyName = String

data PropertyValue = PropertyStringVal String | PropertyIntegerVal Int | PropertyFloatVal Float

instance Show PropertyValue where
    show (PropertyStringVal str) = str
    show (PropertyIntegerVal int) = (show int)
    show (PropertyFloatVal flt) = (show flt)


data Property = Property PropertyName PropertyValue

instance Show Property where
    show (Property name value) = name ++ ": " ++ (show value) ++ ";"


data Properties = Properties [Property]

instance Show Properties where
    show (Properties ps) = _show ps
        where 
            _show [] = ""
            _show (p:ps) = (show p) ++ (if (length ps) >= 1 then "\n" else "")  ++ (_show ps)


data MainComponent = Window | Widget | Dialog


instance Show MainComponent where
    show Window = "Window"
    show Widget = "Widget"
    show Dialog = "Dialog"



-- let p1 = Property "width" (PropertyIntegerVal 500)
-- let p2 = Property "height" (PropertyIntegerVal 250)
-- let p3 = Property "title" (PropertyStringVal "Hello World") 
-- let ps = Properties [p1, p2, p3]
