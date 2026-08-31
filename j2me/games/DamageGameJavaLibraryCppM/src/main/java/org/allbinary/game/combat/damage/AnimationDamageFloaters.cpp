
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

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DamageFloaters.h"

class AnimationDamageFloaters: public DamageFloaters {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: layerInterface: AllBinaryLayer;

    private: animationInterfaceArray: std::vector<IndexedAnimation>;

    private: const circularIndexUtil: CircularIndexUtil;

    private: dx: int32_t;

    private: dy: int32_t;

public constructor (AllBinaryLayer layerInterface, std::vector<IndexedAnimation> animationInterfaceArray, int32_t dx, int32_t dy){

            super();
        this.animationInterfaceArray= animationInterfaceArray;
    




                        for (
    index: int32_t = this.animationInterfaceArray!.length -1;index >= 0; index--)
        {
this.animationInterfaceArray[index]!.setFrame(this.animationInterfaceArray[index]!.getSize() -1);
    
}

this.layerInterface= layerInterface;
    
this.circularIndexUtil= CircularIndexUtil.createInstance(this.animationInterfaceArray!.length);
    
this.dx= dx;
    
this.dy= dy;
    
}


    public add(int32_t damage){

    i: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.animationInterfaceArray[i]!.setFrame(0);
    
this.circularIndexUtil!.next();
    
}


    public paint(Graphics graphics){

        try {
            
    viewPosition: ViewPositionBase = this.layerInterface!.getViewPosition()!;;
    

    x: int32_t = viewPosition!.getX()!;;
    

    y: int32_t = viewPosition!.getY()!;;
    




                        for (
    index: int32_t = 0;index < this.animationInterfaceArray!.length; index++)
        {

    animationInterface: IndexedAnimation = this.animationInterfaceArray[index]!;;
    

                        if(animationInterface!.getFrame() < animationInterface!.getAnimationSize() -1)
                        
                                    {
                                    
    delta: int32_t = animationInterface!.getFrame() *20;;
    
animationInterface!.paintXY(graphics, x +this.dx, y -delta +this.dy);
    
animationInterface!.nextFrame();
    

                                    }
                                
}


                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, canvasStrings!.PAINT, e);
    
}

}


};

            

