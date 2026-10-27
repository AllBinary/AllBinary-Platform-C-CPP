
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"


AdvancedPlayerOwnedRTSLayers::AdvancedPlayerOwnedRTSLayers() : unitsList(new BasicArrayListD()), waypointsList(new BasicArrayListD()), buildingList(new BasicArrayListD()), baseList(new BasicArrayListD()), garrisonList(new BasicArrayListD()), houseList(new BasicArrayListD()), labList(new BasicArrayListD()), factoryList(new BasicArrayListD()) {
        }
        
    auto AdvancedPlayerOwnedRTSLayers::addUnit(RTSLayer* rtsLayer) -> void{
this->unitsList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::addWaypoint(RTSLayer* rtsLayer) -> void{
this->waypointsList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::addBase(RTSLayer* rtsLayer) -> void{
this->baseList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::addGarrison(RTSLayer* rtsLayer) -> void{
this->garrisonList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::addHouse(RTSLayer* rtsLayer) -> void{
this->houseList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::addLab(RTSLayer* rtsLayer) -> void{
this->labList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::addFactory(RTSLayer* rtsLayer) -> void{
this->factoryList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList->add(rtsLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::removeUnit(AllBinaryGameLayer* gameLayer) -> void{
this->unitsList->remove(gameLayer);
    
this->rtsLayerList->remove(gameLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::removeWaypoint(AllBinaryGameLayer* gameLayer) -> void{
this->waypointsList->remove(gameLayer);
    
this->rtsLayerList->remove(gameLayer);
    
}


    auto AdvancedPlayerOwnedRTSLayers::getUnitsList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->unitsList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getWaypointsList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointsList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getBaseList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->baseList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getGarrisonList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->garrisonList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getHouseList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->houseList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getLabList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->labList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getFactoryList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->factoryList;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getTotalBuildings() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->baseList->size() +this->garrisonList->size() +this->houseList->size() +this->labList->size() +this->factoryList->size();
    
}


    auto AdvancedPlayerOwnedRTSLayers::removeBuilding(AllBinaryGameLayer* layerInterface) -> void{
this->buildingList->add(layerInterface);
    

                        if(this->getBaseList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList->remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getFactoryList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList->remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getGarrisonList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList->remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getLabList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList->remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getHouseList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList->remove(layerInterface);
    

                                    }
                                
}


    auto AdvancedPlayerOwnedRTSLayers::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(PlayerOwnedRTSLayers::toString());
    
stringBuffer->append(" Bases: ");
    
stringBuffer->appendint(this->getBaseList()->size());
    
stringBuffer->append(" Factory: ");
    
stringBuffer->appendint(this->getFactoryList()->size());
    
stringBuffer->append(" Garrison: ");
    
stringBuffer->appendint(this->getGarrisonList()->size());
    
stringBuffer->append(" Labs: ");
    
stringBuffer->appendint(this->getLabList()->size());
    
stringBuffer->append(" Houses: ");
    
stringBuffer->appendint(this->getHouseList()->size());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->appendint(this->getWaypointsList()->size());
    
stringBuffer->append(" Units: ");
    
stringBuffer->appendint(this->getUnitsList()->size());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto AdvancedPlayerOwnedRTSLayers::getBuildingList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buildingList;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_CPP
