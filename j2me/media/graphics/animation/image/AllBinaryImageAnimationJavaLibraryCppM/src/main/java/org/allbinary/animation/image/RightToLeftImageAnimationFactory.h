
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATIONFACTORY_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "RightToLeftImageAnimation.h"
#include "AdjustedRightToLeftImageAnimation.h"

class RightToLeftImageAnimationFactory: public BaseImageAnimationFactory {

public: RightToLeftImageAnimationFactory(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_RIGHTTOLEFTIMAGEANIMATIONFACTORY_H
