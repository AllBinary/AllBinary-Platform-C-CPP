
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;
class LogUtil;
class ImageScaleUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ScaleBaseProcessor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScaleProcessor: public ScaleBaseProcessor {

    private: static ScaleProcessor* instanceC_owner();
    private: static ScaleProcessor* instanceC;

    public: static ScaleBaseProcessor* getInstance();


            
    public: ScaleProcessor();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: ImageScaleUtil* imageScaleUtil;

    public: void update(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageScaleUtil.h>)
#include <org/allbinary/media/image/ImageScaleUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/animation/image/ScaleBaseProcessor.h")
#include "org/allbinary/animation/image/ScaleBaseProcessor.h"
#endif

        #endif
    
