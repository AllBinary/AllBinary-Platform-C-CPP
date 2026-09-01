
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/CellPositionsUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionAreaBase.h"

class GeographicMapCellPositionArea: public GeographicMapCellPositionAreaBase {

    private: const CellPositionsUtil cellPositionsUtil = CellPositionsUtil::getInstance();

    private: const LayerCoveringCellPositionsUtil layerCoveringCellPositionsUtil = LayerCoveringCellPositionsUtil::getInstance();

    private: const BasicArrayList reusableOccupyingGeographicMapCellPositionList = BasicArrayListS(4);

    private: const BasicArrayList reusableSurroundingGeographicMapCellPositionList = BasicArrayListS(12);

    private: const CircularIndexUtil surroundingCircularIndexUtil = CircularIndexUtil::createInstance(0);

    private: AllBinaryLayer layerInterface;

    private: BasicArrayList LIST = BasicArrayListUtil::getInstance().getImmutableInstance();

    private: BasicArrayList occupyingGeographicMapCellPositionList = this->LIST;

    private: BasicArrayList surroundingGeographicMapCellPositionList = this->LIST;

public: GeographicMapCellPositionArea(AllBinaryLayer layerInterface){
this->layerInterface= layerInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void update(BasicGeographicMap geographicMapInterface){
this->occupyingGeographicMapCellPositionList= this->layerCoveringCellPositionsUtil.getAllXY(geographicMapInterface, this->layerInterface, this->layerInterface.getXP(), this->layerInterface.getYP(), this->reusableOccupyingGeographicMapCellPositionList);
    
this->surroundingGeographicMapCellPositionList= this->cellPositionsUtil.getAllSurrounding(geographicMapInterface, this->occupyingGeographicMapCellPositionList, this->reusableSurroundingGeographicMapCellPositionList);
    
this->surroundingCircularIndexUtil.setSize(this->surroundingGeographicMapCellPositionList.size());
    
}


    public: BasicArrayList getOccupyingGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->occupyingGeographicMapCellPositionList;
    
}


    public: BasicArrayList getSurroundingGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->surroundingGeographicMapCellPositionList;
    
}


    public: GeographicMapCellPosition getNextSurroundingGeographicMapCellPosition(){

    GeographicMapCellPosition geographicMapCellPosition = this->surroundingGeographicMapCellPositionList.get(this->surroundingCircularIndexUtil.getIndex()) as GeographicMapCellPosition;;
    
this->surroundingCircularIndexUtil.next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPosition;
    
}


};

            

