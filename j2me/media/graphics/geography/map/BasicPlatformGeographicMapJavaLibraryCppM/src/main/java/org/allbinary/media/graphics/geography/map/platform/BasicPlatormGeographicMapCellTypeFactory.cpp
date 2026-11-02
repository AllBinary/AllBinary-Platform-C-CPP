
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/platform/BasicPlatormGeographicMapCellTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/platform/BasicPlatormGeographicMapCellType.h"


BasicPlatormGeographicMapCellTypeFactory::BasicPlatormGeographicMapCellTypeFactory(ABHashtable<Object*, Object*>* tileTypeToTileIdsMap, int32_t maxTileId) : enumerationUtil(EnumerationUtil::getInstance()){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->INIT);
    
this->maxTileId= maxTileId;
    
new GeographicMapCellType(0, 0);
    

    BasicPlatormGeographicMapCellType* BLOCK_CELL_TYPE = BasicPlatormGeographicMapCellType::createType(1);;
    

    BasicPlatormGeographicMapCellType* JUMP_THRU_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicPlatormGeographicMapCellType* LADDER_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    std::string PLATFORM = "Platform";;
    

    std::string JUMP_TRHU = "JumpThru";;
    

    std::string LADDER = "Ladder";;
    

    Enumeration<Object*>* enumeration = tileTypeToTileIdsMap->keys();;
    

    BasicArrayList* idsWithTypeList;;
    

    std::string key;;
    

    BasicPlatormGeographicMapCellType* basicPlatormGeographicMapCellType;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
key= JavaBoxes::unbox<std::string>(this->enumerationUtil->nextElement(enumeration));
    
this->logUtil->putF(key, this, commonStrings->INIT);
    
idsWithTypeList= dynamic_cast<BasicArrayList*>(tileTypeToTileIdsMap->get(key));
    
basicPlatormGeographicMapCellType= new BasicPlatormGeographicMapCellType(idsWithTypeList);
    

                        if(JavaObjects::equals(key, PLATFORM))
                        
                                    {
                                    BLOCK_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                

                        if(JavaObjects::equals(key, JUMP_TRHU))
                        
                                    {
                                    JUMP_THRU_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                

                        if(JavaObjects::equals(key, LADDER))
                        
                                    {
                                    LADDER_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
}

this->BLOCK_CELL_TYPE= BLOCK_CELL_TYPE;
    
this->JUMP_THRU_CELL_TYPE= JUMP_THRU_CELL_TYPE;
    
this->LADDER_CELL_TYPE= LADDER_CELL_TYPE;
    
new GeographicMapCellType(this->maxTileId -1, 0);
    
new GeographicMapCellType(this->maxTileId -2, 0);
    
}


    auto BasicPlatormGeographicMapCellTypeFactory::getStartType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxTileId -1;
    
}


    auto BasicPlatormGeographicMapCellTypeFactory::getEndType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxTileId -2;
    
}


    auto BasicPlatormGeographicMapCellTypeFactory::getEmptyType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto BasicPlatormGeographicMapCellTypeFactory::isPath(GeographicMapCellType* cellType) -> bool{

                        if(cellType->getType() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_CPP
