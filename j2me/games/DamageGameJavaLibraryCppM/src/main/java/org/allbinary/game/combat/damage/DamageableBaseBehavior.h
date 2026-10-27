
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/damage/DamageableInterface.h"

class DamageableBaseBehavior
            : public Object
        , public DamageableInterface {

    private: static DamageableBaseBehavior* instance() { static std::unique_ptr<DamageableBaseBehavior> value(new DamageableBaseBehavior()); return value.get(); }

    public: static DamageableBaseBehavior* getInstance();

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_H
