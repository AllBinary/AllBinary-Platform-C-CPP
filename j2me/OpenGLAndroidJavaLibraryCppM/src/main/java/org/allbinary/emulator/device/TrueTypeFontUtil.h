
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileOutputStream.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Paint.h>

      
#include <android/graphics/Rect.h>

      
#include <android/graphics/Typeface.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
#include <org/microemu/android/device/AndroidImmutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrueTypeFontUtilBase.h"
//TTF
class TrueTypeFontUtil: public TrueTypeFontUtilBase {

    private: static TrueTypeFontUtil instance() { return TrueTypeFontUtil(); }

    public: static TrueTypeFontUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const PreResourceImageUtil preResourceImageUtil = PreResourceImageUtil::getInstance();

    private: const int32_t realFontSize = 18;

    public: OpenGLESImage fontImage = OpenGLESImage::NULL_OPENGL_IMAGE;

private: TrueTypeFontUtil();

    public: void saveFontAtlasAsFile();

    public: Image getFontBitmapGL(GL10 gl, std::string filename, int32_t cellSize, BasicColor basicColor);

    public: std::vector<int32_t> getFontWidths(std::string filename, int32_t fontSize);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
