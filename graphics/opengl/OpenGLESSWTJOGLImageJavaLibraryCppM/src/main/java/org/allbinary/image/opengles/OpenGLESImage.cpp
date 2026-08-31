
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <javax/microedition/lcdui/OpenGLESPostLoadPlatformImage.h>

      
#include <javax/microedition/lcdui/PostLoadImageProcessor.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLSurfaceChangedInterface.h"
#include "OpenGLESImageProcessor.h"
#include "OpenGLESImageTranslate.h"
#include "OpenGLESImageProperties.h"
#include "OpenGLImageCacheFactory.h"
//OpenGLESSWTJOGLImageJavaLibrary
class OpenGLESImage: public Image: public OpenGLSurfaceChangedInterface {
        

    public static const NULL_OPENGL_IMAGE: OpenGLESImage = new OpenGLESImage(NullImage.NULL_IMAGE, PlatformBitmapBaseFactory.NULL_PLATFORM_BITMAP_BASE_FACTORY, PlatformTextureBaseFactory.NULL_PLATFORM_TEXTURE_BASE_FACTORY);

    public static const texture2dList: BasicArrayList = new BasicArrayListD();

    public static const TYPE: int32_t = 4;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const textureFactory: PlatformTextureBaseFactory;

    public const openGLBitmap: PlatformBitmapBase;

    public imageProcessor: OpenGLESImageProcessor = OpenGLESImageProcessor.getInstance()!;

    public openGLESImageTranslate: OpenGLESImageTranslate = OpenGLESImageTranslate.getInstance()!;

    public const openGLESImageProperties: OpenGLESImageProperties = new OpenGLESImageProperties();

public constructor (Image image, PlatformBitmapBaseFactory bitmapFactory, PlatformTextureBaseFactory textureFactory){
            super(image.getName(), PostLoadImageProcessor.NULL_POST_LOAD_IMAGE_PROCESSOR);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.openGLBitmap= bitmapFactory!.createBitmap(image);
    
this.textureFactory= textureFactory;
    
OpenGLImageCacheFactory.getInstance()!.init(this);
    
this.platformImage= OpenGLESPostLoadPlatformImage.getInstance();
    
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this.openGLBitmap!.getHeight() *this.openGLESImageProperties!.scaleY2));
    
}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this.openGLBitmap!.getWidth() *this.openGLESImageProperties!.scaleX2));
    
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    bool initTexture(GL10 gl){

                        if(!OpenGLESImage.texture2dList!.contains(this))
                        
                                    {
                                    OpenGLESImage.texture2dList!.add(this);
    

    textures: std::vector<int32_t> = new Array(1);;
    
gl.glEnable(GL10.GL_TEXTURE_2D);
    

                        if(this.openGLESImageProperties!.textureID !=  -1)
                        
                                    {
                                    textures[0]= this.openGLESImageProperties!.textureID;
    
gl.glDeleteTextures(1, textures, 0);
    

                                    }
                                
gl.glGenTextures(1, textures, 0);
    
this.openGLESImageProperties!.textureID= textures[0]!;
    
gl.glBindTexture(GL10.GL_TEXTURE_2D, this.openGLESImageProperties!.textureID);
    
gl.glTexParameterf(GL10.GL_TEXTURE_2D, GL10.GL_TEXTURE_MIN_FILTER, GL10.GL_NEAREST);
    
gl.glTexParameterf(GL10.GL_TEXTURE_2D, GL10.GL_TEXTURE_WRAP_S, GL10.GL_CLAMP_TO_EDGE);
    
gl.glTexParameterf(GL10.GL_TEXTURE_2D, GL10.GL_TEXTURE_WRAP_T, GL10.GL_CLAMP_TO_EDGE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



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


    public string toString(){

    graphicsStrings: GraphicsStrings = GraphicsStrings.getInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(this.getName())!.append(super.toString())!.append(graphicsStrings!.OPACITY)!.appendfloat(this.openGLESImageProperties!.alphaf)!.toString();;
    
}


};

            

