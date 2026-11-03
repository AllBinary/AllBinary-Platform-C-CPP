
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/IconLayer.h"


IconLayerFactory::IconLayerFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto IconLayerFactory::getInstance(Animation* animationInterface, int32_t width, int32_t height) -> IconLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new IconLayer(animationInterface, width, height);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_ICONLAYERFACTORY_CPP
