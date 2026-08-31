
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/bounds/BoundsVisitorInterface.h>

      
#include <org/allbinary/bounds/LayerBounds.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BoundBounceAI: public BasicAI {
        

    currentRelativeAngle: int32_t = 0;

    private: layerBounds: LayerBounds;

    private: boundsVisitorInterface: BoundsVisitorInterface;

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput, LayerBounds layerBounds, BoundsVisitorInterface boundsVisitorInterface){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.layerBounds= layerBounds;
    
this.boundsVisitorInterface= boundsVisitorInterface;
    
}


    public paint(Graphics graphics){

    rectange: Rectangle = this.layerBounds!.getRectangleP()!;;
    
graphics.drawRect(rectange.getPoint()!.getX(), rectange.getPoint()!.getY(), rectange.getWidth(), rectange.getHeight());
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){
this.layerBounds!.visit(this.boundsVisitorInterface);
    
}


};

            

