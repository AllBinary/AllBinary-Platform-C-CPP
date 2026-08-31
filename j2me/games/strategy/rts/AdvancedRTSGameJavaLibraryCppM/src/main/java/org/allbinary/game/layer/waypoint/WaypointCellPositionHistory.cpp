
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointCellPositionHistory
            : public Object
         {
        

    private: static const SINGLETON: WaypointCellPositionHistory = new WaypointCellPositionHistory();

    public static WaypointCellPositionHistory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointCellPositionHistory.SINGLETON;
    
}


    private: positionList: BasicArrayList = new BasicArrayListD();

    private: layerList: BasicArrayList = new BasicArrayListD();

    public add(CellPosition cellPosition, AllBinaryLayer layerInterface){
this.positionList!.add(cellPosition);
    
this.layerList!.add(layerInterface);
    
}


    public addList(BasicArrayList list, AllBinaryLayer layerInterface){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {
this.add(list.get(index) as CellPosition, layerInterface);
    
}

}


    public remove(CellPosition cellPosition){

    index: int32_t = this.positionList!.indexOf(cellPosition)!;;
    

                        if(index >= 0)
                        
                                    {
                                    this.positionList!.removeAt(index);
    
this.layerList!.removeAt(index);
    

                                    }
                                
}


    public removeLayer(AllBinaryLayer layerInterface){

    index: int32_t = 0;;
    

        while(index !=  -1)
        {
index= this.layerList!.indexOf(layerInterface);
    

                        if(index >= 0)
                        
                                    {
                                    this.positionList!.removeAt(index);
    
this.layerList!.removeAt(index);
    

                                    }
                                
}

}


    public clear(){
this.positionList!.clear();
    
this.layerList!.clear();
    
}


    public bool isCellPositionWithDrop(CellPosition cellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.positionList!.contains(cellPosition);;
    
}


    public bool anyCellPositionWithDrop(BasicArrayList list){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

                        if(this.isCellPositionWithDrop(list.get(index) as CellPosition))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public AllBinaryLayer getLayerInterface(CellPosition cellPosition){

    index: int32_t = this.positionList!.indexOf(cellPosition)!;;
    

                        if(index >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layerList!.get(index) as AllBinaryLayer;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryLayer.NULL_ALLBINARY_LAYER;
    

                        }
                            
}


};

            

