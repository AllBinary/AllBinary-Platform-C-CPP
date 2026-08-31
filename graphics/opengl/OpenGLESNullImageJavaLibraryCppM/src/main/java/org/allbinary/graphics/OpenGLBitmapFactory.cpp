
        /* Generated Code Do Not Modify */
        



#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBase.h>

      
#include <org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "Config.h"
#include "OpenGLBitmap.h"

class OpenGLBitmapFactory: public PlatformBitmapBaseFactory {
        

    private: static const instance: OpenGLBitmapFactory = new OpenGLBitmapFactory();

    public static OpenGLBitmapFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLBitmapFactory.instance;
    
}


//inner= member=true isStatic=
class Config
            : public Object
         {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    public const bitmapConfig: any;

public constructor (any = {} bitmapConfig){

            super();
        this.bitmapConfig= bitmapConfig;
    
}


};

            
    public const ARGB_8888 = new this.Config(NullUtil.getInstance()!.NULL_OBJECT);

    public OpenGLBitmap createBitmap(int32_t width, int32_t height, OpenGLBitmapFactory.Config config){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(NullUtil.getInstance()!.NULL_OBJECT);
    
}


                //@Throws(IOException.constructor)
            
    public OpenGLBitmap decodeStream(InputStream inputStream){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(NullUtil.getInstance()!.NULL_OBJECT);
    
}


    public PlatformBitmapBase createBitmap(Image image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OpenGLBitmap(NullUtil.getInstance()!.NULL_OBJECT);
    
}


};

            

