
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseDropCellPositionGenerator.h"

class AnyRandomDropCellPositionGenerator: public BaseDropCellPositionGenerator {

    protected: const BasicArrayList list = BasicArrayListD();

    protected: Object* geographicMapInterface = NullUtil::getInstance().NULL_OBJECT;

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface){
this->geographicMapInterface= geographicMapInterface;
    

    BasicGeographicMapCellPositionFactory basicGeographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    MyRandomFactory randomFactory = MyRandomFactory::getInstance();;
    

    AllBinaryTiledLayer tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    int32_t total = tiledLayer.getColumns() *tiledLayer.getRows();;
    

    int32_t randomColumn= 0;;
    

    int32_t randomRow= 0;;
    

    GeographicMapCellPosition geographicMapCellPosition;;
    




                        for (
    int32_t index = total;--index >= 0; )
        {
randomColumn= randomFactory.getAbsoluteNextInt(tiledLayer.getColumns());
    
randomRow= randomFactory.getAbsoluteNextInt(tiledLayer.getRows());
    
geographicMapCellPosition= basicGeographicMapCellPositionFactory.getAt(randomColumn, randomRow);
    

                        if(this->isDropAllowedAt(geographicMapCellPosition))
                        
                                    {
                                    this->list.add(geographicMapCellPosition);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){
}


};

            

