
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/VisibleCellPositionsSingleton.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/game/SimpleTiledLayer.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/event/ScrollMapEvent.h>

      
#include <org/allbinary/layer/event/ScrollMapEventHandler.h>

      
#include <org/allbinary/layer/event/ScrollMapEventListenerInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto VisibleCellPositionsSingleton::instance_owner() -> VisibleCellPositionsSingleton* { static std::unique_ptr<VisibleCellPositionsSingleton> value(new VisibleCellPositionsSingleton()); return value.get(); }
VisibleCellPositionsSingleton* VisibleCellPositionsSingleton::instance = VisibleCellPositionsSingleton::instance_owner();

    auto VisibleCellPositionsSingleton::getInstance() -> VisibleCellPositionsSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return VisibleCellPositionsSingleton::instance;
    
}


VisibleCellPositionsSingleton::VisibleCellPositionsSingleton() : stationaryVisibleCellPositions(NullUtil::getInstance()->NULL_SHORT_ARRAY_ARRAY), visibleCellPositions(NullUtil::getInstance()->NULL_SHORT_ARRAY_ARRAY), currentlyVisibleCellPositions(NullUtil::getInstance()->NULL_SHORT_ARRAY_ARRAY), ALL_VISIBLE_TILEDLAYER(new SimpleTiledLayer(0, 0, 0, 0)), simpleTiledLayer(this->ALL_VISIBLE_TILEDLAYER), paintSimpleTiledLayer(this->ALL_VISIBLE_TILEDLAYER){
LocalPlayerBuildingEventHandler::getInstance()->addListenerInterface(this);
    
ScrollMapEventHandler::getInstance()->addListenerInterface(this);
    
}


    auto VisibleCellPositionsSingleton::init(SimpleTiledLayer* simpleTiledLayer) -> void{
this->paintSimpleTiledLayer= this->ALL_VISIBLE_TILEDLAYER;
    
this->currentIndex= 0;
    

    int32_t rows = simpleTiledLayer->getRows();;
    

    int32_t columns = simpleTiledLayer->getColumns();;
    
this->stationaryVisibleCellPositions= std::vector<std::vector<int16_t>>(rows, std::vector<int16_t>(columns));
    
this->visibleCellPositions= std::vector<std::vector<int16_t>>(rows, std::vector<int16_t>(columns));
    
this->currentlyVisibleCellPositions= std::vector<std::vector<int16_t>>(rows, std::vector<int16_t>(columns));
    
this->setSimpleTiledLayer(simpleTiledLayer);
    
}


    auto VisibleCellPositionsSingleton::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto VisibleCellPositionsSingleton::onBuildingEvent(RTSLayerEvent* event) -> void{
this->paintSimpleTiledLayer= this->simpleTiledLayer;
    
}


                //@Throws(Exception.constructor)
            
    auto VisibleCellPositionsSingleton::onMoveEvent(ScrollMapEvent* scrollMapEvent) -> void{
this->move(scrollMapEvent->getDx(), scrollMapEvent->getDy());
    
}


    auto VisibleCellPositionsSingleton::addStationaryCellPositions(BasicArrayList* list) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    CellPosition* cellPosition = dynamic_cast<CellPosition*>(list->get(index));;
    
this->stationaryVisibleCellPositions[cellPosition->getRow()][cellPosition->getColumn()]++;
    
}

}


    auto VisibleCellPositionsSingleton::removeStationaryCellPositions(BasicArrayList* list) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    CellPosition* cellPosition = dynamic_cast<CellPosition*>(list->get(index));;
    
this->stationaryVisibleCellPositions[cellPosition->getRow()][cellPosition->getColumn()]--;
    
}

}


    auto VisibleCellPositionsSingleton::update() -> void{

                        if(this->currentIndex == 0)
                        
                                    {
                                    
    std::vector<std::vector<int16_t>> temp = this->currentlyVisibleCellPositions;;
    
this->currentlyVisibleCellPositions= this->visibleCellPositions;
    
this->visibleCellPositions= temp;
    




                        for (
    int32_t index = this->visibleCellPositions.size() -1;index >= 0; index--)
        {




                        for (
    int32_t index2 = this->visibleCellPositions[0].size() -1;index2 >= 0; index2--)
        {
this->visibleCellPositions[index][index2]= this->stationaryVisibleCellPositions[index][index2];
    
}

}


                                    }
                                
this->currentIndex++;
    

                        if(this->currentIndex > 10)
                        
                                    {
                                    this->currentIndex= 0;
    

                                    }
                                
}


    auto VisibleCellPositionsSingleton::shouldProcess() -> bool{

                        if(this->currentIndex == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto VisibleCellPositionsSingleton::addCellPositions(BasicArrayList* list) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    CellPosition* cellPosition = dynamic_cast<CellPosition*>(list->get(index));;
    
this->visibleCellPositions[cellPosition->getRow()][cellPosition->getColumn()]++;
    
}

}


    auto VisibleCellPositionsSingleton::isVisible(CellPosition* cellPosition) -> bool{

                        if(this->visibleCellPositions[cellPosition->getRow()][cellPosition->getColumn()] > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto VisibleCellPositionsSingleton::move(int32_t dx, int32_t dy) -> void{
this->getSimpleTiledLayer()->moveDXY(dx, dy);
    
}


    auto VisibleCellPositionsSingleton::paint(Graphics* graphics) -> void{
this->paintSimpleTiledLayer->paint(graphics, this->currentlyVisibleCellPositions);
    
}


    auto VisibleCellPositionsSingleton::setSimpleTiledLayer(SimpleTiledLayer* simpleTiledLayer) -> void{
this->simpleTiledLayer= simpleTiledLayer;
    
}


    auto VisibleCellPositionsSingleton::getSimpleTiledLayer() -> SimpleTiledLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->simpleTiledLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_VISIBLECELLPOSITIONSSINGLETON_CPP
