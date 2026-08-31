
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: VisibleCellPositionsSingleton = new VisibleCellPositionsSingleton();

    public static VisibleCellPositionsSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VisibleCellPositionsSingleton.instance;
    
}


    private: stationaryVisibleCellPositions: std::vector<std::vector<int16_t>> = NullUtil.getInstance()!.NULL_SHORT_ARRAY_ARRAY;

    private: visibleCellPositions: std::vector<std::vector<int16_t>> = NullUtil.getInstance()!.NULL_SHORT_ARRAY_ARRAY;

    private: currentlyVisibleCellPositions: std::vector<std::vector<int16_t>> = NullUtil.getInstance()!.NULL_SHORT_ARRAY_ARRAY;

    public const ALL_VISIBLE_TILEDLAYER: SimpleTiledLayer = new SimpleTiledLayer(0, 0, 0, 0);

    private: simpleTiledLayer: SimpleTiledLayer = this.ALL_VISIBLE_TILEDLAYER;

    private: paintSimpleTiledLayer: SimpleTiledLayer = this.ALL_VISIBLE_TILEDLAYER;

    private: currentIndex: int32_t= 0;

private constructor (){

            super();
        LocalPlayerBuildingEventHandler.getInstance()!.addListenerInterface(this);
    
ScrollMapEventHandler.getInstance()!.addListenerInterface(this);
    
}


    public init(SimpleTiledLayer simpleTiledLayer){
this.paintSimpleTiledLayer= this.ALL_VISIBLE_TILEDLAYER;
    
this.currentIndex= 0;
    

    rows: int32_t = simpleTiledLayer!.getRows()!;;
    

    columns: int32_t = simpleTiledLayer!.getColumns()!;;
    
this.stationaryVisibleCellPositions= new Array(rows).fill(null).map(() => new Array(columns).fill(0));
    
this.visibleCellPositions= new Array(rows).fill(null).map(() => new Array(columns).fill(0));
    
this.currentlyVisibleCellPositions= new Array(rows).fill(null).map(() => new Array(columns).fill(0));
    
this.setSimpleTiledLayer(simpleTiledLayer);
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public onBuildingEvent(RTSLayerEvent event){
this.paintSimpleTiledLayer= this.simpleTiledLayer;
    
}


                //@Throws(Exception.constructor)
            
    public onMoveEvent(ScrollMapEvent scrollMapEvent){
this.move(scrollMapEvent!.getDx(), scrollMapEvent!.getDy());
    
}


    public addStationaryCellPositions(BasicArrayList list){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    cellPosition: CellPosition = list.get(index) as CellPosition;;
    
this.stationaryVisibleCellPositions[cellPosition!.getRow()]![cellPosition!.getColumn()]++;
    
}

}


    public removeStationaryCellPositions(BasicArrayList list){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    cellPosition: CellPosition = list.get(index) as CellPosition;;
    
this.stationaryVisibleCellPositions[cellPosition!.getRow()]![cellPosition!.getColumn()]--;
    
}

}


    public update(){

                        if(this.currentIndex == 0)
                        
                                    {
                                    
    temp: std::vector<std::vector<int16_t>> = this.currentlyVisibleCellPositions;;
    
this.currentlyVisibleCellPositions= this.visibleCellPositions;
    
this.visibleCellPositions= temp;
    




                        for (
    index: int32_t = this.visibleCellPositions!.length -1;index >= 0; index--)
        {




                        for (
    index2: int32_t = this.visibleCellPositions[0]!.length -1;index2 >= 0; index2--)
        {
this.visibleCellPositions[index]![index2]= this.stationaryVisibleCellPositions[index]![index2]!;
    
}

}


                                    }
                                
this.currentIndex++;
    

                        if(this.currentIndex > 10)
                        
                                    {
                                    this.currentIndex= 0;
    

                                    }
                                
}


    public bool shouldProcess(){

                        if(this.currentIndex == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public addCellPositions(BasicArrayList list){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    cellPosition: CellPosition = list.get(index) as CellPosition;;
    
this.visibleCellPositions[cellPosition!.getRow()]![cellPosition!.getColumn()]++;
    
}

}


    public bool isVisible(CellPosition cellPosition){

                        if(this.visibleCellPositions[cellPosition!.getRow()]![cellPosition!.getColumn()] > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public move(int32_t dx, int32_t dy){
this.getSimpleTiledLayer()!.moveDXY(dx, dy);
    
}


    public paint(Graphics graphics){
this.paintSimpleTiledLayer!.paint(graphics, this.currentlyVisibleCellPositions);
    
}


    setSimpleTiledLayer(SimpleTiledLayer simpleTiledLayer){
this.simpleTiledLayer= simpleTiledLayer;
    
}


    public SimpleTiledLayer getSimpleTiledLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.simpleTiledLayer;
    
}


};

            

