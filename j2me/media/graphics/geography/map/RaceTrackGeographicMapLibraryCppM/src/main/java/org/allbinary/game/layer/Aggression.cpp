
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

public: Aggression(int32_t ram, int32_t projectile, int32_t drops){
this->setRam(ram);
    
this->setProjectile(projectile);
    
this->setDrops(drops);
    
}


    public: int32_t getRam(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ram;
    
}


    public: void setRam(int32_t ram){
this->ram= ram;
    
}


    public: int32_t getProjectile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->projectile;
    
}


    public: void setProjectile(int32_t projectile){
this->projectile= projectile;
    
}


    public: int32_t getDrops(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drops;
    
}


    public: void setDrops(int32_t drops){
this->drops= drops;
    
}


};

            

