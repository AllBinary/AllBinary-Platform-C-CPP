
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerPartialCellPositionsUtil
            : public Object
         {

    private: static LayerPartialCellPositionsUtil instance() { return LayerPartialCellPositionsUtil(); }

    public: static LayerPartialCellPositionsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerPartialCellPositionsUtil::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getAll(BasicGeographicMap geographicMapInterface, AllBinaryLayer layerInterface, BasicArrayList reusableList){
reusableList.clear();
    

    GeographicMapCellPosition topLeftGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP(), layerInterface.getYP());;
    

    GeographicMapCellPosition topRightGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP() +layerInterface.getWidth(), layerInterface.getYP());;
    

    GeographicMapCellPosition bottomLeftGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP(), layerInterface.getYP() +layerInterface.getHeight());;
    

    GeographicMapCellPosition bottomRightGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP() +layerInterface.getWidth(), layerInterface.getYP() +layerInterface.getHeight());;
    

                        if(topLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    reusableList.add(topLeftGeographicMapCellPosition);
    

                                    }
                                

                        if(topRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && topLeftGeographicMapCellPosition != topRightGeographicMapCellPosition)
                        
                                    {
                                    reusableList.add(topRightGeographicMapCellPosition);
    

                                    }
                                

                        if(bottomLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && !reusableList.contains(bottomLeftGeographicMapCellPosition))
                        
                                    {
                                    reusableList.add(bottomLeftGeographicMapCellPosition);
    

                                    }
                                

                        if(bottomRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && !reusableList.contains(bottomRightGeographicMapCellPosition))
                        
                                    {
                                    reusableList.add(bottomRightGeographicMapCellPosition);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return reusableList;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getAllDXY(BasicGeographicMap geographicMapInterface, AllBinaryLayer layerInterface, int32_t dx, int32_t dy, BasicArrayList reusableList){
reusableList.clear();
    

    GeographicMapCellPosition topLeftGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP() +dx, layerInterface.getYP() +dy);;
    

    GeographicMapCellPosition topRightGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP() +layerInterface.getWidth() +dx, layerInterface.getYP() +dy);;
    

    GeographicMapCellPosition bottomLeftGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP() +dx, layerInterface.getYP() +layerInterface.getHeight() +dy);;
    

    GeographicMapCellPosition bottomRightGeographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(layerInterface.getXP() +layerInterface.getWidth() +dx, layerInterface.getYP() +layerInterface.getHeight() +dy);;
    

                        if(topLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    reusableList.add(topLeftGeographicMapCellPosition);
    

                                    }
                                

                        if(topRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && topLeftGeographicMapCellPosition != topRightGeographicMapCellPosition)
                        
                                    {
                                    reusableList.add(topRightGeographicMapCellPosition);
    

                                    }
                                

                        if(bottomLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && !reusableList.contains(bottomLeftGeographicMapCellPosition))
                        
                                    {
                                    reusableList.add(bottomLeftGeographicMapCellPosition);
    

                                    }
                                

                        if(bottomRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && !reusableList.contains(bottomRightGeographicMapCellPosition))
                        
                                    {
                                    reusableList.add(bottomRightGeographicMapCellPosition);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return reusableList;
    
}


};

            

