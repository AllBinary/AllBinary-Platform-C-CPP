
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

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlatormGeographicMapCellType.h"

class BasicPlatormGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {
        

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    public const BLOCK_CELL_TYPE: BasicPlatormGeographicMapCellType;

    public const JUMP_THRU_CELL_TYPE: BasicPlatormGeographicMapCellType;

    public const LADDER_CELL_TYPE: BasicPlatormGeographicMapCellType;

    private: const maxTileId: int32_t;

public constructor (Hashtable<any, any> tileTypeToTileIdsMap, int32_t maxTileId){

            super();
        
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, commonStrings!.INIT);
    
this.maxTileId= maxTileId;
    
new GeographicMapCellType(0, 0);
    

    BLOCK_CELL_TYPE: BasicPlatormGeographicMapCellType = BasicPlatormGeographicMapCellType.createType(1)!;;
    

    JUMP_THRU_CELL_TYPE: BasicPlatormGeographicMapCellType = BLOCK_CELL_TYPE;;
    

    LADDER_CELL_TYPE: BasicPlatormGeographicMapCellType = BLOCK_CELL_TYPE;;
    

    PLATFORM: string = "Platform";;
    

    JUMP_TRHU: string = "JumpThru";;
    

    LADDER: string = "Ladder";;
    

    enumeration: Enumeration<any> = tileTypeToTileIdsMap!.keys()!;;
    

    idsWithTypeList: BasicArrayList;;
    

    key: string;;
    

    basicPlatormGeographicMapCellType: BasicPlatormGeographicMapCellType;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
key= this.enumerationUtil!.nextElement(enumeration)! as string;
    
this.logUtil!.putF(key, this, commonStrings!.INIT);
    
idsWithTypeList= tileTypeToTileIdsMap!.get(key) as BasicArrayList;
    
basicPlatormGeographicMapCellType= new BasicPlatormGeographicMapCellType(idsWithTypeList);
    

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

this.BLOCK_CELL_TYPE= BLOCK_CELL_TYPE;
    
this.JUMP_THRU_CELL_TYPE= JUMP_THRU_CELL_TYPE;
    
this.LADDER_CELL_TYPE= LADDER_CELL_TYPE;
    
new GeographicMapCellType(this.maxTileId -1, 0);
    
new GeographicMapCellType(this.maxTileId -2, 0);
    
}


    public int32_t getStartType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxTileId -1;
    
}


    public int32_t getEndType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxTileId -2;
    
}


    public int32_t getEmptyType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public bool isPath(GeographicMapCellType cellType){

                        if(cellType!.getType() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

