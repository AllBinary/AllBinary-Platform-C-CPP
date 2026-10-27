
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

class WaypointSelectedLogHelper: public WaypointLogHelper {

    private: static WaypointSelectedLogHelper* instanceC() { static std::unique_ptr<WaypointSelectedLogHelper> value(new WaypointSelectedLogHelper()); return value.get(); }

    public: static WaypointSelectedLogHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointSelectedLogHelper::instanceC();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    public: void onWaypointEvent(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer){

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
                                
this->logUtil->putF(stringBuffer->toString(), this, "onWaypointEvent");
    
}


    public: void addWaypointFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer){

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
                                
this->logUtil->putF(stringBuffer->toString(), this, "selected: onWaypointEvent");
    
}


    public: void addWaypointFromBuildingList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->append(this->stringUtil->toString(list));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: onWaypointEvent");
    
}


    public: void insertWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointName);
    
stringBuffer->append(" Insert: ");
    
stringBuffer->append(rtsLayer->getName());
    
stringBuffer->append(" for Waypoint: ");
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: insertWaypoint");
    
}


    public: void insertWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName, BasicArrayList* list){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(waypointName);
    
stringBuffer->append(" Insert: ");
    
stringBuffer->append(rtsLayer->getName());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->append(this->stringUtil->toString(list));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: insertWaypoint");
    
}


    public: void setRandomGeographicMapCellHistoryList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList){

    int32_t size = pathsList->size();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->START);
    
stringBuffer->appendint(size);
    
stringBuffer->append(" -> ");
    
stringBuffer->append(this->stringUtil->toString(pathsList));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: setRandomGeographicMapCellHistory");
    
}


    public: void moveAwayFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" Trying to move away from building")->toString(), this, "selected: moveAwayFromBuilding");
    
}


    public: void needToMove(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(unitWaypointBehavior->getMovementLogicAsString())->toString(), this, "needToMove");
    
}


    public: void setRandomGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" pathsList is null")->toString(), this, "setRandomGeographicMapCellHistory");
    
}


    public: void setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition){

                        if(existingCurrentPathGeographicMapCellPosition == 
                                    nullptr
                                )
                        this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" currentPathGeographicMapCellPosition: ")->append(this->stringUtil->toString(currentPathGeographicMapCellPosition))->toString(), this, "setCurrentPathGeographicMapCellPosition");
                                
}


    public: void setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition){

                        if(existingNextUnvisitedPathGeographicMapCellPosition != nextUnvisitedPathGeographicMapCellPosition)
                        this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" nextUnvisitedPathGeographicMapCellPosition: ")->append(this->stringUtil->toString(nextUnvisitedPathGeographicMapCellPosition))->toString(), this, "setNextUnvisitedPathGeographicMapCellPosition");
                                
}


};

            

