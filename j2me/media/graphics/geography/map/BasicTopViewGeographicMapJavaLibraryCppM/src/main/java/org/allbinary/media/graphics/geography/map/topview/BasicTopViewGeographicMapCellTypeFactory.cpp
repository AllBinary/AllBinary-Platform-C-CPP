
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
        



            #include <vector>
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTopViewGeographicMapCellType.h"
#include "BasicTopViewGeographicMapStrings.h"

class BasicTopViewGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    public: BasicTopViewGeographicMapCellType BLOCK_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType OFF_MAP_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType FLOOR_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType DOOR_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType STAIRS_UP_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType STAIRS_DOWN_CELL_TYPE;

    public: BasicTopViewGeographicMapCellType OTHER_CELL_TYPE;

    private: int32_t maxTileId;

public: BasicTopViewGeographicMapCellTypeFactory(ABHashtable<Object*, Object*> tileTypeToTileIdsMap, int32_t maxTileId){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.START, this, commonStrings.CONSTRUCTOR);
    
this->maxTileId= maxTileId;
    

    BasicTopViewGeographicMapStrings basicTopViewGeographicMapStrings = BasicTopViewGeographicMapStrings::getInstance();;
    

    GeographicMapCellTypeFactory geographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();;
    

    std::vector<GeographicMapCellType> geographicMapCellTypeArray = geographicMapCellTypeFactory.getGeographicMapCellTypeArray();;
    

    int32_t type = 0;;
    

                        if(geographicMapCellTypeArray[type] == 
                                    nullptr
                                )
                        
                                    {
                                    RaceTrackGeographicMapCellType(CommonStrings::getInstance().UNKNOWN, type, 999, 0);
    

                                    }
                                
                        else {
                            
                        }
                            

    BasicTopViewGeographicMapCellType BLOCK_CELL_TYPE = BasicTopViewGeographicMapCellType::createType(basicTopViewGeographicMapStrings.DEFAULT, 1, 1);;
    

    BasicTopViewGeographicMapCellType OFF_MAP_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType FLOOR_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType DOOR_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType STAIRS_UP_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType STAIRS_DOWN_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicTopViewGeographicMapCellType OTHER_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    std::vector<Object*> keyArray = HashtableUtil::getInstance().getKeysAsArray(tileTypeToTileIdsMap);;
    

    int32_t size = keyArray.size();;
    

    BasicArrayList idsWithTypeList;;
    

    std::string key;;
    

    BasicTopViewGeographicMapCellType basicPlatormGeographicMapCellType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
key= keyArray[index];
    
idsWithTypeList= tileTypeToTileIdsMap.get(key);
    

                        if(key === basicTopViewGeographicMapStrings.WALL)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.WALL, idsWithTypeList, 1000);
    
BLOCK_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(key === basicTopViewGeographicMapStrings.OFF_MAP)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.OFF_MAP, idsWithTypeList, 1001);
    
OFF_MAP_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(key === basicTopViewGeographicMapStrings.FLOOR)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.FLOOR, idsWithTypeList, 1);
    
FLOOR_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(key === basicTopViewGeographicMapStrings.DOOR)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.DOOR, idsWithTypeList, 1);
    
DOOR_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(key === basicTopViewGeographicMapStrings.STAIRS_UP)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.STAIRS_UP, idsWithTypeList, 1);
    
STAIRS_UP_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(key === basicTopViewGeographicMapStrings.STAIRS_DOWN)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.STAIRS_DOWN, idsWithTypeList, 1);
    
STAIRS_DOWN_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
                             else 
                        if(key === basicTopViewGeographicMapStrings.OTHER)
                        
                                    {
                                    basicPlatormGeographicMapCellType= BasicTopViewGeographicMapCellType(basicTopViewGeographicMapStrings.OTHER, idsWithTypeList, 1);
    
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
                                    RaceTrackGeographicMapCellType(commonStrings.START, type, 1, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
type= this->maxTileId -2;
    

                        if(geographicMapCellTypeArray[type] == 
                                    nullptr
                                )
                        
                                    {
                                    RaceTrackGeographicMapCellType(commonStrings.START, type, 1, 0);
    

                                    }
                                
                        else {
                            
                        }
                            
}


    public: int32_t getStartType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxTileId -1;
    
}


    public: int32_t getEndType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxTileId -2;
    
}


    public: int32_t getEmptyType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->FLOOR_CELL_TYPE.getTypes()[0];
    
}


    public: bool isPath(GeographicMapCellType cellType){

                        if(this->FLOOR_CELL_TYPE.isType(cellType))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append("key: WALL/BLOCK_CELL_TYPE: ").append(this->BLOCK_CELL_TYPE.toString()).append("key: FLOOR_CELL_TYPE: ").append(this->FLOOR_CELL_TYPE.toString()).append("key: OTHER_CELL_TYPE: ").append(this->OTHER_CELL_TYPE.toString()).append("key: OFF_MAP_CELL_TYPE: ").append(this->OFF_MAP_CELL_TYPE.toString()).append("key: DOOR_CELL_TYPE: ").append(this->DOOR_CELL_TYPE.toString()).append("key: STAIRS_DOWN_CELL_TYPE: ").append(this->STAIRS_DOWN_CELL_TYPE.toString()).append("key: STAIRS_UP_CELL_TYPE: ").append(this->STAIRS_UP_CELL_TYPE.toString()).toString();;
    
}


};

            

