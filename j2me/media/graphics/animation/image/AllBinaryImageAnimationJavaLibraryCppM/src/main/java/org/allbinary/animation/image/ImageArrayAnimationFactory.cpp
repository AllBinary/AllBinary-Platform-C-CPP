
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayAnimation.h"
#include "AdjustedImageArrayAnimation.h"

class ImageArrayAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: int32_t dx = 0;

    private: int32_t dy = 0;

    private: std::vector<Image> imageArray;

    private: AnimationBehaviorFactory animationBehaviorFactory;

public: ImageArrayAnimationFactory(std::vector<Image> imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory){
this->imageArray= imageArray;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
this->dx= dx;
    
this->dy= dy;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

                        if(this->dx != 0 || this->dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageArrayAnimation(this->imageArray, this->dx, this->dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageArrayAnimation(this->imageArray, AnimationBehavior::getInstance());
    

                        }
                            
}


    public: void setInitialScale(ScaleProperties scaleProperties){
}


};

            

