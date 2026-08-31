
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLSurfaceChangedInterface.h"
#include "OpenGLESImageProperties.h"
//OpenGLESNullImageJ2MEJavaLibrary
class OpenGLESImage
            : public Object
        : public OpenGLSurfaceChangedInterface {
        

    public static const NULL_OPENGL_IMAGE: OpenGLESImage = new OpenGLESImage(NullImage.NULL_IMAGE, PlatformBitmapBaseFactory.NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory.NULL_PLATFORM_TEXTURE_BASE_FACTORY);

    public static const texture2dList: BasicArrayList = new BasicArrayListD();

    public static const TYPE: int32_t = 4;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const textureFactory: PlatformTextureBaseFactory;

    public const openGLBitmap: PlatformBitmapBase;

    public const openGLESImageProperties: OpenGLESImageProperties = new OpenGLESImageProperties();

public constructor (Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory){

            super();
        this.openGLBitmap= bitmapFactory!.createBitmap(image);
    
this.textureFactory= textureFactory;
    
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    bool initTexture(GL10 gl){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z){
}


    public draw(GL10 gl, int32_t x, int32_t y, int32_t z){
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESImage.TYPE;
    
}


};

            

