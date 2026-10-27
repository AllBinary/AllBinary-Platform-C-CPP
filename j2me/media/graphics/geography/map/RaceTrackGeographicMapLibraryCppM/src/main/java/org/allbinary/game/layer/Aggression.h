
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_AGGRESSION_H
        #define ORG_ALLBINARY_GAME_LAYER_AGGRESSION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Aggression
            : public Object
         {

    private: int32_t ram = SmallIntegerSingletonFactory::getInstance()->getAt(0);

    private: int32_t projectile = SmallIntegerSingletonFactory::getInstance()->getAt(0);

    private: int32_t drops = SmallIntegerSingletonFactory::getInstance()->getAt(0);

public: Aggression(int32_t ram, int32_t projectile, int32_t drops);

    public: int32_t getRam();

    public: void setRam(int32_t ram);

    public: int32_t getProjectile();

    public: void setProjectile(int32_t projectile);

    public: int32_t getDrops();

    public: void setDrops(int32_t drops);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_AGGRESSION_H
