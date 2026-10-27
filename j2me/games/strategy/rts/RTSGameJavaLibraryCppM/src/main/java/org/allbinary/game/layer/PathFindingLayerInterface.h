
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PATHFINDINGLAYERINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_PATHFINDINGLAYERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/destroy/DestroyableInterface.h>
#include <org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#include <org/allbinary/game/layer/waypoint/WaypointLayerInterface.h>
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellPositionAreaBase;
class SelectionHudPaintable;
class RTSLayer2LogHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingLayerInterface: public WaypointLayerInterface, public GameKeyEventSourceInterface, public GroupInterfaceCompositeInterface, public DestroyableInterface {

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getEndGeographicMapCellPositionList() = 0;

    public: virtual bool shouldHandleStartSameAsEnd() = 0;

    public: virtual GeographicMapCellPositionAreaBase* getGeographicMapCellPositionArea() = 0;

    public: virtual SelectionHudPaintable* getHudPaintable() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void handleCost(PathFindingLayerInterface* ownerLayer) = 0;

    public: virtual PathFindingLayerInterface* getParentLayer() = 0;

    public: virtual RTSLayer2LogHelper* getRTSLayer2LogHelper() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setTarget(PathFindingLayerInterface* targetGameLayer) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PATHFINDINGLAYERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PATHFINDINGLAYERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PATHFINDINGLAYERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/combat/destroy/DestroyableInterface.h>)
#include <org/allbinary/game/combat/destroy/DestroyableInterface.h>
#endif
#if __has_include(<org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>)
#include <org/allbinary/game/identification/GroupInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointLayerInterface.h>)
#include <org/allbinary/game/layer/waypoint/WaypointLayerInterface.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h")
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#endif
#if __has_include("org/allbinary/game/layer/SelectionHudPaintable.h")
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer2LogHelper.h")
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#endif

        #endif
    
