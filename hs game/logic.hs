module Logic where

data Player = Player {
                pHP     :: Double,
                pXP     :: Double,
                pDamage :: Int,
                pMagic  :: Int
        }

instance Show Player where
        show p = "Player. HP: " 
                ++ hp 
                ++ "|XP: " 
                ++ xp 
                ++ "|Damage: " 
                ++ dm
                ++ "|Magic: "
                ++ mg
                where hp = show (pHP p)
                      xp = show (pXP p)
                      dm = show (pDamage p)
                      mg = show (pMagic p)

data Enemy = Enemy {
                eHP     :: Double,
                eDamage :: Int
        }

instance Show Enemy where
        show e = "Enemy. HP: "
                ++ hp
                ++ "|Damage: "
                ++ dm
                where hp = show (eHP e)
                      dm = show (eDamage e)

-- test data

--let p = Player 100 0 3 2
--let e = Enemy 100 3


-- actions

playerPhysicAttack :: Player -> Enemy -> Enemy
playerPhysicAttack p e = Enemy (hp - physic) (eDamage e)
        where hp = eHP e
              physic = fromIntegral (pDamage p)


playerMagicAttack :: Player -> Enemy -> Enemy
playerMagicAttack p e = Enemy (hp - magic) (eDamage e)
        where hp = eHP e
              magic = fromIntegral (pMagic p)


addXP :: Player -> Player
addXP p = Player hp xp damage magic
        where hp = pHP p
              xp = (pXP p) + 10
              damage = pDamage p
              magic = pMagic p


enemyPhysicAttack :: Enemy -> Player -> Player
enemyPhysicAttack e p = Player (hp - edamage) xp pdamage magic
        where hp = pHP p
              edamage = fromIntegral (eDamage e)
              xp = pXP p
              pdamage = pDamage p
              magic = pMagic p
