
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/combat/damage/DamageableBaseBehavior.h>

      
#include <org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CombatBaseBehavior
            : public Object
         {
        

    public static const NULL_COMBAT_BEHAVIOR: CombatBaseBehavior = new CombatBaseBehavior(DamageableBaseBehavior.getInstance(), DestroyableBaseBehavior.getInstance());

    private: const damageableBaseBehavior: DamageableBaseBehavior;

    private: const destroyableBaseBehavior: DestroyableBaseBehavior;

    private: readyForExplosion: bool= false;

public constructor (DamageableBaseBehavior damageableBaseBehavior, DestroyableBaseBehavior destroyableBaseBehavior);

    public DamageableBaseBehavior getDamageableBaseBehavior();

    public DestroyableBaseBehavior getDestroyableBaseBehavior();

    public bool isReadyForExplosion();

    public setReadyForExplosion(bool readyForExplosion);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H
