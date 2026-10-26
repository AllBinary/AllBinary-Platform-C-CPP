
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AllBinaryLayer layerInterface;

    private: std::vector<IndexedAnimation> animationInterfaceArray;

    private: CircularIndexUtil circularIndexUtil;

    private: int32_t dx;

    private: int32_t dy;

public: AnimationDamageFloaters(AllBinaryLayer layerInterface, std::vector<IndexedAnimation> animationInterfaceArray, int32_t dx, int32_t dy){
this->animationInterfaceArray= animationInterfaceArray;
    




                        for (
    int32_t index = this->animationInterfaceArray.size() -1;index >= 0; index--)
        {
this->animationInterfaceArray[index].setFrame(this->animationInterfaceArray[index].getSize() -1);
    
}

this->layerInterface= layerInterface;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->animationInterfaceArray.size());
    
this->dx= dx;
    
this->dy= dy;
    
}


    public: void add(int32_t damage){

    int32_t i = this->circularIndexUtil.getIndex();;
    
this->animationInterfaceArray[i].setFrame(0);
    
this->circularIndexUtil.next();
    
}


    public: void paint(Graphics graphics){

        try {
            
    ViewPositionBase viewPosition = this->layerInterface.getViewPosition();;
    

    int32_t x = viewPosition.getX();;
    

    int32_t y = viewPosition.getY();;
    




                        for (
    int32_t index = 0;index < this->animationInterfaceArray.size(); index++)
        {

    IndexedAnimation animationInterface = this->animationInterfaceArray[index];;
    

                        if(animationInterface.getFrame() < animationInterface.getAnimationSize() -1)
                        
                                    {
                                    
    int32_t delta = animationInterface.getFrame() *20;;
    
animationInterface.paintXY(graphics, x +this->dx, y -delta +this->dy);
    
animationInterface.nextFrame();
    

                                    }
                                
}


                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    CanvasStrings canvasStrings = CanvasStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, canvasStrings.PAINT, e);
    
}

}


};

            

