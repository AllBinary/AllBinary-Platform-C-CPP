
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicAccelerationProperties::BasicAccelerationProperties(int32_t forward, int32_t reverse){
this->setForward(forward);
    
this->setReverse(reverse);
    
}


    auto BasicAccelerationProperties::setReverse(int32_t reverse) -> void{
this->reverse= reverse;
    
}


    auto BasicAccelerationProperties::getReverse() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->reverse;
    
}


    auto BasicAccelerationProperties::setForward(int32_t forward) -> void{
this->forward= forward;
    
}


    auto BasicAccelerationProperties::getForward() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->forward;
    
}




        #endif //ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_CPP
