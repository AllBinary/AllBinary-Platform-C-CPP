
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/combat/damage/DamageableBaseBehavior.h>

      
#include <org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CombatBaseBehavior
            : public Object
         {

    public: static const CombatBaseBehavior NULL_COMBAT_BEHAVIOR = CombatBaseBehavior(DamageableBaseBehavior::getInstance(), DestroyableBaseBehavior::getInstance());

    private: DamageableBaseBehavior damageableBaseBehavior;

    private: DestroyableBaseBehavior destroyableBaseBehavior;

    private: bool readyForExplosion= false;

public: CombatBaseBehavior(DamageableBaseBehavior damageableBaseBehavior, DestroyableBaseBehavior destroyableBaseBehavior){
this->damageableBaseBehavior= damageableBaseBehavior;
    
this->destroyableBaseBehavior= destroyableBaseBehavior;
    
}


    public: DamageableBaseBehavior getDamageableBaseBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->damageableBaseBehavior;
    
}


    public: DestroyableBaseBehavior getDestroyableBaseBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyableBaseBehavior;
    
}


    public: bool isReadyForExplosion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readyForExplosion;
    
}


    public: void setReadyForExplosion(bool readyForExplosion){
this->readyForExplosion= readyForExplosion;
    
}


};

            

