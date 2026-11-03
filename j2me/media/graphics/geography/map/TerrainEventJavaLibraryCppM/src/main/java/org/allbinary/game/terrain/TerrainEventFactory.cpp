
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_CPP
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/terrain/TerrainEventFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/terrain/TerrainEvent.h"


TerrainEventFactory::TerrainEventFactory(){
}


    auto TerrainEventFactory::getInstance() -> AllBinaryEventObject*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TerrainEvent(NullUtil::getInstance()->NULL_OBJECT);
    
}




        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_CPP
