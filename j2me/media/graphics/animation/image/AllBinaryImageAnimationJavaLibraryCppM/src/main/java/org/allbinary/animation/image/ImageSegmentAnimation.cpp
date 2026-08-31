
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageAnimation.h"

class ImageSegmentAnimation: public ImageAnimation {
        

    private: startX: int32_t;

    private: startY: int32_t;

    private: drawWidth: int32_t;

    private: drawHeight: int32_t;

    private: circularIndexUtil: CircularIndexUtil;

    private: sequenceArray: std::vector<int32_t>;

protected constructor (Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior){
            super(image, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.startX= 0;
    
this.startY= 0;
    
this.drawWidth= this.getImage()!.getWidth();
    
this.drawHeight= this.getImage()!.getHeight();
    
this.circularIndexUtil= CircularIndexUtil.createInstance(this.drawHeight);
    
this.sequenceArray= sequenceArray;
    
}


    public nextFrame(){
this.circularIndexUtil!.next();
    
}


    public previousFrame(){
this.circularIndexUtil!.previous();
    
}


    public setFrame(int32_t index){
this.circularIndexUtil!.setIndex(index);
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.circularIndexUtil!.getIndex();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.circularIndexUtil!.getSize();;
    
}


    public setSequence(std::vector<int32_t> sequenceArray){
this.sequenceArray= sequenceArray;
    
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sequenceArray;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
}


    public int32_t getStartX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startX;
    
}


    public setStartX(int32_t startX){
this.startX= startX;
    
}


    public int32_t getStartY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startY;
    
}


    public setStartY(int32_t startY){
this.startY= startY;
    
}


    public int32_t getDrawWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.drawWidth;
    
}


    public setDrawWidth(int32_t drawWidth){
this.drawWidth= drawWidth;
    
}


    public int32_t getDrawHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.drawHeight;
    
}


    public setDrawHeight(int32_t drawHeight){
this.drawHeight= drawHeight;
    
}


};

            

