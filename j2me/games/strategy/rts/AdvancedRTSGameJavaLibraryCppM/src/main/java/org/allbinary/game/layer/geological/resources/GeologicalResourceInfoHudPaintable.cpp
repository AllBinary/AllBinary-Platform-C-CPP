
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
        

    private: static const RESOURCES: string = "Resources: ";

    private: const keyvalueDrawString: KeyValueDrawCharArray;

    private: fontHeight: int32_t = 0;

public constructor (){

            super();
        this.keyvalueDrawString= new KeyValueDrawCharArray(GeologicalResourceInfoHudPaintable.RESOURCES, this.textX);
    
}


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.fontHeight= (2 *font.getHeight());
    
}


    public updateSelectionInfo(){
super.updateSelectionInfo();
    

    rtsLayer: RTSLayer = this.rtsLayerP as RTSLayer;;
    

    list: BasicArrayList = rtsLayer!.geographicMapCellPositionAreaBase!.getOccupyingGeographicMapCellPositionList()!;;
    

    total: int32_t = 0;;
    




                        for (
    index: int32_t = list.size()!;--index >= 0; )
        {

    geographicMapCellPosition: GeologicalGeographicMapCellPosition = list.get(index) as GeologicalGeographicMapCellPosition;;
    
total += geographicMapCellPosition!.getGeologicalResource()!.getTotal();
    
}

this.keyvalueDrawString!.update(this.getPrimitiveLongUtil()!.getCharArray(total), this.getPrimitiveLongUtil()!.getCurrentTotalDigits());
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
this.keyvalueDrawString!.paint(graphics, (this.y +this.fontHeight));
    
}


};

            

