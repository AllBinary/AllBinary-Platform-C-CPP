
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageArrayAnimation: public IndexedAnimation {

    private: std::vector<Image*> imageArray = NullImage::NULL_IMAGE_ARRAY;

    private: int32_t totalFrames= 0;

    protected: CircularIndexUtil* circularIndexUtil = CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL;

public: ImageArrayAnimation(std::vector<Image*> imageArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setImageArray(imageArray);
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    public: void nextFrame(){
this->circularIndexUtil->next();
    
}


    public: void previousFrame(){
this->circularIndexUtil->previous();
    
}


    public: void setFrame(int32_t index){
this->circularIndexUtil->setIndex(index);
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil->getIndex();;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalFrames;
    
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    public: Image* getImage(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageArray[index];
    
}


    public: std::vector<Image*> getImageArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageArray;
    
}


    protected: void setImageArray(std::vector<Image*> imageArray){
this->imageArray= imageArray;
    
this->totalFrames= imageArray.size();
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->totalFrames);
    
}


    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
graphics->drawImage(this->imageArray[this->circularIndexUtil->getIndex()], x, y, this->anchor);
    
}


};

            

