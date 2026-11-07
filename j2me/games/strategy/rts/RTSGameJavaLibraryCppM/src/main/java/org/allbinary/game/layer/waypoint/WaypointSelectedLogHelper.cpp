
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointSelectedLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"


WaypointSelectedLogHelper::WaypointSelectedLogHelper() : logUtil(LogUtil::getInstance()), commonSeps(CommonSeps::getInstance()), stringUtil(StringUtil::getInstance()) {
        }
        auto WaypointSelectedLogHelper::instanceC_owner() -> WaypointSelectedLogHelper* { static std::unique_ptr<WaypointSelectedLogHelper> value(new WaypointSelectedLogHelper()); return value.get(); }
WaypointSelectedLogHelper* WaypointSelectedLogHelper::instanceC = WaypointSelectedLogHelper::instanceC_owner();

    auto WaypointSelectedLogHelper::getInstance() -> WaypointSelectedLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WaypointSelectedLogHelper::instanceC;
    
}


    auto WaypointSelectedLogHelper::onWaypointEvent(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" onWaypointEvent: ");
    
stringBuffer->append(advancedRTSGameLayer->getName());
    

                        if(advancedRTSGameLayer->getParentLayer() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(" With Parent: ");
    
stringBuffer->append(advancedRTSGameLayer->getParentLayer()->getName());
    

                                    }
                                
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "onWaypointEvent");
    
}


    auto WaypointSelectedLogHelper::addWaypointFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Adding Waypoint: ");
    
stringBuffer->append(advancedRTSGameLayer->getName());
    

                        if(advancedRTSGameLayer->getParentLayer() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(" With Parent: ");
    
stringBuffer->append(advancedRTSGameLayer->getParentLayer()->getName());
    

                                    }
                                
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "selected: onWaypointEvent");
    
}


    auto WaypointSelectedLogHelper::addWaypointFromBuildingList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->append(this->stringUtil->toString(list));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "selected: onWaypointEvent");
    
}


    auto WaypointSelectedLogHelper::insertWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointName);
    
stringBuffer->append(" Insert: ");
    
stringBuffer->append(rtsLayer->getName());
    
stringBuffer->append(" for Waypoint: ");
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "selected: insertWaypoint");
    
}


    auto WaypointSelectedLogHelper::insertWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName, BasicArrayList* list) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointName);
    
stringBuffer->append(" Insert: ");
    
stringBuffer->append(rtsLayer->getName());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->append(this->stringUtil->toString(list));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "selected: insertWaypoint");
    
}


    auto WaypointSelectedLogHelper::setRandomGeographicMapCellHistoryList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) -> void{

    int32_t size = pathsList->size();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->START);
    
stringBuffer->appendint(size);
    
stringBuffer->append(" -> ");
    
stringBuffer->append(this->stringUtil->toString(pathsList));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "selected: setRandomGeographicMapCellHistory");
    
}


    auto WaypointSelectedLogHelper::moveAwayFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Trying to move away from building")), this, "selected: moveAwayFromBuilding");
    
}


    auto WaypointSelectedLogHelper::needToMove(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(unitWaypointBehavior->getMovementLogicAsString())), this, "needToMove");
    
}


    auto WaypointSelectedLogHelper::setRandomGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" pathsList is null")), this, "setRandomGeographicMapCellHistory");
    
}


    auto WaypointSelectedLogHelper::setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition) -> void{

                        if(existingCurrentPathGeographicMapCellPosition == 
                                    nullptr
                                )
                        this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" currentPathGeographicMapCellPosition: ")->append(this->stringUtil->toString(currentPathGeographicMapCellPosition))), this, "setCurrentPathGeographicMapCellPosition");
                                
}


    auto WaypointSelectedLogHelper::setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition) -> void{

                        if(existingNextUnvisitedPathGeographicMapCellPosition != nextUnvisitedPathGeographicMapCellPosition)
                        this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" nextUnvisitedPathGeographicMapCellPosition: ")->append(this->stringUtil->toString(nextUnvisitedPathGeographicMapCellPosition))), this, "setNextUnvisitedPathGeographicMapCellPosition");
                                
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_CPP
