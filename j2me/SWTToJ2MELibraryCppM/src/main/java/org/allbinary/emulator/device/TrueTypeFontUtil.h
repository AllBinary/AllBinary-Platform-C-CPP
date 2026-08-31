
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/eclipse/swt/graphics/ImageLoader.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
#include <org/allbinary/AvianUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/opengles/OpenGLCapabilities.h>

      
#include <org/allbinary/image/PreResourceImageUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrueTypeFontUtilBase.h"
//TTF
class TrueTypeFontUtil: public TrueTypeFontUtilBase {
        

    private: static const instance: TrueTypeFontUtil = new TrueTypeFontUtil();

    public static TrueTypeFontUtil getInstance();

    private: const preResourceImageUtil: PreResourceImageUtil = PreResourceImageUtil.getInstance()!;

    private: const widthFloatArray: std::vector<float>;

    public fontImage: OpenGLESImage = OpenGLESImage.NULL_OPENGL_IMAGE;

    private: const widthScale: float;

private constructor ();

    public Image getFontBitmapGL(GL10 gl, string filename, int32_t cellSize, BasicColor basicColor);

    public saveFontAtlasAsFile();

    public Image getFontBitmap(string filename, int32_t cellSize, BasicColor basicColor);

    public std::vector<int32_t> getFontWidths(string filename, int32_t fontSize);

};

            


        #endif //ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
