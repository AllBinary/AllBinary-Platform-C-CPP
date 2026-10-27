
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/geological/resources/GeologicalResourceInfoHudPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/graphics/draw/KeyValueDrawCharArray.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"


GeologicalResourceInfoHudPaintable::GeologicalResourceInfoHudPaintable(){
this->keyvalueDrawString= new KeyValueDrawCharArray(GeologicalResourceInfoHudPaintable::RESOURCES, this->textX);
    
}


    auto GeologicalResourceInfoHudPaintable::updateMeasurement(Graphics* graphics) -> void{
WaypointInfoHudPaintable::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->fontHeight= (2 *font->getHeight());
    
}


    auto GeologicalResourceInfoHudPaintable::updateSelectionInfo() -> void{
WaypointInfoHudPaintable::updateSelectionInfo();
    

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->rtsLayerP);;
    

    BasicArrayList* list = rtsLayer->geographicMapCellPositionAreaBase->getOccupyingGeographicMapCellPositionList();;
    

    int32_t total = 0;;
    




                        for (
    int32_t index = list->size();--index >= 0; )
        {

    GeologicalGeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeologicalGeographicMapCellPosition*>(list->get(index));;
    
total += geographicMapCellPosition->getGeologicalResource()->getTotal();
    
}

this->keyvalueDrawString->update(this->getPrimitiveLongUtil()->getCharArray(total), this->getPrimitiveLongUtil()->getCurrentTotalDigits());
    
}


    auto GeologicalResourceInfoHudPaintable::paint(Graphics* graphics) -> void{
WaypointInfoHudPaintable::paint(graphics);
    
this->keyvalueDrawString->paint(graphics, (this->y +this->fontHeight));
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_CPP
