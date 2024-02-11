
robot (name, attack, hp) = \message -> 
                                message (name, attack, hp)


{-
    Robots
-}

rb1 = robot ("RB1", 12, 100)
rb2 = robot ("RB2", 8,  50)
killerRobot = robot ("Killer", 25, 200)
gentleGiant = robot ("No Killer", 10, 300)

name   (n, _, _)  = n
attack (_, a, _)  = a
hp     (_, _, hp) = hp

getName aRobot = aRobot name

getAttack aRobot = aRobot attack

getHP aRobot = aRobot hp

setName aRobot newName = aRobot (\(n, a, h) -> robot (newName, a, h))

setAttack aRobot newAttack = aRobot (\(n, a, h) -> robot (n, newAttack, h))

setHP aRobot newHP = aRobot (\(n, a, h) -> robot (n, a, newHP))

printRobot aRobot = aRobot (\(n, a, h) -> 
                            n ++
                            " attack: " ++ (show a) ++
                            " health: " ++ (show h))

damage aRobot attackDamage =
    aRobot (\(n, a, h) -> robot (n, a, h - attackDamage))

fight aRobot defender = damage defender attack
    where attack = if getHP aRobot > 0
                   then getAttack aRobot
                   else 0 

gentleGiantRound1 = fight killerRobot gentleGiant
killerRobotRound1 = fight gentleGiant killerRobot
gentleGiantRound2 = fight killerRobotRound1 gentleGiantRound1
killerRobotRound2 = fight gentleGiantRound1 killerRobotRound1
gentleGiantRound3 = fight killerRobotRound2 gentleGiantRound2
killerRobotRound3 = fight gentleGiantRound2 killerRobotRound2



