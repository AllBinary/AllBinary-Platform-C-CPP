
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/GeographicMapCellPositionArea.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"


GeographicMapCellPositionArea::GeographicMapCellPositionArea(AllBinaryLayer* layerInterface) : cellPositionsUtil(CellPositionsUtil::getInstance()), layerCoveringCellPositionsUtil(LayerCoveringCellPositionsUtil::getInstance()), reusableOccupyingGeographicMapCellPositionList(new BasicArrayListS(4)), reusableSurroundingGeographicMapCellPositionList(new BasicArrayListS(12)), surroundingCircularIndexUtil(CircularIndexUtil::createInstance(0)), LIST(BasicArrayListUtil::getInstance()->getImmutableInstance()), occupyingGeographicMapCellPositionList(this->LIST), surroundingGeographicMapCellPositionList(this->LIST){
this->layerInterface= layerInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionArea::update(BasicGeographicMap* geographicMapInterface) -> void{
this->occupyingGeographicMapCellPositionList= this->layerCoveringCellPositionsUtil->getAllXY(geographicMapInterface, this->layerInterface, this->layerInterface->getXP(), this->layerInterface->getYP(), this->reusableOccupyingGeographicMapCellPositionList);
    
this->surroundingGeographicMapCellPositionList= this->cellPositionsUtil->getAllSurrounding(geographicMapInterface, this->occupyingGeographicMapCellPositionList, this->reusableSurroundingGeographicMapCellPositionList);
    
this->surroundingCircularIndexUtil->setSize(this->surroundingGeographicMapCellPositionList->size());
    
}


    auto GeographicMapCellPositionArea::getOccupyingGeographicMapCellPositionList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->occupyingGeographicMapCellPositionList;
    
}


    auto GeographicMapCellPositionArea::getSurroundingGeographicMapCellPositionList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->surroundingGeographicMapCellPositionList;
    
}


    auto GeographicMapCellPositionArea::getNextSurroundingGeographicMapCellPosition() -> GeographicMapCellPosition*{

    GeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(this->surroundingGeographicMapCellPositionList->get(this->surroundingCircularIndexUtil->getIndex()));;
    
this->surroundingCircularIndexUtil->next();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return geographicMapCellPosition;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_CPP
