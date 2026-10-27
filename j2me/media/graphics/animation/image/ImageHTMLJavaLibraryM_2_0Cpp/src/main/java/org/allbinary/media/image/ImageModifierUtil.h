
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
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class Anchor;
class BasicColor;
class CommonStrings;
class LogUtil;
class StringMaker;
class PlaynImage;
class ResourceCallbackStrings;
class Callback;
class Canvas;
class CoreImage;
class ImageImpl;
class HTMLPlaynUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageModifierUtil
            : public virtual Object
         {

    public: static ImageModifierUtil* getInstanceOrCreate();


            
    public: ImageModifierUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ResourceCallbackStrings* resourceCallbackStrings;

    private: HTMLPlaynUtil* playnUtil;

    private: std::vector<bool> alphaArray;

    public: void setColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

    public: void changeColor(Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

    public: void setAlpha(Image* originalImage, Image* image, int32_t imageIndex, int32_t alpha);

    public: void setAlphaF(Image* originalImage, Image* image, int32_t imageIndex, float alpha);

    public: void setAlpha2(Image* originalImage, Image* image, int32_t imageIndex, float alpha);

    public: void setAlpha3(Image* image, float alpha);

    public: std::vector<Image*> getImageArray(std::vector<Image*> originalImageArray);

    public: void handleImage(std::vector<Image*> imageArray, int32_t index, Image* image);

    public: void copy(std::vector<Image*> imageArray, int32_t index, Image* image, CoreImage* image3);

    public: void reset();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
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
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/microemu/device/playn/PlaynImage.h>)
#include <org/microemu/device/playn/PlaynImage.h>
#endif
#if __has_include(<org/microemu/device/ResourceCallbackStrings.h>)
#include <org/microemu/device/ResourceCallbackStrings.h>
#endif
#if __has_include(<playn/core/Callback.h>)
#include <playn/core/Callback.h>
#endif
#if __has_include(<playn/core/Canvas.h>)
#include <playn/core/Canvas.h>
#endif
#if __has_include(<playn/core/CoreImage.h>)
#include <playn/core/CoreImage.h>
#endif
#if __has_include(<playn/core/ImageImpl.h>)
#include <playn/core/ImageImpl.h>
#endif
#if __has_include(<playn/html/HTMLPlaynUtil.h>)
#include <playn/html/HTMLPlaynUtil.h>
#endif

        #endif
    
