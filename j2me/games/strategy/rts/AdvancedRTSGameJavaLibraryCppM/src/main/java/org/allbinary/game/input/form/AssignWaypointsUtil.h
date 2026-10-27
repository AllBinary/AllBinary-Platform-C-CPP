
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AdvancedRTSGameLayer;
class NullPathFindingLayer;
class PathFindingLayerInterface;
class RTSLayer;
class RTSLayerEvent;
class UnitLayer;
class UnitWaypointBehavior;
class BasicArrayList;
class CommonStrings;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PrimaryWaypointHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AssignWaypointsUtil
            : public virtual Object
         {

    private: static AssignWaypointsUtil* instance_owner();
    private: static AssignWaypointsUtil* instance;

    public: static AssignWaypointsUtil* getInstance();


            
    public: AssignWaypointsUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: RTSLayerEvent* WAYPOINT_EVENT;

    public: void set(UnitLayer* unitLayer, AdvancedRTSGameLayer* ownerAdvancedRTSGameLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/NullPathFindingLayer.h>)
#include <org/allbinary/game/layer/NullPathFindingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayerEvent.h>)
#include <org/allbinary/game/layer/RTSLayerEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitLayer.h>)
#include <org/allbinary/game/layer/unit/UnitLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitWaypointBehavior.h>)
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/game/input/form/PrimaryWaypointHelper.h")
#include "org/allbinary/game/input/form/PrimaryWaypointHelper.h"
#endif

        #endif
    
