
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
        
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"
#include "BasicGeographicMap.h"

class BasicGeographicMapUtil
            : public Object
         {
        

    private: static const instance: BasicGeographicMapUtil = new BasicGeographicMapUtil();

    public static BasicGeographicMapUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGeographicMapUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public int32_t getBorderingRow(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition){

    LOCATION_CHANGE: int32_t = 1;;
    



        switch (direction) {
            case 0: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getRow();;
    
}
case 1: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getRow();;
    
}
case 2: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getRow() +LOCATION_CHANGE;
    
}
case 3: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getRow() -LOCATION_CHANGE;
    
}
default: {


                            throw new Exception("Only Four Directions");
                    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getBorderingColumn(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition){

    LOCATION_CHANGE: int32_t = 1;;
    



        switch (direction) {
            case 0: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getColumn() -LOCATION_CHANGE;
    
}
case 1: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getColumn() +LOCATION_CHANGE;
    
}
case 2: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getColumn();;
    
}
case 3: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldGeographicMapCellPosition!.getColumn();;
    
}
default: {


                            throw new Exception("Only Four Directions");
                    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    public bool isSameCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition){

    fromColumn: int32_t = fromGeographicMapCellPosition!.getColumn()!;;
    

    fromRow: int32_t = fromGeographicMapCellPosition!.getRow()!;;
    

    goColumn: int32_t = toGeographicMapCellPosition!.getColumn()!;;
    

    goRow: int32_t = toGeographicMapCellPosition!.getRow()!;;
    

                        if(fromColumn == goColumn && fromRow == goRow)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public std::vector<Layer> createAllBinaryTiledLayerArray(std::vector<BasicGeographicMap> geographicMapInterfaceArray){

    tiledLayerArray: std::vector<Layer> = new Array(geographicMapInterfaceArray!.length);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getAllBinaryTiledLayerArray(geographicMapInterfaceArray, tiledLayerArray, 0);;
    
}


    public std::vector<Layer> getAllBinaryTiledLayerArray(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<Layer> tiledLayerArray, int32_t startIndex){

    geographicMapInterface: BasicGeographicMap;;
    

    size: int32_t = geographicMapInterfaceArray!.length
                ;;
    

    count: int32_t = 0;;
    




                        for (
    index: int32_t = size +startIndex;--index >= startIndex; )
        {
geographicMapInterface= geographicMapInterfaceArray[index]!;
    
tiledLayerArray[count++]= geographicMapInterface!.getAllBinaryTiledLayer();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tiledLayerArray;
    
}


    public move(std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t dx, int32_t dy){

    geographicMapInterface: BasicGeographicMap;;
    

    size: int32_t = geographicMapInterfaceArray!.length
                ;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {
geographicMapInterface= geographicMapInterfaceArray[index]!;
    
geographicMapInterface!.getAllBinaryTiledLayer()!.moveDXY(dx, dy);
    
}

}


    public setPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t x, int32_t y){

    geographicMapInterface: BasicGeographicMap;;
    

    size: int32_t = geographicMapInterfaceArray!.length
                ;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {
geographicMapInterface= geographicMapInterfaceArray[index]!;
    
geographicMapInterface!.getAllBinaryTiledLayer()!.setPosition(x, y, geographicMapInterface!.getAllBinaryTiledLayer()!.getZP());
    
}

}


};

            

