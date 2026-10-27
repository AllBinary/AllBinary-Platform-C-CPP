
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameInitializedEvent::GameInitializedEvent(Object* anyType) : AllBinaryEventObject(anyType), resourceLoadingLevel(ResourceLoadingLevelFactory::getInstance()->LEVEL){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto GameInitializedEvent::setLevel(int32_t level) -> void{
this->level= level;
    
this->resourceLoadingLevel= ResourceLoadingLevelFactory::getInstance()->LEVEL;
    
}


    auto GameInitializedEvent::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    auto GameInitializedEvent::setResourceLoadingLevel(ResourceLoadingLevel* resourceLoadingLevel) -> void{
this->resourceLoadingLevel= resourceLoadingLevel;
    
this->level= this->resourceLoadingLevel->getLevel();
    
}


    auto GameInitializedEvent::getResourceLoadingLevel() -> ResourceLoadingLevel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->resourceLoadingLevel;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_CPP
