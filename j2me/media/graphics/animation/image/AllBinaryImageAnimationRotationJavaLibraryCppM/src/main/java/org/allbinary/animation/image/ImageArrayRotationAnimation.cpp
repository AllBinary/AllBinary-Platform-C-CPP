
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"


                //@Throws(Exception.constructor)
            
    auto ImageArrayRotationAnimation::createAnimation(Object* anyType, AnimationBehavior* animationBehavior) -> ImageArrayRotationAnimation*{

    ImageArrayRotationAnimationInfo* imageRotationAnimationInfo = dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ImageArrayRotationAnimation(imageRotationAnimationInfo->getImageArray(), imageRotationAnimationInfo->getAngleInfoP(), imageRotationAnimationInfo->getTotalAngle(), animationBehavior);
    
}


ImageArrayRotationAnimation::ImageArrayRotationAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) : ImageArrayBaseRotationAnimation(imageArray, angleInfo, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init(imageArray, angleInfo, totalAngle);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageArrayRotationAnimation::init(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle) -> void{
this->expectedTotalFrames= totalAngle /this->angleInfo->getAngleIncrementInfo()->getAngleIncrement();
    
this->angleInfo->adjustAngle(0);
    

                        if(this->expectedTotalFrames != this->getSize())
                        
                                    {
                                    


                            throw Exception("Wrong Number of Frames");
                    

                                    }
                                
}


    auto ImageArrayRotationAnimation::setImageArray(std::vector<Image*> imageArray) -> void{
ImageArrayBaseRotationAnimation::setImageArray(imageArray);
    
this->angleInfo->adjustAngle(0);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_CPP
