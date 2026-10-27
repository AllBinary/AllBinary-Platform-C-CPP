
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/WritableRaster.h>
class Image;
class Anchor;
class BasicColor;
class PreLogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class ImageCreationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageModifierUtil
            : public virtual Object
         {

    private: static ImageModifierUtil* instance_owner();
    private: static ImageModifierUtil* instance;

    public: static ImageModifierUtil* getInstanceOrCreate();


            
    public: ImageModifierUtil();
        
    private: ImageUtil* imageUtil;

    public: void setBasicColorP(BasicColor* basicColor);

    private: std::vector<int32_t> colorArray;

    public: void setColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

    public: void changeColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

    public: void setAlpha(Image* unusedOriginalImage, Image* image, int32_t imageIndex, int32_t alphaInt);

    public: std::vector<Image*> getImageArray(std::vector<Image*> originalImageArray);

    public: void handleImage(std::vector<Image*> imageArray, int32_t index, Image* image);

    public: void reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<java/awt/image/ColorModel.h>)
#include <java/awt/image/ColorModel.h>
#endif
#if __has_include(<java/awt/image/WritableRaster.h>)
#include <java/awt/image/WritableRaster.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageCreationUtil.h")
#include "org/allbinary/media/image/ImageCreationUtil.h"
#endif

        #endif
    
