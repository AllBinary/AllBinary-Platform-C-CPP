
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGE_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/khronos/opengles/GL11.h>

      
#include <javax/microedition/khronos/opengles/GL11Ext.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/opengles/OpenGLLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"
//Many devices don't support this even though it is supposed to
class OpenGLESGL11ExtImage: public OpenGLESImage {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: a: int32_t= 0;

    private: const rectangle: std::vector<int32_t>;

public constructor (Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    public set(GL gl);

    public draw(GL10 gl, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESGL11EXTIMAGE_H
