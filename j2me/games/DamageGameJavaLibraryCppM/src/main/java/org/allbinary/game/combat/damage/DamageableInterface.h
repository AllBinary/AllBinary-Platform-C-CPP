
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/NamedInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DamageableInterface: public NamedInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void damage(int32_t damage, int32_t damageType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual int32_t getDamage(int32_t damageType) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H
