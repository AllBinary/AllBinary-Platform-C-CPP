
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
        



            #include <vector>
        
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

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Integer id;

    private: std::string name;

    protected: std::vector<int32_t> cellTypeIdToGeographicMapCellType;

    private: AllBinaryTiledLayer tiledLayer;

    private: BasicColor foregroundBasicColor = BasicColorFactory::getInstance().NULL_COLOR;

    private: BasicColor backgroundBasicColor = BasicColorFactory::getInstance().NULL_COLOR;

public: SimpleGeographicMap(Integer id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer tiledLayer, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor){
this->id= id;
    
this->name= name;
    
this->cellTypeIdToGeographicMapCellType= cellTypeIdToGeographicMapCellType;
    
this->tiledLayer= tiledLayer;
    
this->setBackgroundBasicColor(backgroundBasicColor);
    
this->setForegroundBasicColor(foregroundBasicColor);
    
}


    public: Integer getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void reset(){
}


    public: AllBinaryTiledLayer getAllBinaryTiledLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer;
    
}


    private: const GeographicMapCellTypeFactory geographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType getCellTypeAt(GeographicMapCellPosition cellPosition){

    int32_t i_column = cellPosition.getColumn();;
    

    int32_t i_row = cellPosition.getRow();;
    

    int32_t cellTypeId = this->tiledLayer.getCell(i_column, i_row);;
    

                        if(cellTypeId < 0)
                        
                                    {
                                    cellTypeId= this->tiledLayer.getAnimatedTile(cellTypeId);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellTypeFactory.get(this->cellTypeIdToGeographicMapCellType[cellTypeId]!);;
    
}


    public: int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellTypeIdToGeographicMapCellType[cellTypeId]!;
    
}


    public: BasicColor getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->foregroundBasicColor;
    
}


    private: void setForegroundBasicColor(BasicColor foregroundBasicColor){
this->foregroundBasicColor= foregroundBasicColor;
    
}


    public: BasicColor getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->backgroundBasicColor;
    
}


    private: void setBackgroundBasicColor(BasicColor backgroundBasicColor){
this->backgroundBasicColor= backgroundBasicColor;
    
}


};

            

