
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Image;
class PlatformBitmapBaseFactory;
class PlatformTextureBaseFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLImageFactory.h"
class OpenGLESGL11ExtImage;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESGL11ExtImageFactory: public OpenGLImageFactory {


            
    public: OpenGLESGL11ExtImageFactory();
        
    public: Image* getInstance(Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>)
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>
#endif
#if __has_include(<org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>)
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLImageFactory.h")
#include "org/allbinary/image/opengles/OpenGLImageFactory.h"
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESGL11ExtImage.h")
#include "org/allbinary/image/opengles/OpenGLESGL11ExtImage.h"
#endif

        #endif
    
