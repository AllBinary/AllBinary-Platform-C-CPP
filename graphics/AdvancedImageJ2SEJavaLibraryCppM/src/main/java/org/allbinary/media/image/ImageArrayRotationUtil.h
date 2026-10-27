
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/io/IOException.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageJ2SERotationUtil;
class ImageProcessorInput;
class ImageProcessedVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArrayRotationUtil
            : public virtual Object
         {

    private: static ImageArrayRotationUtil* instance_owner();
    private: static ImageArrayRotationUtil* instance;

    public: static ImageArrayRotationUtil* getInstance();


            
    public: ImageArrayRotationUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: const std::string TOTAL_ANGLE = "totalAngle: ";

                //@Throws(IOException.constructor)
            
    public: void process(ImageProcessorInput* imageProcessorInput, std::string input, ImageProcessedVisitor* visitor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/image/ImageJ2SERotationUtil.h")
#include "org/allbinary/media/image/ImageJ2SERotationUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageProcessorInput.h")
#include "org/allbinary/media/image/ImageProcessorInput.h"
#endif
#if __has_include("org/allbinary/media/image/ImageProcessedVisitor.h")
#include "org/allbinary/media/image/ImageProcessedVisitor.h"
#endif

        #endif
    
