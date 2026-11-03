
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEGAMEINPUTMAPPING_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEGAMEINPUTMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/MotionJ2MEGameInputMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/J2MEGameInputMapping.h"
#include "org/allbinary/game/input/MotionJ2MEDefaultGameInputMapping.h"


MotionJ2MEGameInputMapping::MotionJ2MEGameInputMapping() {
        }
        
    auto MotionJ2MEGameInputMapping::getDefault() -> InputToGameKeyMapping*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new MotionJ2MEDefaultGameInputMapping())->getInputMapping();;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MOTIONJ2MEGAMEINPUTMAPPING_CPP
