
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
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayBaseRotationAnimation.h"
#include "ImageArrayRotationAnimationInfo.h"

class ImageArrayRotationAnimation: public ImageArrayBaseRotationAnimation {
        

                //@Throws(Exception.constructor)
            
    static ImageArrayRotationAnimation createAnimation(any = {} anyType, AnimationBehavior animationBehavior){

    imageRotationAnimationInfo: ImageArrayRotationAnimationInfo = anyType as ImageArrayRotationAnimationInfo;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ImageArrayRotationAnimation(imageRotationAnimationInfo!.getImageArray(), imageRotationAnimationInfo!.getAngleInfoP(), imageRotationAnimationInfo!.getTotalAngle(), animationBehavior);
    
}


    private: expectedTotalFrames: int32_t= 0;

public constructor (std::vector<Image> imageArray, AngleInfo angleInfo, int32_t totalAngle, AnimationBehavior animationBehavior){
            super(imageArray, angleInfo, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.init(imageArray, angleInfo, totalAngle);
    
}


                //@Throws(Exception.constructor)
            
    init(std::vector<Image> imageArray, AngleInfo angleInfo, int32_t totalAngle){
this.expectedTotalFrames= totalAngle /this.angleInfo!.getAngleIncrementInfo()!.getAngleIncrement();
    
this.angleInfo!.adjustAngle(0);
    

                        if(this.expectedTotalFrames != this.getSize())
                        
                                    {
                                    


                            throw new Exception("Wrong Number of Frames");
                    

                                    }
                                
}


    public setImageArray(std::vector<Image> imageArray){
super.setImageArray(imageArray);
    
this.angleInfo!.adjustAngle(0);
    
}


};

            

