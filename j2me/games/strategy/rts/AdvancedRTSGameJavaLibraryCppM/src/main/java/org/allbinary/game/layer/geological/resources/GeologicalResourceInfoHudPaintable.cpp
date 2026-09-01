
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
        



#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/graphics/draw/KeyValueDrawCharArray.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeologicalGeographicMapCellPosition.h"

class GeologicalResourceInfoHudPaintable: public WaypointInfoHudPaintable {

    private: static const std::string RESOURCES = "Resources: ";

    private: KeyValueDrawCharArray keyvalueDrawString;

    private: int32_t fontHeight = 0;

public: GeologicalResourceInfoHudPaintable(){
this->keyvalueDrawString= KeyValueDrawCharArray(GeologicalResourceInfoHudPaintable::RESOURCES, this->textX);
    
}


    public: void updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    Font font = graphics.getFont();;
    
this->fontHeight= (2 *font.getHeight());
    
}


    public: void updateSelectionInfo(){
super.updateSelectionInfo();
    

    RTSLayer rtsLayer = this->rtsLayerP as RTSLayer;;
    

    BasicArrayList list = rtsLayer.geographicMapCellPositionAreaBase.getOccupyingGeographicMapCellPositionList();;
    

    int32_t total = 0;;
    




                        for (
    int32_t index = list.size();--index >= 0; )
        {

    GeologicalGeographicMapCellPosition geographicMapCellPosition = list.get(index) as GeologicalGeographicMapCellPosition;;
    
total += geographicMapCellPosition.getGeologicalResource().getTotal();
    
}

this->keyvalueDrawString.update(this->getPrimitiveLongUtil().getCharArray(total), this->getPrimitiveLongUtil().getCurrentTotalDigits());
    
}


    public: void paint(Graphics graphics){
super.paint(graphics);
    
this->keyvalueDrawString.paint(graphics, (this->y +this->fontHeight));
    
}


};

            

