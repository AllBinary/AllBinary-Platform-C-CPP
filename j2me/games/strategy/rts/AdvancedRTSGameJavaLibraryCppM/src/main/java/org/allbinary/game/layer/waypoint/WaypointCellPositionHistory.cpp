
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

WaypointCellPositionHistory::WaypointCellPositionHistory() : positionList(new BasicArrayListD()), layerList(new BasicArrayListD()) {
        }
        auto WaypointCellPositionHistory::SINGLETON_owner() -> WaypointCellPositionHistory* { static std::unique_ptr<WaypointCellPositionHistory> value(new WaypointCellPositionHistory()); return value.get(); }
WaypointCellPositionHistory* WaypointCellPositionHistory::SINGLETON = WaypointCellPositionHistory::SINGLETON_owner();

    auto WaypointCellPositionHistory::getInstance() -> WaypointCellPositionHistory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WaypointCellPositionHistory::SINGLETON;
    
}


    auto WaypointCellPositionHistory::add(CellPosition* cellPosition, AllBinaryLayer* layerInterface) -> void{
this->positionList->add(cellPosition);
    
this->layerList->add(layerInterface);
    
}


    auto WaypointCellPositionHistory::addList(BasicArrayList* list, AllBinaryLayer* layerInterface) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
this->add(dynamic_cast<CellPosition*>(list->get(index)), layerInterface);
    
}

}


    auto WaypointCellPositionHistory::remove(CellPosition* cellPosition) -> void{

    int32_t index = this->positionList->indexOf(cellPosition);;
    

                        if(index >= 0)
                        
                                    {
                                    this->positionList->removeAt(index);
    
this->layerList->removeAt(index);
    

                                    }
                                
}


    auto WaypointCellPositionHistory::removeLayer(AllBinaryLayer* layerInterface) -> void{

    int32_t index = 0;;
    

        while(index !=  -1)
        {
index= this->layerList->indexOf(layerInterface);
    

                        if(index >= 0)
                        
                                    {
                                    this->positionList->removeAt(index);
    
this->layerList->removeAt(index);
    

                                    }
                                
}

}


    auto WaypointCellPositionHistory::clear() -> void{
this->positionList->clear();
    
this->layerList->clear();
    
}


    auto WaypointCellPositionHistory::isCellPositionWithDrop(CellPosition* cellPosition) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->positionList->contains(cellPosition);;
    
}


    auto WaypointCellPositionHistory::anyCellPositionWithDrop(BasicArrayList* list) -> bool{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

                        if(this->isCellPositionWithDrop(dynamic_cast<CellPosition*>(list->get(index))))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto WaypointCellPositionHistory::getLayerInterface(CellPosition* cellPosition) -> AllBinaryLayer*{

    int32_t index = this->positionList->indexOf(cellPosition);;
    

                        if(index >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AllBinaryLayer*>(this->layerList->get(index));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AllBinaryLayer::NULL_ALLBINARY_LAYER;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_CPP
