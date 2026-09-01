
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
        



            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DropCellPositionHistory
            : public Object
         {

    private: static const DropCellPositionHistory SINGLETON = DropCellPositionHistory();

    public: static DropCellPositionHistory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropCellPositionHistory::SINGLETON;
    
}


    private: const CellPositionFactory cellPositionFactory = CellPositionFactory::getInstance();

    private: BasicArrayList positionList = BasicArrayListD();

    private: BasicArrayList layerList = BasicArrayListD();

    public: void add(CellPosition cellPosition, AllBinaryLayer layerInterface){
this->positionList.add(cellPosition);
    
this->layerList.add(layerInterface);
    
}


    public: void addAll(BasicArrayList list, AllBinaryLayer layerInterface){




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {
this->add(list.get(index) as CellPosition, layerInterface);
    
}

}


    public: void remove(CellPosition cellPosition){

    int32_t index = this->positionList.indexOf(cellPosition);;
    

                        if(index >= 0)
                        
                                    {
                                    this->positionList.removeAt(index);
    
this->layerList.removeAt(index);
    

                                    }
                                
}


    public: void removeAll(AllBinaryLayer layerInterface){

    int32_t index = 0;;
    

        while(index !=  -1)
        {
index= this->layerList.indexOf(layerInterface);
    

                        if(index >= 0)
                        
                                    {
                                    this->positionList.removeAt(index);
    
this->layerList.removeAt(index);
    

                                    }
                                
}

}


    public: void clear(){
this->positionList.clear();
    
this->layerList.clear();
    
}


    public: bool isCellPositionWithDrop(CellPosition cellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->positionList.contains(cellPosition);;
    
}


    public: bool anyCellPositionWithDrop(BasicArrayList list){




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

                        if(this->isCellPositionWithDrop(list.get(index) as CellPosition))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: CellPosition getCellPositionWithDrop(BasicArrayList list){

    CellPosition cellPosition;;
    




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {
cellPosition= list.get(index) as CellPosition;
    

                        if(this->isCellPositionWithDrop(cellPosition))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cellPosition;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPositionFactory.NONE;
    
}


    public: AllBinaryLayer getLayerInterface(CellPosition cellPosition){

    int32_t index = this->positionList.indexOf(cellPosition);;
    

                        if(index >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerList.get(index) as AllBinaryLayer;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryLayer::NULL_ALLBINARY_LAYER;
    

                        }
                            
}


};

            

