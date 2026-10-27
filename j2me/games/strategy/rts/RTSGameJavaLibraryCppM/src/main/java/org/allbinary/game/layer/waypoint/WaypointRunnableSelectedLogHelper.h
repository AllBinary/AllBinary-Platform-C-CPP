
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class PathFindingLayerInterface;
class LogUtil;
class CommonStrings;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointRunnableSelectedLogHelper: public WaypointRunnableLogHelper {

    private: static WaypointRunnableSelectedLogHelper* instanceC_owner();
    private: static WaypointRunnableSelectedLogHelper* instanceC;

    public: static WaypointRunnableSelectedLogHelper* getInstance();


            
    public: WaypointRunnableSelectedLogHelper();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    public: void start(PathFindingLayerInterface* pathFindingLayerInterface);

    public: void end(PathFindingLayerInterface* pathFindingLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h")
#include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"
#endif

        #endif
    
