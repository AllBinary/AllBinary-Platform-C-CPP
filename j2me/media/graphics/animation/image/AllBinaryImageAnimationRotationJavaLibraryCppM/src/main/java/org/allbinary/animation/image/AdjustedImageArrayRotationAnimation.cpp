
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayRotationAnimation.h"
#include "ImageArrayRotationAnimationInfo.h"
//TWB - Adjustments should be done in the resource creation and not at the animation level
class AdjustedImageArrayRotationAnimation: public ImageArrayRotationAnimation {

                //@Throws(Exception.constructor)
            
    public: static AdjustedImageArrayRotationAnimation createAdjustedImageArrayRotationAnimationInfo(Object* anyType, AnimationBehavior animationBehavior){

    ImageArrayRotationAnimationInfo imageRotationAnimationInfo = anyType as ImageArrayRotationAnimationInfo;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageArrayRotationAnimation(imageRotationAnimationInfo.getImageArray(), imageRotationAnimationInfo.getAngleInfoP(), imageRotationAnimationInfo.getTotalAngle(), imageRotationAnimationInfo.getDx(), imageRotationAnimationInfo.getDy(), animationBehavior);
    
}


                //@Throws(Exception.constructor)
            
    public: static AdjustedImageArrayRotationAnimation createAnimation(std::vector<Image> imageArray, AngleInfo angleInfo, int32_t totalAngle, AnimationBehavior animationBehavior){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageArrayRotationAnimation(imageArray, angleInfo, totalAngle,  -(imageArray[0]!.getWidth()>>2),  -(imageArray[0]!.getHeight()>>2), animationBehavior);
    
}


    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: AdjustedImageArrayRotationAnimation(std::vector<Image> imageArray, AngleInfo angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior animationBehavior){
            super(imageArray, angleInfo, totalAngle, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init(dx, dy);
    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t dx, int32_t dy){
this->setDx(dx);
    
this->setDy(dy);
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
super.paintXY(graphics, x +this->dx, y +this->dy);
    
}


    public: void setDx(int32_t dx){
this->dx= dx;
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    public: void setDy(int32_t dy){
this->dy= dy;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


};

            

