
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/game/layer/SpriteFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/J2SEMath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnimationFactorySpriteScaleUtil
            : public Object
         {

    private: static AnimationFactorySpriteScaleUtil instance() { return AnimationFactorySpriteScaleUtil(); }

    public: static AnimationFactorySpriteScaleUtil getInstance();

    private: const ImageCache imageCache = ImageCacheFactory::getInstance();

    private: const ImageScaleUtil imageScaleUtil = ImageScaleUtil::getInstance();

    private: const OpenGLUtil openGLUtil = OpenGLUtil::getInstance();

    private: const J2SEMath j2seMath = J2SEMath::getInstance();

    private: const OpenGLESImageExclusionUtil openGLESImageExclusionUtil = OpenGLESImageExclusionUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: Sprite createImage(Image image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);

};

            


        #endif //ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H
