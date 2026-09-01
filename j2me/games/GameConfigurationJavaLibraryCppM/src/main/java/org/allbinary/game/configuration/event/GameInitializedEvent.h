
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInitializedEvent: public AllBinaryEventObject {

    private: ResourceLoadingLevel resourceLoadingLevel = ResourceLoadingLevelFactory::getInstance().LEVEL;

    private: int32_t level= 0;

public: GameInitializedEvent(Object* anyType);

    public: void setLevel(int32_t level);

    public: int32_t getLevel();

    public: void setResourceLoadingLevel(ResourceLoadingLevel resourceLoadingLevel);

    public: ResourceLoadingLevel getResourceLoadingLevel();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H
