
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"


BasicGeographicMapUtil::BasicGeographicMapUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto BasicGeographicMapUtil::instance_owner() -> BasicGeographicMapUtil* { static std::unique_ptr<BasicGeographicMapUtil> value(new BasicGeographicMapUtil()); return value.get(); }
BasicGeographicMapUtil* BasicGeographicMapUtil::instance = BasicGeographicMapUtil::instance_owner();

    auto BasicGeographicMapUtil::getInstance() -> BasicGeographicMapUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGeographicMapUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapUtil::getBorderingRow(int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition) -> int32_t{

    int32_t LOCATION_CHANGE = 1;;
    



        switch (direction) {
            case 0: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getRow();;
    
}
case 1: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getRow();;
    
}
case 2: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getRow() +LOCATION_CHANGE;
    
}
case 3: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getRow() -LOCATION_CHANGE;
    
}
default: {


                            throw Exception("Only Four Directions");
                    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapUtil::getBorderingColumn(int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition) -> int32_t{

    int32_t LOCATION_CHANGE = 1;;
    



        switch (direction) {
            case 0: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getColumn() -LOCATION_CHANGE;
    
}
case 1: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getColumn() +LOCATION_CHANGE;
    
}
case 2: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getColumn();;
    
}
case 3: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition->getColumn();;
    
}
default: {


                            throw Exception("Only Four Directions");
                    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapUtil::isSameCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) -> bool{

    int32_t fromColumn = fromGeographicMapCellPosition->getColumn();;
    

    int32_t fromRow = fromGeographicMapCellPosition->getRow();;
    

    int32_t goColumn = toGeographicMapCellPosition->getColumn();;
    

    int32_t goRow = toGeographicMapCellPosition->getRow();;
    

                        if(fromColumn == goColumn && fromRow == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto BasicGeographicMapUtil::createAllBinaryTiledLayerArray(std::vector<BasicGeographicMap*> geographicMapInterfaceArray) -> std::vector<Layer*>{

    std::vector<Layer*> tiledLayerArray = std::vector<Layer*>(geographicMapInterfaceArray.length);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getAllBinaryTiledLayerArray(geographicMapInterfaceArray, tiledLayerArray, 0);;
    
}


    auto BasicGeographicMapUtil::getAllBinaryTiledLayerArray(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<Layer*> tiledLayerArray, int32_t startIndex) -> std::vector<Layer*>{

    BasicGeographicMap* geographicMapInterface;;
    

    int32_t size = geographicMapInterfaceArray.size();;
    

    int32_t count = 0;;
    




                        for (
    int32_t index = size +startIndex;--index >= startIndex; )
        {
geographicMapInterface= geographicMapInterfaceArray[index];
    
tiledLayerArray[count++]= geographicMapInterface->getAllBinaryTiledLayer();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tiledLayerArray;
    
}


    auto BasicGeographicMapUtil::move(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t dx, int32_t dy) -> void{

    BasicGeographicMap* geographicMapInterface;;
    

    int32_t size = geographicMapInterfaceArray.size();;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
geographicMapInterface= geographicMapInterfaceArray[index];
    
geographicMapInterface->getAllBinaryTiledLayer()->moveDXY(dx, dy);
    
}

}


    auto BasicGeographicMapUtil::setPosition(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y) -> void{

    BasicGeographicMap* geographicMapInterface;;
    

    int32_t size = geographicMapInterfaceArray.size();;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
geographicMapInterface= geographicMapInterfaceArray[index];
    
geographicMapInterface->getAllBinaryTiledLayer()->setPosition(x, y, geographicMapInterface->getAllBinaryTiledLayer()->getZP());
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_CPP
