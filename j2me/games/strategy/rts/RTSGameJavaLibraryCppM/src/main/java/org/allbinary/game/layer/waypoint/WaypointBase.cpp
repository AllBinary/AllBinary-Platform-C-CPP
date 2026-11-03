
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/NoSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto WaypointBase::NULL_WAYPOINT_BASE_owner() -> WaypointBase* { static std::unique_ptr<WaypointBase> value(new WaypointBase(NoSound::getInstance())); return value.get(); }
WaypointBase* WaypointBase::NULL_WAYPOINT_BASE = WaypointBase::NULL_WAYPOINT_BASE_owner();

WaypointBase::WaypointBase(Sound* sound) : connectedWaypointList(new BasicArrayListD()), allBinaryGameLayerManagerP(AllBinaryGameLayerManager::getNullInstance()){
this->sound= sound;
    
}


    auto WaypointBase::getSound() -> Sound*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sound;
    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBase::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
this->allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    
}


    auto WaypointBase::getConnectedWaypointList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->connectedWaypointList;
    
}


    auto WaypointBase::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBase::getPathFindingInfo(GeographicMapCellPosition* geographicMapCellPosition) -> PathFindingInfo*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBase::getPathsList(GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBase::getPathsListRunnable(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBase::getPathsListFromCacheOnly(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto WaypointBase::visit(PathFindingLayerInterface* unitLayer) -> void{
}


    auto WaypointBase::reset() -> void{
}


    auto WaypointBase::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTBASE_CPP
