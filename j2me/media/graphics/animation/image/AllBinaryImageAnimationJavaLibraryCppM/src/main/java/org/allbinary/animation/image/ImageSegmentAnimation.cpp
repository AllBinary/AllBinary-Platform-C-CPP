
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

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageAnimation.h"

class ImageSegmentAnimation: public ImageAnimation {

    private: int32_t startX;

    private: int32_t startY;

    private: int32_t drawWidth;

    private: int32_t drawHeight;

    private: CircularIndexUtil circularIndexUtil;

    private: std::vector<int32_t> sequenceArray;

protected: ImageSegmentAnimation(Image image, std::vector<int32_t> sequenceArray, AnimationBehavior animationBehavior) : ImageAnimation(image, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->startX= 0;
    
this->startY= 0;
    
this->drawWidth= this->getImage().getWidth();
    
this->drawHeight= this->getImage().getHeight();
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->drawHeight);
    
this->sequenceArray= sequenceArray;
    
}


    public: void nextFrame(){
this->circularIndexUtil.next();
    
}


    public: void previousFrame(){
this->circularIndexUtil.previous();
    
}


    public: void setFrame(int32_t index){
this->circularIndexUtil.setIndex(index);
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil.getIndex();;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil.getSize();;
    
}


    public: void setSequence(std::vector<int32_t> sequenceArray){
this->sequenceArray= sequenceArray;
    
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sequenceArray;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
}


    public: int32_t getStartX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startX;
    
}


    public: void setStartX(int32_t startX){
this->startX= startX;
    
}


    public: int32_t getStartY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startY;
    
}


    public: void setStartY(int32_t startY){
this->startY= startY;
    
}


    public: int32_t getDrawWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drawWidth;
    
}


    public: void setDrawWidth(int32_t drawWidth){
this->drawWidth= drawWidth;
    
}


    public: int32_t getDrawHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->drawHeight;
    
}


    public: void setDrawHeight(int32_t drawHeight){
this->drawHeight= drawHeight;
    
}


};

            

