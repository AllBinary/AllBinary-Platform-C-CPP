
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
        



        #ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class AnimationFactoryInitializationVisitor;
class BaseImageAnimationFactory;


class ScaleProperties;
class ImageJ2MEScaleUtil;


















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationFactoryImageScaleUtil
            : public virtual Object
         {

    private: static AnimationFactoryImageScaleUtil* instance_owner();
    private: static AnimationFactoryImageScaleUtil* instance;

    public: static AnimationFactoryImageScaleUtil* getInstance();


            
    public: AnimationFactoryImageScaleUtil();
        
    private: ImageJ2MEScaleUtil* imageScaleUtil;

                //@Throws(Exception.constructor)
            
    public: Image* createImage(Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);

                //@Throws(Exception.constructor)
            
    public: void processAdjust(BaseImageAnimationFactory* baseImageAnimationFactory);

};

            


        #endif //ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h>)
#include <org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h>
#endif
#if __has_include(<org/allbinary/animation/image/BaseImageAnimationFactory.h>)
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>
#endif


#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageJ2MEScaleUtil.h>)
#include <org/allbinary/media/image/ImageJ2MEScaleUtil.h>
#endif



        #endif
    
