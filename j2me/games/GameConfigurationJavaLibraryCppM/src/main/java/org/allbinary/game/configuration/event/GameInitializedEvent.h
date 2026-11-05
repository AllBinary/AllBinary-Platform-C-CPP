
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ResourceLoadingLevel;
class ResourceLoadingLevelFactory;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInitializedEvent: public AllBinaryEventObject {

    private: ResourceLoadingLevel* resourceLoadingLevel;

    private: int32_t level= 0;

public: GameInitializedEvent(Object* anyType);
public: GameInitializedEvent(const std::string& anyType) : GameInitializedEvent(JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> GameInitializedEvent(BoxValue anyType) : GameInitializedEvent(JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> GameInitializedEvent(const std::vector<BoxElement>& anyType) : GameInitializedEvent(JavaBoxes::toObject(anyType)) { }

    public: void setLevel(int32_t level);

    public: int32_t getLevel();

    public: void setResourceLoadingLevel(ResourceLoadingLevel* resourceLoadingLevel);

    public: ResourceLoadingLevel* getResourceLoadingLevel();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_GAMEINITIALIZEDEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/resource/ResourceLoadingLevel.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
