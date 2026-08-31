
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

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/graphics/draw/KeyValueDrawString.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointInfoHudPaintable: public SelectionHudPaintable {
        

    private: const keyvalueDrawString: KeyValueDrawString;

    rtsLayerP: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

    private: textLine2Y: int32_t= 0;

public constructor (){

            super();
        this.keyvalueDrawString= new KeyValueDrawString("Owner: ", this.textX);
    
}


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.textLine2Y= (this.y +font.getHeight());
    
}


    public updateSelectionInfo(){

    rtsLayer: RTSLayer = this.rtsLayerP as RTSLayer;;
    
this.setName(rtsLayer!.getName());
    
this.setAnimationInterface(rtsLayer!.getVerticleBuildAnimationInterface());
    
this.keyvalueDrawString!.update(rtsLayer!.getParentLayer()!.getName());
    
}


    public setRtsLayer(RTSLayer rtsLayer){
this.rtsLayerP= rtsLayer;
    
}


    public PathFindingLayerInterface getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayerP;
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
this.keyvalueDrawString!.paint(graphics, this.textLine2Y);
    
this.getAnimationInterface()!.paintXY(graphics, this.imageX, this.y);
    
}


};

            

