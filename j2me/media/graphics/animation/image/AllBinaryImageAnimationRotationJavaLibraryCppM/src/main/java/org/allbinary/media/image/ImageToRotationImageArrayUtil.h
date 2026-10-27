
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H

        
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
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageRotationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageToRotationImageArrayUtil
            : public virtual Object
         {

    private: static ImageToRotationImageArrayUtil* instance_owner();
    private: static ImageToRotationImageArrayUtil* instance;

    public: static ImageToRotationImageArrayUtil* getInstance();

private: ImageToRotationImageArrayUtil();

                //@Throws(Exception.constructor)
            
    public: std::vector<Image*> generate(Image* image, int32_t angleIncrement, int32_t totalAngle);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include("org/allbinary/media/image/ImageRotationUtil.h")
#include "org/allbinary/media/image/ImageRotationUtil.h"
#endif

        #endif
    
