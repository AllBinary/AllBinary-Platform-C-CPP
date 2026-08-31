
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
        

    private: const cellPositionsUtil: CellPositionsUtil = CellPositionsUtil.getInstance()!;

    private: const layerCoveringCellPositionsUtil: LayerCoveringCellPositionsUtil = LayerCoveringCellPositionsUtil.getInstance()!;

    private: const reusableOccupyingGeographicMapCellPositionList: BasicArrayList = new BasicArrayListS(4);

    private: const reusableSurroundingGeographicMapCellPositionList: BasicArrayList = new BasicArrayListS(12);

    private: const surroundingCircularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstance(0)!;

    private: const layerInterface: AllBinaryLayer;

    private: LIST: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: occupyingGeographicMapCellPositionList: BasicArrayList = this.LIST;

    private: surroundingGeographicMapCellPositionList: BasicArrayList = this.LIST;

public constructor (AllBinaryLayer layerInterface){

            super();
        this.layerInterface= layerInterface;
    
}


                //@Throws(Exception.constructor)
            
    public update(BasicGeographicMap geographicMapInterface){
this.occupyingGeographicMapCellPositionList= this.layerCoveringCellPositionsUtil!.getAllXY(geographicMapInterface, this.layerInterface, this.layerInterface!.getXP(), this.layerInterface!.getYP(), this.reusableOccupyingGeographicMapCellPositionList);
    
this.surroundingGeographicMapCellPositionList= this.cellPositionsUtil!.getAllSurrounding(geographicMapInterface, this.occupyingGeographicMapCellPositionList, this.reusableSurroundingGeographicMapCellPositionList);
    
this.surroundingCircularIndexUtil!.setSize(this.surroundingGeographicMapCellPositionList!.size());
    
}


    public BasicArrayList getOccupyingGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.occupyingGeographicMapCellPositionList;
    
}


    public BasicArrayList getSurroundingGeographicMapCellPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.surroundingGeographicMapCellPositionList;
    
}


    public GeographicMapCellPosition getNextSurroundingGeographicMapCellPosition(){

    geographicMapCellPosition: GeographicMapCellPosition = this.surroundingGeographicMapCellPositionList!.get(this.surroundingCircularIndexUtil!.getIndex()) as GeographicMapCellPosition;;
    
this.surroundingCircularIndexUtil!.next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPosition;
    
}


};

            

