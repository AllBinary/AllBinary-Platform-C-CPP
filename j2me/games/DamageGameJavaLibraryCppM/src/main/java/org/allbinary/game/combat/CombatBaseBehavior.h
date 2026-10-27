
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DamageableBaseBehavior;
class DestroyableBaseBehavior;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CombatBaseBehavior
            : public virtual Object
         {

    private: static CombatBaseBehavior* NULL_COMBAT_BEHAVIOR_owner();
    public: static CombatBaseBehavior* NULL_COMBAT_BEHAVIOR;

    private: DamageableBaseBehavior* damageableBaseBehavior;

    private: DestroyableBaseBehavior* destroyableBaseBehavior;

    private: bool readyForExplosion= false;

public: CombatBaseBehavior(DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior);

    public: DamageableBaseBehavior* getDamageableBaseBehavior();

    public: DestroyableBaseBehavior* getDestroyableBaseBehavior();

    public: bool isReadyForExplosion();

    public: void setReadyForExplosion(bool readyForExplosion);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/combat/damage/DamageableBaseBehavior.h>)
#include <org/allbinary/game/combat/damage/DamageableBaseBehavior.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h>)
#include <org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h>
#endif

        #endif
    
