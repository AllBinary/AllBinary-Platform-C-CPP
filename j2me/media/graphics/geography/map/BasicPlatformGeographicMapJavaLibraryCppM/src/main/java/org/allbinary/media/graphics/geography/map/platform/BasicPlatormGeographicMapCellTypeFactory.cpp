
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
        



#include <java/util/Enumeration.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlatormGeographicMapCellType.h"

class BasicPlatormGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    public: BasicPlatormGeographicMapCellType BLOCK_CELL_TYPE;

    public: BasicPlatormGeographicMapCellType JUMP_THRU_CELL_TYPE;

    public: BasicPlatormGeographicMapCellType LADDER_CELL_TYPE;

    private: int32_t maxTileId;

public: BasicPlatormGeographicMapCellTypeFactory(ABHashtable<Object*, Object*> tileTypeToTileIdsMap, int32_t maxTileId){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.START, this, commonStrings.INIT);
    
this->maxTileId= maxTileId;
    
GeographicMapCellType(0, 0);
    

    BasicPlatormGeographicMapCellType BLOCK_CELL_TYPE = BasicPlatormGeographicMapCellType::createType(1);;
    

    BasicPlatormGeographicMapCellType JUMP_THRU_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    BasicPlatormGeographicMapCellType LADDER_CELL_TYPE = BLOCK_CELL_TYPE;;
    

    std::string PLATFORM = "Platform";;
    

    std::string JUMP_TRHU = "JumpThru";;
    

    std::string LADDER = "Ladder";;
    

    Enumeration<Object*> enumeration = tileTypeToTileIdsMap.keys();;
    

    BasicArrayList idsWithTypeList;;
    

    std::string key;;
    

    BasicPlatormGeographicMapCellType basicPlatormGeographicMapCellType;;
    

        while(this->enumerationUtil.hasMoreElements(enumeration))
        {
key= this->enumerationUtil.nextElement(enumeration);
    
this->logUtil.putF(key, this, commonStrings.INIT);
    
idsWithTypeList= tileTypeToTileIdsMap.get(key);
    
basicPlatormGeographicMapCellType= BasicPlatormGeographicMapCellType(idsWithTypeList);
    

                        if(key === PLATFORM)
                        
                                    {
                                    BLOCK_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                

                        if(key === JUMP_TRHU)
                        
                                    {
                                    JUMP_THRU_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                

                        if(key === LADDER)
                        
                                    {
                                    LADDER_CELL_TYPE= basicPlatormGeographicMapCellType;
    

                                    }
                                
}

this->BLOCK_CELL_TYPE= BLOCK_CELL_TYPE;
    
this->JUMP_THRU_CELL_TYPE= JUMP_THRU_CELL_TYPE;
    
this->LADDER_CELL_TYPE= LADDER_CELL_TYPE;
    
GeographicMapCellType(this->maxTileId -1, 0);
    
GeographicMapCellType(this->maxTileId -2, 0);
    
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
                        return 0;
    
}


    public: bool isPath(GeographicMapCellType cellType){

                        if(cellType.getType() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

