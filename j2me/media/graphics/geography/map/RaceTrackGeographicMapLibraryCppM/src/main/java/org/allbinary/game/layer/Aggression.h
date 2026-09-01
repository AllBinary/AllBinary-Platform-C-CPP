
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Aggression
            : public Object
         {

    private: Integer ram = SmallIntegerSingletonFactory::getInstance().getAt(0);

    private: Integer projectile = SmallIntegerSingletonFactory::getInstance().getAt(0);

    private: Integer drops = SmallIntegerSingletonFactory::getInstance().getAt(0);

public: Aggression(Integer ram, Integer projectile, Integer drops);

    public: Integer getRam();

    public: void setRam(Integer ram);

    public: Integer getProjectile();

    public: void setProjectile(Integer projectile);

    public: Integer getDrops();

    public: void setDrops(Integer drops);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_AGGRESSION_H
