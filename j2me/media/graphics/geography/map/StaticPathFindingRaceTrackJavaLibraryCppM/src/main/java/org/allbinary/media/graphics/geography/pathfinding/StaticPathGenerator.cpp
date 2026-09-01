
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

protected: StaticPathGenerator(){
PreLogUtil::put("Using Static Path Finding", this, CommonStrings::getInstance().CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    public: void init(Object* geographicMapInterface, int32_t totalPaths){
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory, BasicArrayList pathList){

    BasicArrayList list = BasicArrayListD();;
    

    int32_t size = pathList.size();;
    

    CellPosition basicGeographicMapCellPosition;;
    

    GeographicMapCellPosition geographicMapCellPosition;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
basicGeographicMapCellPosition= pathList.get(index) as CellPosition;
    
geographicMapCellPosition= geographicMapCellPositionFactory.getAt(basicGeographicMapCellPosition.getColumn(), basicGeographicMapCellPosition.getRow());
    
list.add(geographicMapCellPosition);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList createList(BasicGeographicMap geographicMapInterface, GeographicMapCellHistory geographicMapCellHistory, PathFindingInfo pathFindingInfo, int32_t totalPaths){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            
    PathCacheFactory pathCacheFactory = PathCacheFactory::getInstance();;
    

    Integer mapIdInteger = geographicMapInterface->getAllBinaryTiledLayer().getDataId();;
    

    BasicArrayList list = pathCacheFactory.getOrCreate(mapIdInteger);;
    

                        if(list == this->basicArrayListUtil.getImmutableInstance())
                        
                                    {
                                    list= BasicArrayListD();
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    int32_t id = PathData::getInstance().OFFSET +mapIdInteger.intValue();;
    

    BasicArrayList basicList = pathCacheFactory.getOrCreate(smallIntegerSingletonFactory.getAt(id));;
    

    int32_t size = basicList.size();;
    

    BasicArrayList pathList;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
pathList= this->getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(geographicMapCellPositionFactory, basicList.get(index) as BasicArrayList);
    
list.add(pathList);
    
}

pathCacheFactory.add(mapIdInteger, list);
    
pathCacheFactory.remove(smallIntegerSingletonFactory.getAt(id));
    

                                    }
                                
this->logUtil.putF(StringMaker().append("Using Cached Path(s): ").append(StringUtil::getInstance().toString(list)).toString(), this, commonStrings.GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListD();
    
}

}


};

            

