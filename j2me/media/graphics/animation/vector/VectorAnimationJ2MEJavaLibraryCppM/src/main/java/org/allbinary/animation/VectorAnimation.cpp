
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
        



            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "VectorAnimationInterface.h"
#include "AnimationBehavior.h"

class VectorAnimation: public IndexedAnimation: public VectorAnimationInterface {
        

    public static VectorAnimation createVectorAnimation(std::vector<std::vector<int32_t>> currentPoints2, BasicColor basicColor, AnimationBehavior animationBehavior){

    currentPoints: std::vector<std::vector<std::vector<int32_t>>> = Array.from({ length: 1 }, () => Array.from({ length: currentPoints2!.length }, () => new Array(0).fill(2)));;
    

    size: int32_t = currentPoints2!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
currentPoints[0]![index]![0]= currentPoints2[index]![0]!;
    
currentPoints[0]![index]![1]= currentPoints2[index]![1]!;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new VectorAnimation(currentPoints, basicColor, animationBehavior);
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: currentPoints: std::vector<std::vector<std::vector<int32_t>>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY_ARRAY;

    private: circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstance(0)!;

public constructor (std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setPoints(currentPoints);
    
this.setBasicColorP(basicColor);
    
}


    public setBasicColorP(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getBasicColorP() == 
                                    null
                                 || this.getBasicColorP()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.updateModifiers();
    

                                    }
                                
}


    public changeBasicColor(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getChangeBasicColor() == 
                                    null
                                 || this.getChangeBasicColor()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.updateModifiers();
    

                                    }
                                
}


    public setAlpha(int32_t alpha){

    changed: bool = false;;
    

                        if(this.alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this.updateModifiers();
    

                                    }
                                
}


    public setScale(float scaleX, float scaleY){
}


    public setMaxScale(float maxScaleX, float maxScaleY){
}


    updateModifiers(){
}


                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getSize();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentPoints!.length;
    
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


    public nextFrame(){
this.circularIndexUtil!.next();
    
}


    public previousFrame(){
this.circularIndexUtil!.previous();
    
}


    paintVectors(Graphics graphics, int32_t x, int32_t y){

        try {
            
    nextPointX: int32_t = 0;;
    

    nextPointY: int32_t = 0;;
    

    nextPoint: std::vector<int32_t>;;
    

    point: std::vector<int32_t>;;
    

    currentPointsFrame: std::vector<std::vector<int32_t>> = this.currentPoints[this.circularIndexUtil!.getIndex()]!;;
    

    size: int32_t = currentPointsFrame!.length
                ;;
    

    index: int32_t = size -2;;
    

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
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "paintVectors", e);
    
}

}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.basicSetColorUtil!.setBasicColorP(graphics, this.basicColor);
    
this.paintVectors(graphics, x, y);
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.circularIndexUtil!.getIndex();;
    
}


    public setFrame(int32_t index){
this.circularIndexUtil!.setIndex(index);
    
}


    public std::vector<std::vector<int32_t>> getPoints(int32_t frame){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentPoints[frame]!;
    
}


    public setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints){
this.currentPoints= currentPoints;
    
this.circularIndexUtil= CircularIndexUtil.createInstance(currentPoints!.length);
    
}


};

            

