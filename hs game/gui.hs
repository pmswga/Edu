module GUI where

showMainMenu :: String
showMainMenu =
        "1. Начать игру\n"
        ++ "2. Выход\n"

showMessageLog :: String -> String -> Int -> String
showMessageLog who what damage =
        who ++ " нанёс " ++ what ++ " урон: " ++ (show damage) ++ "\n"

showPlayerActions :: String
showPlayerActions = 
        "1. Физическая атака\n" 
        ++ "2. Магическая атака\n" 
        ++ "3. Пропустить ход\n"


