
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

        
            #include "java/lang/RuntimeException.h"
        
class GL10;
class Image;
class BasicColor;
class OpenGLESImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TrueTypeFontUtil: public TrueTypeFontUtilBase {

    private: static TrueTypeFontUtil* instance_owner();
    private: static TrueTypeFontUtil* instance;

    public: static TrueTypeFontUtil* getInstance();

    public: OpenGLESImage* fontImage;

private: TrueTypeFontUtil();

    public: int32_t getAsTextureSize(int32_t textureSize);

    public: int32_t getCellSize(int32_t cellSize);

    public: Image* getFontBitmap(std::string filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor);

    public: void saveFontAtlasAsFile();

    public: Image* getFontBitmapGL(GL10* gl, std::string filename, int32_t cellSize, BasicColor* basicColor);

    public: std::vector<int32_t> getFontWidths(std::string filename, int32_t fontSize);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif
#if __has_include("org/allbinary/emulator/device/TrueTypeFontUtilBase.h")
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"
#endif

        #endif
    
