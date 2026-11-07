
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"


ImageArrayRotationAnimationCacheable::ImageArrayRotationAnimationCacheable(Object* anyType, AnimationBehavior* animationBehavior) : AdjustedImageArrayRotationAnimation((dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType))->getImageArray(), (dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType))->getAngleInfoP(), (dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType))->getTotalAngle(), (dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType))->getDx(), (dynamic_cast<ImageArrayRotationAnimationInfo*>(anyType))->getDy(), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ImageArrayRotationAnimationCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(NullUtil::getInstance()->NULL_OBJECT);
    
}


    auto ImageArrayRotationAnimationCacheable::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_CPP
