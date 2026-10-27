
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2023 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H

        
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
class GameFeatureImageCacheFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageScaleUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageJ2MEScaleUtil
            : public virtual Object
         {

    private: static ImageJ2MEScaleUtil* instance_owner();
    private: static ImageJ2MEScaleUtil* instance;

    public: static ImageJ2MEScaleUtil* getInstance();

private: ImageJ2MEScaleUtil();

                //@Throws(Exception.constructor)
            
    public: std::vector<Image*> scaleArray(std::vector<Image*> images, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* scale(Image* image, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/image/GameFeatureImageCacheFactory.h>)
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>
#endif
#if __has_include("org/allbinary/media/image/ImageScaleUtil.h")
#include "org/allbinary/media/image/ImageScaleUtil.h"
#endif

        #endif
    
