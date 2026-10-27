
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H
        #define ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class Sprite;
class SpriteFactory;
class OpenGLUtil;
class ImageCache;
class ImageCacheFactory;
class OpenGLESImageExclusionUtil;

class J2SEMath;

class ImageScaleUtil;


















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationFactorySpriteScaleUtil
            : public virtual Object
         {

    private: static AnimationFactorySpriteScaleUtil* instance_owner();
    private: static AnimationFactorySpriteScaleUtil* instance;

    public: static AnimationFactorySpriteScaleUtil* getInstance();


            
    public: AnimationFactorySpriteScaleUtil();
        
    private: ImageCache* imageCache;

    private: ImageScaleUtil* imageScaleUtil;

    private: OpenGLUtil* openGLUtil;

    private: J2SEMath* j2seMath;

    private: OpenGLESImageExclusionUtil* openGLESImageExclusionUtil;

                //@Throws(Exception.constructor)
            
    public: Sprite* createImage(Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);

};

            


        #endif //ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/Sprite.h>)
#include <javax/microedition/lcdui/game/Sprite.h>
#endif
#if __has_include(<org/allbinary/game/layer/SpriteFactory.h>)
#include <org/allbinary/game/layer/SpriteFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>)
#include <org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>
#endif

#if __has_include(<org/allbinary/logic/math/J2SEMath.h>)
#include <org/allbinary/logic/math/J2SEMath.h>
#endif

#if __has_include(<org/allbinary/media/image/ImageScaleUtil.h>)
#include <org/allbinary/media/image/ImageScaleUtil.h>
#endif



        #endif
    
