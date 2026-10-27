
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>
class LogUtil;
class StringMaker;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class ImageUnifierProperties;
class ImageUnifierCell;
class ImageUnifierUtil;
class ImageProcessorInput;
class ImageProcessedVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpriteSplitterUtil
            : public virtual Object
         {

    private: static SpriteSplitterUtil* instance_owner();
    private: static SpriteSplitterUtil* instance;

    public: static SpriteSplitterUtil* getInstance();


            
    public: SpriteSplitterUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonSeps* commonSeps;

    private: CommonStrings* commonStrings;

    public: std::vector<std::string> ANIMATIONS_LABELS;

    public: const std::string DIRECTIONAL_ANIMATIONS = "Directional DLRU";

    public: const std::string HORIZONTAL_ANIMATIONS = "Horizontal Animations";

    public: const std::string HORIZONTAL_SPRITE = "Horizontal A=R=Y F=C=X";

    private: std::vector<std::string> ROW_NAME;

    private: const std::string _ROW = "_row";

                //@Throws(Exception.constructor)
            
    public: void process(ImageProcessorInput* imageProcessorInput, int32_t totalFrames, int32_t totalAnimations, int32_t widthReduction, int32_t heightReduction, int32_t increaseWidth, int32_t increaseHeight, std::string spriteType, ImageProcessedVisitor* visitor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_SPRITESPLITTERUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageUnifierProperties.h")
#include "org/allbinary/media/image/ImageUnifierProperties.h"
#endif
#if __has_include("org/allbinary/media/image/ImageUnifierCell.h")
#include "org/allbinary/media/image/ImageUnifierCell.h"
#endif
#if __has_include("org/allbinary/media/image/ImageUnifierUtil.h")
#include "org/allbinary/media/image/ImageUnifierUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageProcessorInput.h")
#include "org/allbinary/media/image/ImageProcessorInput.h"
#endif
#if __has_include("org/allbinary/media/image/ImageProcessedVisitor.h")
#include "org/allbinary/media/image/ImageProcessedVisitor.h"
#endif

        #endif
    
