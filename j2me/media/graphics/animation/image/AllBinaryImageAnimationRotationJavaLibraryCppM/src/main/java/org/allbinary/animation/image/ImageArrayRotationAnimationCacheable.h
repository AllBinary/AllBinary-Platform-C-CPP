
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdjustedImageArrayRotationAnimation.h"
#include "ImageArrayRotationAnimationInfo.h"

class ImageArrayRotationAnimationCacheable: public AdjustedImageArrayRotationAnimation, public CacheableInterface {

public: ImageArrayRotationAnimationCacheable(Object* anyType, AnimationBehavior animationBehavior);

    public: Object* getKey();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H
