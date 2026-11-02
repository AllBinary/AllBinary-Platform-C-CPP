
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellTypeFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapStrings.h"


BasicTopViewGeographicMapCellTypeFactory::BasicTopViewGeographicMapCellTypeFactory(ABHashtable<Object*, Object*>* tileTypeToTileIdsMap, int32_t maxTileId){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    
this->maxTileId= maxTileId;
    

    BasicTopViewGeographicMapStrings* basicTopViewGeographicMapStrings = BasicTopViewGeographicMapStrings::getInstance();;
    

    GeographicMapCellTypeFactory* geographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();;
    

    std::vector<GeographicMapCellType*> geographicMapCellTypeArray = geographicMapCellTypeFactory->getGeographicMapCellTypeArray();;
    

    int32_t type = 0;;
    

                        if(geographicMapCellTypeArray[type] == 
                                    nullptr
                                )
                        
                                    {
                                    new RaceTrackGeographicMapCellType(CommonStrings::getInstance()->UNKNOWN, type, 999, 0);
    

                                    }
                                
                        else {
                            
                        }
                            

    BasicTopViewGeographicMapCellType* BLOCK_CELL_TYPE = BasicTopViewGeographicMapCellType::createType(basicTopViewGeographicMapStrings->DEFAULT, 1, 1);;
    

    BasicTopViewGeographicMapCellType* OFF_MAP_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType* FLOOR_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType* DOOR_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType* STAIRS_UP_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType* STAIRS_DOWN_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType* OTHER_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    std::vector<Object*> keyArray = HashtableUtil::getInstance()->getKeysAsArray(tileTypeToTileIdsMap);;
    

    int32_t size = keyArray.size();;
    

    BasicArrayList* idsWithTypeList;;
    

    std::string key;;
    

    BasicTopViewGeographicMapCellType* basicPlatormGeographicMapCellType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
key= JavaBoxes::unbox<std::string>(keyArray[index]);
    
idsWithTypeList= dynamic_cast<BasicArrayList*>(tileTypeToTileIdsMap->get(key));
    

                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->WALL))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->WALL, idsWithTypeList, 1000);
    
BLOCK_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->OFF_MAP))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->OFF_MAP, idsWithTypeList, 1001);
    
OFF_MAP_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->FLOOR))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->FLOOR, idsWithTypeList, 1);
    
FLOOR_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->DOOR))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->DOOR, idsWithTypeList, 1);
    
DOOR_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->STAIRS_UP))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->STAIRS_UP, idsWithTypeList, 1);
    
STAIRS_UP_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->STAIRS_DOWN))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->STAIRS_DOWN, idsWithTypeList, 1);
    
STAIRS_DOWN_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(key, basicTopViewGeographicMapStrings->OTHER))
                        
                                    {
                                    basicPlatormGeographicMapCellType= new BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings->OTHER, idsWithTypeList, 1);
    
OTHER_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
}

this->BLOCK_CELL_TYPE= BLOCK_CELL_TYPE;
    
this->OFF_MAP_CELL_TYPE= OFF_MAP_CELL_TYPE;
    
this->FLOOR_CELL_TYPE= FLOOR_CELL_TYPE;
    
this->DOOR_CELL_TYPE= DOOR_CELL_TYPE;
    
this->STAIRS_UP_CELL_TYPE= STAIRS_UP_CELL_TYPE;
    
this->STAIRS_DOWN_CELL_TYPE= STAIRS_DOWN_CELL_TYPE;
    
this->OTHER_CELL_TYPE= OTHER_CELL_TYPE;
    
type= this->maxTileId -1;
    

                        if(geographicMapCellTypeArray[type] == 
                                    nullptr
                                )
                        
                                    {
                                    new RaceTrackGeographicMapCellType(commonStrings->START, type, 1, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
type= this->maxTileId -2;
    

                        if(geographicMapCellTypeArray[type] == 
                                    nullptr
                                )
                        
                                    {
                                    new RaceTrackGeographicMapCellType(commonStrings->START, type, 1, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
}


    auto BasicTopViewGeographicMapCellTypeFactory::getStartType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxTileId -1;
    
}


    auto BasicTopViewGeographicMapCellTypeFactory::getEndType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxTileId -2;
    
}


    auto BasicTopViewGeographicMapCellTypeFactory::getEmptyType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->FLOOR_CELL_TYPE->getTypes()[0];
    
}


    auto BasicTopViewGeographicMapCellTypeFactory::isPath(GeographicMapCellType* cellType) -> bool{

                        if(this->FLOOR_CELL_TYPE->isType(cellType))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto BasicTopViewGeographicMapCellTypeFactory::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("key: WALL/BLOCK_CELL_TYPE: ")->append(this->BLOCK_CELL_TYPE->toString())->append("key: FLOOR_CELL_TYPE: ")->append(this->FLOOR_CELL_TYPE->toString())->append("key: OTHER_CELL_TYPE: ")->append(this->OTHER_CELL_TYPE->toString())->append("key: OFF_MAP_CELL_TYPE: ")->append(this->OFF_MAP_CELL_TYPE->toString())->append("key: DOOR_CELL_TYPE: ")->append(this->DOOR_CELL_TYPE->toString())->append("key: STAIRS_DOWN_CELL_TYPE: ")->append(this->STAIRS_DOWN_CELL_TYPE->toString())->append("key: STAIRS_UP_CELL_TYPE: ")->append(this->STAIRS_UP_CELL_TYPE->toString())->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPEFACTORY_CPP
