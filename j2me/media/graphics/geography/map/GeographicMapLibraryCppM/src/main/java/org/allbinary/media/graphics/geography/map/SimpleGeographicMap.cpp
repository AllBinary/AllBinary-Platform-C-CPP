
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
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellTypeFactory.h"
#include "GeographicMapCellType.h"
#include "GeographicMapCellPosition.h"

class SimpleGeographicMap
            : public Object
         {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const id: Integer;

    private: const name: string;

    const cellTypeIdToGeographicMapCellType: std::vector<int32_t>;

    private: const tiledLayer: AllBinaryTiledLayer;

    private: foregroundBasicColor: BasicColor = BasicColorFactory.getInstance()!.NULL_COLOR;

    private: backgroundBasicColor: BasicColor = BasicColorFactory.getInstance()!.NULL_COLOR;

public constructor (Integer id, string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer tiledLayer, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor){

            super();
        this.id= id;
    
this.name= name;
    
this.cellTypeIdToGeographicMapCellType= cellTypeIdToGeographicMapCellType;
    
this.tiledLayer= tiledLayer;
    
this.setBackgroundBasicColor(backgroundBasicColor);
    
this.setForegroundBasicColor(foregroundBasicColor);
    
}


    public Integer getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public reset(){
}


    public AllBinaryTiledLayer getAllBinaryTiledLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayer;
    
}


    private: const geographicMapCellTypeFactory: GeographicMapCellTypeFactory = GeographicMapCellTypeFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public GeographicMapCellType getCellTypeAt(GeographicMapCellPosition cellPosition){

    i_column: int32_t = cellPosition!.getColumn()!;;
    

    i_row: int32_t = cellPosition!.getRow()!;;
    

    cellTypeId: int32_t = this.tiledLayer!.getCell(i_column, i_row)!;;
    

                        if(cellTypeId < 0)
                        
                                    {
                                    cellTypeId= this.tiledLayer!.getAnimatedTile(cellTypeId);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellTypeFactory!.get(this.cellTypeIdToGeographicMapCellType[cellTypeId]!);;
    
}


    public int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cellTypeIdToGeographicMapCellType[cellTypeId]!;
    
}


    public BasicColor getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.foregroundBasicColor;
    
}


    setForegroundBasicColor(BasicColor foregroundBasicColor){
this.foregroundBasicColor= foregroundBasicColor;
    
}


    public BasicColor getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.backgroundBasicColor;
    
}


    setBackgroundBasicColor(BasicColor backgroundBasicColor){
this.backgroundBasicColor= backgroundBasicColor;
    
}


};

            

