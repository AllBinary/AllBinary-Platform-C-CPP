
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AllBinaryLayer;
class StringMaker;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TrackingEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TrackingEvent: public AllBinaryEventObject {

    private: AllBinaryLayer* layerInterface;

public: TrackingEvent(Object* allBinaryLayerInterface);

    public: void init(Object* anyType);
    public: void init(const std::string& anyType) { return init(JavaString::box(anyType)); }

    public: AllBinaryLayer* getLayerInterface();

    private: void setLayerInterface(AllBinaryLayer* layerInterface);

    public: void setLayerInterfaceForCircularStaticPool(AllBinaryLayer* layerInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/tracking/TrackingEventHandler.h")
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#endif

        #endif
    
