
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h"
        

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


GeographicMapCellPositionTracking::GeographicMapCellPositionTracking() : currentGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), previousGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), newGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), currentCellType(GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE){
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionTracking::getCurrentOverCellType(BasicGeographicMap* geographicMap) -> GeographicMapCellType*{

    GeographicMapCellPosition* geographicMapCellPosition = this->currentGeographicMapCellPosition;;
    

                        if(geographicMapCellPosition != this->previousGeographicMapCellPosition)
                        
                                    {
                                    this->currentCellType= geographicMap->getCellTypeAt(geographicMapCellPosition);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentCellType;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionTracking::updateStart(AllBinaryGameCanvasInterface* gameCanvasInterface, AllBinaryLayer* layer) -> bool{

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


    auto GeographicMapCellPositionTracking::updateEnd() -> bool{

                        if(this->currentGeographicMapCellPosition != this->previousGeographicMapCellPosition)
                        
                                    {
                                    this->previousGeographicMapCellPosition= this->currentGeographicMapCellPosition;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto GeographicMapCellPositionTracking::getPreviousGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->previousGeographicMapCellPosition;
    
}


    auto GeographicMapCellPositionTracking::getCurrentGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentGeographicMapCellPosition;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_CPP
