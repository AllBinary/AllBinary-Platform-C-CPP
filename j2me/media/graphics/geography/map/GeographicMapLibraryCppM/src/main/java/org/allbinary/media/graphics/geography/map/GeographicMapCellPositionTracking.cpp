
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"

class GeographicMapCellPositionTracking
            : public Object
         {

    private: GeographicMapCellPosition* currentGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition* newGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellType* currentCellType = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE;

public: GeographicMapCellPositionTracking(){
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCurrentOverCellType(BasicGeographicMap* geographicMap){

    GeographicMapCellPosition* geographicMapCellPosition = this->currentGeographicMapCellPosition;;
    

                        if(geographicMapCellPosition != this->previousGeographicMapCellPosition)
                        
                                    {
                                    this->currentCellType= geographicMap->getCellTypeAt(geographicMapCellPosition);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentCellType;
    
}


                //@Throws(Exception.constructor)
            
    public: bool updateStart(AllBinaryGameCanvasInterface* gameCanvasInterface, AllBinaryLayer* layer){

                        if(gameCanvasInterface != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(gameCanvasInterface->getLayerManager());;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->newGeographicMapCellPosition= geographicMapInterface->getCellPositionAtXY(layer->getXP() +layer->getHalfWidth(), layer->getYP() +layer->getHalfHeight());
    

                        if(this->newGeographicMapCellPosition != this->currentGeographicMapCellPosition)
                        
                                    {
                                    this->currentGeographicMapCellPosition= this->newGeographicMapCellPosition;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool updateEnd(){

                        if(this->currentGeographicMapCellPosition != this->previousGeographicMapCellPosition)
                        
                                    {
                                    this->previousGeographicMapCellPosition= this->currentGeographicMapCellPosition;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: GeographicMapCellPosition* getPreviousGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->previousGeographicMapCellPosition;
    
}


    public: GeographicMapCellPosition* getCurrentGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentGeographicMapCellPosition;
    
}


};

            

