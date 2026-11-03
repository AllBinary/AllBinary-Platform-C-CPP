
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/animation/image/ImageArrayAnimation.h"
#include "org/allbinary/animation/image/AdjustedImageArrayAnimation.h"


ImageArrayAnimationFactory::ImageArrayAnimationFactory(std::vector<Image*> imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory){
this->imageArray= imageArray;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
this->dx= dx;
    
this->dy= dy;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageArrayAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

                        if(this->dx != 0 || this->dy != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AdjustedImageArrayAnimation(this->imageArray, this->dx, this->dy, this->animationBehaviorFactory->getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ImageArrayAnimation(this->imageArray, AnimationBehavior::getInstance());
    

                        }
                            
}


    auto ImageArrayAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_CPP
