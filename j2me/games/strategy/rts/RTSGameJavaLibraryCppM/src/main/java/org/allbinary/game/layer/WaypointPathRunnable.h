
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class LogUtil;
class CommonStrings;
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
class WaypointBehaviorBase;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointPathRunnable: public WaypointPathRunnableBase {

    /*protected*/ public: LogUtil* logUtil;

public: WaypointPathRunnable();

    public: void run();

    public: bool isDone();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include("org/allbinary/game/layer/WaypointPathRunnableBase.h")
#include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
#endif
#if __has_include("org/allbinary/game/layer/WaypointBehaviorBase.h")
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#endif

        #endif
    
