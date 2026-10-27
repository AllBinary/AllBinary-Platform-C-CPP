
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
        



        #ifndef ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H
        #define ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class IndexedAnimation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AnimationFrameToImageUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IndexedAnimationToImageArrayUtil
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static std::vector<Image*> getInstance(int32_t width, int32_t height, IndexedAnimation* sequentialAnimationInterface);


            
    public: IndexedAnimationToImageArrayUtil();
        
};

            


        #endif //ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_INDEXEDANIMATIONTOIMAGEARRAYUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include("org/allbinary/image/AnimationFrameToImageUtil.h")
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#endif

        #endif
    
