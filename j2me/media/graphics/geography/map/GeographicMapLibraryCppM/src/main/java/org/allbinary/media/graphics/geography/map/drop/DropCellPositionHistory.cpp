
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DropCellPositionHistory::DropCellPositionHistory() : cellPositionFactory(CellPositionFactory::getInstance()), positionList(new BasicArrayListD()), layerList(new BasicArrayListD()) {
        }
        auto DropCellPositionHistory::SINGLETON_owner() -> DropCellPositionHistory* { static std::unique_ptr<DropCellPositionHistory> value(new DropCellPositionHistory()); return value.get(); }
DropCellPositionHistory* DropCellPositionHistory::SINGLETON = DropCellPositionHistory::SINGLETON_owner();

    auto DropCellPositionHistory::getInstance() -> DropCellPositionHistory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropCellPositionHistory::SINGLETON;
    
}


    auto DropCellPositionHistory::add(CellPosition* cellPosition, AllBinaryLayer* layerInterface) -> void{
this->positionList->add(cellPosition);
    
this->layerList->add(layerInterface);
    
}


    auto DropCellPositionHistory::addAll(BasicArrayList* list, AllBinaryLayer* layerInterface) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
this->add(dynamic_cast<CellPosition*>(list->get(index)), layerInterface);
    
}

}


    auto DropCellPositionHistory::remove(CellPosition* cellPosition) -> void{

    int32_t index = this->positionList->indexOf(cellPosition);;
    

                        if(index >= 0)
                        
                                    {
                                    this->positionList->removeAt(index);
    
this->layerList->removeAt(index);
    

                                    }
                                
}


    auto DropCellPositionHistory::removeAll(AllBinaryLayer* layerInterface) -> void{

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


    auto DropCellPositionHistory::clear() -> void{
this->positionList->clear();
    
this->layerList->clear();
    
}


    auto DropCellPositionHistory::isCellPositionWithDrop(CellPosition* cellPosition) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->positionList->contains(cellPosition);;
    
}


    auto DropCellPositionHistory::anyCellPositionWithDrop(BasicArrayList* list) -> bool{




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


    auto DropCellPositionHistory::getCellPositionWithDrop(BasicArrayList* list) -> CellPosition*{

    CellPosition* cellPosition;;
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
cellPosition= dynamic_cast<CellPosition*>(list->get(index));
    

                        if(this->isCellPositionWithDrop(cellPosition))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cellPosition;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPositionFactory->NONE;
    
}


    auto DropCellPositionHistory::getLayerInterface(CellPosition* cellPosition) -> AllBinaryLayer*{

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




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_CPP
