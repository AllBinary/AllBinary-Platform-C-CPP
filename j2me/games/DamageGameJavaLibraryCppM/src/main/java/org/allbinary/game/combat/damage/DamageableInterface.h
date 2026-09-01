
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

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/layer/NamedInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DamageableInterface: public NamedInterface {

                //@Throws(Exception.constructor)
            
    void damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    int32_t getDamage(int32_t damageType);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H
