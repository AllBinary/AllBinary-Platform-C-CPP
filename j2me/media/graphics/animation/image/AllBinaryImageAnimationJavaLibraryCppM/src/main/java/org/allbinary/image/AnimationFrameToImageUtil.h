
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
        



        #ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class Animation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameFeatureImageCacheFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationFrameToImageUtil
            : public virtual Object
         {

    private: static AnimationFrameToImageUtil* instance_owner();
    private: static AnimationFrameToImageUtil* instance;

    public: static AnimationFrameToImageUtil* getInstance();


            
    public: AnimationFrameToImageUtil();
        
                //@Throws(Exception.constructor)
            
    public: Image* getInstanceTranslate(int32_t width, int32_t height, Animation* animationInterface);

                //@Throws(Exception.constructor)
            
    public: Image* getInstanceWH(int32_t width, int32_t height, Animation* animationInterface);

};

            


        #endif //ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include("org/allbinary/image/GameFeatureImageCacheFactory.h")
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#endif

        #endif
    
