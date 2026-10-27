
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/graphics/draw/KeyValueDrawString.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

WaypointInfoHudPaintable::WaypointInfoHudPaintable() : rtsLayerP(NullPathFindingLayer::NULL_PATH_FINDING_LAYER){
this->keyvalueDrawString= new KeyValueDrawString("Owner: ", this->textX);
    
}


    auto WaypointInfoHudPaintable::updateMeasurement(Graphics* graphics) -> void{
SelectionHudPaintable::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->textLine2Y= (this->y +font->getHeight());
    
}


    auto WaypointInfoHudPaintable::updateSelectionInfo() -> void{

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->rtsLayerP);;
    
this->setName(rtsLayer->getName());
    
this->setAnimationInterface(rtsLayer->getVerticleBuildAnimationInterface());
    
this->keyvalueDrawString->update(rtsLayer->getParentLayer()->getName());
    
}


    auto WaypointInfoHudPaintable::setRtsLayer(RTSLayer* rtsLayer) -> void{
this->rtsLayerP= rtsLayer;
    
}


    auto WaypointInfoHudPaintable::getRtsLayer() -> PathFindingLayerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayerP;
    
}


    auto WaypointInfoHudPaintable::paint(Graphics* graphics) -> void{
SelectionHudPaintable::paint(graphics);
    
this->keyvalueDrawString->paint(graphics, this->textLine2Y);
    
this->getAnimationInterface()->paintXY(graphics, this->imageX, this->y);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLE_CPP
