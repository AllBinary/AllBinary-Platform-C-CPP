
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

class TrueTypeFontUtil: public TrueTypeFontUtilBase {

    private: static TrueTypeFontUtil* instance() { static std::unique_ptr<TrueTypeFontUtil> value(new TrueTypeFontUtil()); return value.get(); }

    public: static TrueTypeFontUtil* getInstance();

    public: OpenGLESImage* fontImage = OpenGLESImage::NULL_OPENGL_IMAGE;

private: TrueTypeFontUtil();

    public: int32_t getAsTextureSize(int32_t textureSize);

    public: int32_t getCellSize(int32_t cellSize);

    public: Image* getFontBitmap(std::string filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor);

    public: void saveFontAtlasAsFile();

    public: Image* getFontBitmapGL(GL10* gl, std::string filename, int32_t cellSize, BasicColor* basicColor);

    public: std::vector<int32_t> getFontWidths(std::string filename, int32_t fontSize);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
