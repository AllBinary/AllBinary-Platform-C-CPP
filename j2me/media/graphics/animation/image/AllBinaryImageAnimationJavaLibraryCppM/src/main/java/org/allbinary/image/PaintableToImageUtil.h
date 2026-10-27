
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
        



        #ifndef ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H
        #define ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H

        
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
class PaintableInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameFeatureImageCacheFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaintableToImageUtil
            : public virtual Object
         {

    private: static PaintableToImageUtil* instance_owner();
    private: static PaintableToImageUtil* instance;

                //@Throws(Exception.constructor)
            
    public: static Image* getImage(PaintableInterface* paintableInterface, int32_t width, int32_t height);


            
    public: PaintableToImageUtil();
        
};

            


        #endif //ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_PAINTABLETOIMAGEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include("org/allbinary/image/GameFeatureImageCacheFactory.h")
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#endif

        #endif
    
