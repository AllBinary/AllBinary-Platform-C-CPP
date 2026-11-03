
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/view/StaticTileLayerViewPositionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/ViewPositionFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/view/StaticTileLayerIntoPositionViewPosition.h"


StaticTileLayerViewPositionFactory::StaticTileLayerViewPositionFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto StaticTileLayerViewPositionFactory::getInstance() -> ViewPositionBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StaticTileLayerIntoPositionViewPosition();
    
}




        #endif //ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERVIEWPOSITIONFACTORY_CPP
