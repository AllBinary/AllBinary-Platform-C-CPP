
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
        
            #include "java/lang/RuntimeException.h"
        
class GL10;
class Graphics;
class Image;
class SWT;
class ImageData;
class ImageLoader;
class SwtMutableImage;
class AvianUtil;
class ResourceUtil;
class PointFactory;
class Rectangle;
class BasicColor;
class BasicColorFactory;
class CanvasStrings;
class OpenGLCapabilities;
class PreResourceImageUtil;
class OpenGLESImage;
class PreLogUtil;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TTF
class TrueTypeFontUtil: public TrueTypeFontUtilBase {

    private: static TrueTypeFontUtil* instance_owner();
    private: static TrueTypeFontUtil* instance;

    public: static TrueTypeFontUtil* getInstance();

    private: PreResourceImageUtil* preResourceImageUtil;

    private: std::vector<float> widthFloatArray;

    public: OpenGLESImage* fontImage;

    private: float widthScale;

private: TrueTypeFontUtil();

    public: Image* getFontBitmapGL(GL10* gl, std::string filename, int32_t cellSize, BasicColor* basicColor);

    public: void saveFontAtlasAsFile();

    public: Image* getFontBitmap(std::string filename, int32_t cellSize, BasicColor* basicColor);

    public: std::vector<int32_t> getFontWidths(std::string filename, int32_t fontSize);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/eclipse/swt/SWT.h>)
#include <org/eclipse/swt/SWT.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/ImageData.h>)
#include <org/eclipse/swt/graphics/ImageData.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/ImageLoader.h>)
#include <org/eclipse/swt/graphics/ImageLoader.h>
#endif
#if __has_include(<org/microemu/device/swt/SwtMutableImage.h>)
#include <org/microemu/device/swt/SwtMutableImage.h>
#endif
#if __has_include(<org/allbinary/AvianUtil.h>)
#include <org/allbinary/AvianUtil.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLCapabilities.h>)
#include <org/allbinary/graphics/opengles/OpenGLCapabilities.h>
#endif
#if __has_include(<org/allbinary/image/PreResourceImageUtil.h>)
#include <org/allbinary/image/PreResourceImageUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/emulator/device/TrueTypeFontUtilBase.h")
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"
#endif

        #endif
    
