
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
        



            #include <vector>
        
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
        
class VisibleCellPositionsSingleton
            : public Object
        : public BuildingEventListenerInterface, public ScrollMapEventListenerInterface {

    private: static VisibleCellPositionsSingleton instance() { return VisibleCellPositionsSingleton(); }

    public: static VisibleCellPositionsSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VisibleCellPositionsSingleton::instance();
    
}


    private: std::vector<std::vector<int16_t>> stationaryVisibleCellPositions = NullUtil::getInstance().NULL_SHORT_ARRAY_ARRAY;

    private: std::vector<std::vector<int16_t>> visibleCellPositions = NullUtil::getInstance().NULL_SHORT_ARRAY_ARRAY;

    private: std::vector<std::vector<int16_t>> currentlyVisibleCellPositions = NullUtil::getInstance().NULL_SHORT_ARRAY_ARRAY;

    public: const SimpleTiledLayer ALL_VISIBLE_TILEDLAYER = SimpleTiledLayer(0, 0, 0, 0);

    private: SimpleTiledLayer simpleTiledLayer = this->ALL_VISIBLE_TILEDLAYER;

    private: SimpleTiledLayer paintSimpleTiledLayer = this->ALL_VISIBLE_TILEDLAYER;

    private: int32_t currentIndex= 0;

private: VisibleCellPositionsSingleton(){
LocalPlayerBuildingEventHandler::getInstance().addListenerInterface(this);
    
ScrollMapEventHandler::getInstance().addListenerInterface(this);
    
}


    public: void init(SimpleTiledLayer simpleTiledLayer){
this->paintSimpleTiledLayer= this->ALL_VISIBLE_TILEDLAYER;
    
this->currentIndex= 0;
    

    int32_t rows = simpleTiledLayer.getRows();;
    

    int32_t columns = simpleTiledLayer.getColumns();;
    
this->stationaryVisibleCellPositions= std::vector<std::vector<int16_t>>(rows, std::vector<int16_t>(columns));
    
this->visibleCellPositions= std::vector<std::vector<int16_t>>(rows, std::vector<int16_t>(columns));
    
this->currentlyVisibleCellPositions= std::vector<std::vector<int16_t>>(rows, std::vector<int16_t>(columns));
    
this->setSimpleTiledLayer(simpleTiledLayer);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent event){
this->paintSimpleTiledLayer= this->simpleTiledLayer;
    
}


                //@Throws(Exception.constructor)
            
    public: void onMoveEvent(ScrollMapEvent scrollMapEvent){
this->move(scrollMapEvent.getDx(), scrollMapEvent.getDy());
    
}


    public: void addStationaryCellPositions(BasicArrayList list){




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    CellPosition cellPosition = list.get(index);;
    
this->stationaryVisibleCellPositions[cellPosition.getRow()][cellPosition.getColumn()]++;
    
}

}


    public: void removeStationaryCellPositions(BasicArrayList list){




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    CellPosition cellPosition = list.get(index);;
    
this->stationaryVisibleCellPositions[cellPosition.getRow()][cellPosition.getColumn()]--;
    
}

}


    public: void update(){

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


    public: bool shouldProcess(){

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


    public: void addCellPositions(BasicArrayList list){




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    CellPosition cellPosition = list.get(index);;
    
this->visibleCellPositions[cellPosition.getRow()][cellPosition.getColumn()]++;
    
}

}


    public: bool isVisible(CellPosition cellPosition){

                        if(this->visibleCellPositions[cellPosition.getRow()][cellPosition.getColumn()] > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: void move(int32_t dx, int32_t dy){
this->getSimpleTiledLayer().moveDXY(dx, dy);
    
}


    public: void paint(Graphics graphics){
this->paintSimpleTiledLayer.paint(graphics, this->currentlyVisibleCellPositions);
    
}


    private: void setSimpleTiledLayer(SimpleTiledLayer simpleTiledLayer){
this->simpleTiledLayer= simpleTiledLayer;
    
}


    public: SimpleTiledLayer getSimpleTiledLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->simpleTiledLayer;
    
}


};

            

