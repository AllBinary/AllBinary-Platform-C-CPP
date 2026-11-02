
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/StaticPathGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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
        #include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathCacheFactory.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"


StaticPathGenerator::StaticPathGenerator() : logUtil(LogUtil::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()){
PreLogUtil::put("Using Static Path Finding", this, CommonStrings::getInstance()->CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    auto StaticPathGenerator::init(Object* geographicMapInterface, int32_t totalPaths) -> void{
}


                //@Throws(Exception.constructor)
            
    auto StaticPathGenerator::getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory, BasicArrayList* pathList) -> BasicArrayList*{

    BasicArrayList* list = new BasicArrayListD();;
    

    int32_t size = pathList->size();;
    

    CellPosition* basicGeographicMapCellPosition;;
    

    GeographicMapCellPosition* geographicMapCellPosition;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
basicGeographicMapCellPosition= dynamic_cast<CellPosition*>(pathList->get(index));
    
geographicMapCellPosition= geographicMapCellPositionFactory->getAt(basicGeographicMapCellPosition->getColumn(), basicGeographicMapCellPosition->getRow());
    
list->add(geographicMapCellPosition);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    auto StaticPathGenerator::createList(BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths) -> BasicArrayList*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    PathCacheFactory* pathCacheFactory = PathCacheFactory::getInstance();;
    

    int32_t mapIdInteger = geographicMapInterface->getAllBinaryTiledLayer()->getDataId();;
    

    BasicArrayList* list = pathCacheFactory->getOrCreate(mapIdInteger);;
    

                        if(list == this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    list= new BasicArrayListD();
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    int32_t id = PathData::getInstance()->OFFSET +mapIdInteger;;
    

    BasicArrayList* basicList = pathCacheFactory->getOrCreate(smallIntegerSingletonFactory->getAt(id));;
    

    int32_t size = basicList->size();;
    

    BasicArrayList* pathList;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
pathList= this->getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(geographicMapCellPositionFactory, dynamic_cast<BasicArrayList*>(basicList->get(index)));
    
list->add(pathList);
    
}

pathCacheFactory->add(mapIdInteger, list);
    
pathCacheFactory->remove(smallIntegerSingletonFactory->getAt(id));
    

                                    }
                                
this->logUtil->putF((new StringMaker())->append("Using Cached Path(s): ")->append(StringUtil::getInstance()->toString(list))->toString(), this, commonStrings->GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListD();
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_STATICPATHGENERATOR_CPP
