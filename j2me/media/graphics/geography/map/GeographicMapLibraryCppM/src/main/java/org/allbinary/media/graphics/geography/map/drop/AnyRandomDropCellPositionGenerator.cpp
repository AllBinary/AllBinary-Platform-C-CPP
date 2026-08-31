
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
        

    const list: BasicArrayList = new BasicArrayListD();

    geographicMapInterface: any = NullUtil.getInstance()!.NULL_OBJECT;

                //@Throws(Exception.constructor)
            
    public update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface){
this.geographicMapInterface= geographicMapInterface;
    

    basicGeographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    randomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;;
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    total: int32_t = tiledLayer!.getColumns() *tiledLayer!.getRows();;
    

    randomColumn: int32_t= 0;;
    

    randomRow: int32_t= 0;;
    

    geographicMapCellPosition: GeographicMapCellPosition;;
    




                        for (
    index: int32_t = total;--index >= 0; )
        {
randomColumn= randomFactory!.getAbsoluteNextInt(tiledLayer!.getColumns());
    
randomRow= randomFactory!.getAbsoluteNextInt(tiledLayer!.getRows());
    
geographicMapCellPosition= basicGeographicMapCellPositionFactory!.getAt(randomColumn, randomRow);
    

                        if(this.isDropAllowedAt(geographicMapCellPosition))
                        
                                    {
                                    this.list.add(geographicMapCellPosition);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager){
}


};

            

