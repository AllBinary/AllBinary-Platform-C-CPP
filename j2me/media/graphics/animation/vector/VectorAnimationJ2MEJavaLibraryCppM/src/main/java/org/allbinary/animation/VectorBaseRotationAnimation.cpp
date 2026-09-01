
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
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RotationAnimation.h"
#include "VectorAnimationInterface.h"
#include "AnimationBehavior.h"

class VectorBaseRotationAnimation: public RotationAnimation, public VectorAnimationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::vector<std::vector<std::vector<int32_t>>> currentPoints = NullUtil::getInstance().NULL_INT_ARRAY_ARRAY_ARRAY;

public: VectorBaseRotationAnimation(AngleInfo angleInfo, std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior){
            super(angleInfo, CircularIndexUtil::createInstance(360 /angleInfo.getAngleIncrementInfo().getAngleIncrement()), animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setPoints(currentPoints);
    
this->setBasicColorP(basicColor);
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil.getIndex();;
    
}


    public: void setFrame(int32_t index){
this->circularIndexUtil.setIndex(index);
    
}


    public: void nextFrame(){
this->circularIndexUtil.next();
    
}


    public: void previousFrame(){
this->circularIndexUtil.previous();
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoints.size();
    
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->basicSetColorUtil.setBasicColorP(graphics, this->basicColor);
    

        try {
            
    int32_t nextPointX = 0;;
    

    int32_t nextPointY = 0;;
    

    std::vector<int32_t> nextPoint;;
    

    std::vector<int32_t> point;;
    

    std::vector<std::vector<int32_t>> currentPointsFrame = this->currentPoints[this->circularIndexUtil.getIndex()];;
    

    int32_t size = currentPointsFrame.size();;
    

    int32_t index = size -2;;
    

        while(--index >= 0)
        {
nextPoint= currentPointsFrame[index]!;
    
point= currentPointsFrame[index +1]!;
    
nextPointX= nextPoint[0]!;
    
nextPointY= nextPoint[1]!;
    

                        if(nextPointX != 1000)
                        
                                    {
                                    graphics.drawLine(point[0] +x, point[1] +y, nextPointX +x, nextPointY +y);
    

                                    }
                                
                        else {
                            index--;
    

                        }
                            
}


                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "paintVectors", e);
    
}

}


    public: std::vector<std::vector<int32_t>> getPoints(int32_t frame){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoints[frame]!;
    
}


    public: void setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints){
this->currentPoints= currentPoints;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->currentPoints.size());
    
}


};

            

