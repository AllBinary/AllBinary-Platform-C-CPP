
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATIONFACTORY_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "LeftToRightImageAnimation.h"
#include "AdjustedLeftToRightImageAnimation.h"

class LeftToRightImageAnimationFactory: public BaseImageAnimationFactory {

public: LeftToRightImageAnimationFactory(Image image, std::vector<int32_t> sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LEFTTORIGHTIMAGEANIMATIONFACTORY_H
