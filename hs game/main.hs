module Main where

import GUI
import Logic


startgame :: Player -> Enemy -> IO String
startgame p e = do
  
  putStrLn (show p)
  putStrLn (show e)
  putStr showPlayerActions
  
  input <- getLine
  
  let ne = (if input == "1"
           then playerPhysicAttack p e
           else if input == "2"
           then playerMagicAttack p e
           else e)

  let what = (if input == "1" then "physic" else "magic")

  putStrLn ""
  putStrLn (showMessageLog "Player" what (pDamage p))
  putStrLn ""

  let np = enemyPhysicAttack e p

  putStrLn ""
  putStrLn (showMessageLog "Enemy" "physic" (eDamage e))
  putStrLn ""
  
  startgame np ne

main :: IO String
main = do
  let p = Player 100 0 3 2
  let e = Enemy 100 2
  
  putStr showMainMenu
  input <- getLine

  if input == "1"
  then startgame p e
  else return "Wow"
