
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/PathData.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathGeneratorInterface.h"
#include "PathCacheFactory.h"
#include "PathFindingInfo.h"

class StaticPathGenerator
            : public Object
        : public PathGeneratorInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

protected constructor (){

            super();
        PreLogUtil.put("Using Static Path Finding", this, CommonStrings.getInstance()!.CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    public init(any = {} geographicMapInterface, int32_t totalPaths){
}


                //@Throws(Exception.constructor)
            
    BasicArrayList getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory, BasicArrayList pathList){

    list: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = pathList!.size()!;;
    

    basicGeographicMapCellPosition: CellPosition;;
    

    geographicMapCellPosition: GeographicMapCellPosition;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
basicGeographicMapCellPosition= pathList!.get(index) as CellPosition;
    
geographicMapCellPosition= geographicMapCellPositionFactory!.getAt(basicGeographicMapCellPosition!.getColumn(), basicGeographicMapCellPosition!.getRow());
    
list.add(geographicMapCellPosition);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList createList(BasicGeographicMap geographicMapInterface, GeographicMapCellHistory geographicMapCellHistory, PathFindingInfo pathFindingInfo, int32_t totalPaths){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    pathCacheFactory: PathCacheFactory = PathCacheFactory.getInstance()!;;
    

    mapIdInteger: Integer = geographicMapInterface!.getAllBinaryTiledLayer()!.getDataId()!;;
    

    list: BasicArrayList = pathCacheFactory!.getOrCreate(mapIdInteger)!;;
    

                        if(list == this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    list= new BasicArrayListD();
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    id: int32_t = PathData.getInstance()!.OFFSET +mapIdInteger!.intValue();;
    

    basicList: BasicArrayList = pathCacheFactory!.getOrCreate(smallIntegerSingletonFactory!.getAt(id))!;;
    

    size: int32_t = basicList!.size()!;;
    

    pathList: BasicArrayList;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
pathList= this.getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(geographicMapCellPositionFactory, basicList!.get(index) as BasicArrayList);
    
list.add(pathList);
    
}

pathCacheFactory!.add(mapIdInteger, list);
    
pathCacheFactory!.remove(smallIntegerSingletonFactory!.getAt(id));
    

                                    }
                                
this.logUtil!.putF(new StringMaker().append("Using Cached Path(s): ")!.append(StringUtil.getInstance()!.toString(list))!.toString(), this, commonStrings!.GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListD();
    
}

}


};

            

