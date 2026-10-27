
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
        #define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
class GL10;
class Image;
class Bitmap;
class Canvas;
class Paint;
class Rect;
class Typeface;
class ResourceUtil;
class BasicColor;
class CanvasStrings;
class PreResourceImageUtil;
class OpenGLESImage;
class LogUtil;
class PreLogUtil;
class CommonStrings;
class AndroidImageInterface;
class AndroidImmutableImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TTF
class TrueTypeFontUtil: public TrueTypeFontUtilBase {

    private: static TrueTypeFontUtil* instance_owner();
    private: static TrueTypeFontUtil* instance;

    public: static TrueTypeFontUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: PreResourceImageUtil* preResourceImageUtil;

    private: const int32_t realFontSize = 18;

    public: OpenGLESImage* fontImage;

private: TrueTypeFontUtil();

    public: void saveFontAtlasAsFile();

    public: Image* getFontBitmapGL(GL10* gl, std::string filename, int32_t cellSize, BasicColor* basicColor);

    public: std::vector<int32_t> getFontWidths(std::string filename, int32_t fontSize);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileOutputStream.h>)
#include <java/io/FileOutputStream.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<android/graphics/Bitmap.h>)
#include <android/graphics/Bitmap.h>
#endif
#if __has_include(<android/graphics/Canvas.h>)
#include <android/graphics/Canvas.h>
#endif
#if __has_include(<android/graphics/Paint.h>)
#include <android/graphics/Paint.h>
#endif
#if __has_include(<android/graphics/Rect.h>)
#include <android/graphics/Rect.h>
#endif
#if __has_include(<android/graphics/Typeface.h>)
#include <android/graphics/Typeface.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/image/PreResourceImageUtil.h>)
#include <org/allbinary/image/PreResourceImageUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/microemu/android/device/AndroidImageInterface.h>)
#include <org/microemu/android/device/AndroidImageInterface.h>
#endif
#if __has_include(<org/microemu/android/device/AndroidImmutableImage.h>)
#include <org/microemu/android/device/AndroidImmutableImage.h>
#endif
#if __has_include("org/allbinary/emulator/device/TrueTypeFontUtilBase.h")
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"
#endif

        #endif
    
