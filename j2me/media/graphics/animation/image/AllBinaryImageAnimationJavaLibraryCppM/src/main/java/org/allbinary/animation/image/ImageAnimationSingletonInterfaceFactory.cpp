
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/SingletonAnimationInterfaceFactory.h>

      
#include <org/allbinary/image/AnimationFrameToImageUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageAnimation.h"

class ImageAnimationSingletonInterfaceFactory: public SingletonAnimationInterfaceFactory {

public: ImageAnimationSingletonInterfaceFactory(Animation animationInterface, int32_t width, int32_t height) : SingletonAnimationInterfaceFactory(ImageAnimation(AnimationFrameToImageUtil::getInstance().getInstanceWH(width, height, animationInterface), AnimationBehavior::getInstance())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

