
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/capital/event/CapitalEventHandlerFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/identification/Group.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/capital/event/CapitalEventHandler.h"


CapitalEventHandlerFactory::CapitalEventHandlerFactory() {
        }
        int32_t CapitalEventHandlerFactory::initResult = CapitalEventHandlerFactory::init();
        auto CapitalEventHandlerFactory::init() -> int32_t {
                    
capitalEventHandlerArray= std::vector<CapitalEventHandler*>(10);
    




                        for (
    int32_t index = CapitalEventHandlerFactory::capitalEventHandlerArray.size() -1;index >= 0; index--)
        {
CapitalEventHandlerFactory::capitalEventHandlerArray[index]= new CapitalEventHandler();
    
}



                    return 0;
        }
                
    auto CapitalEventHandlerFactory::getInstance(Group* groupInterface) -> CapitalEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CapitalEventHandlerFactory::capitalEventHandlerArray[static_cast<int32_t>(groupInterface->getGroupId();)];
    
}


    auto CapitalEventHandlerFactory::removeAll() -> void{




                        for (
    int32_t index = CapitalEventHandlerFactory::capitalEventHandlerArray.size() -1;index >= 0; index--)
        {
CapitalEventHandlerFactory::capitalEventHandlerArray[index]->removeAllListeners();
    
}

}




        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_CPP
