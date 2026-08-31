
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/opengles/OpenGLStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLLogUtil
            : public Object
         {
        

    private: static const instance: OpenGLLogUtil = new OpenGLLogUtil();

    public static OpenGLLogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLLogUtil.instance;
    
}


    private: const MAX_TEXTURE: string = " Max Texture Size: ";

    public logError(GL10 gl){

    error: int32_t = gl.glGetError()!;;
    

                        if(error != GL10.GL_NO_ERROR)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(OpenGLStrings.getInstance()!.GL_ERROR_LABEL);
    
stringBuffer!.appendint(error);
    

                        if(error == 1281)
                        
                                    {
                                    stringBuffer!.append(this.MAX_TEXTURE);
    

    maxTextureSize: std::vector<int32_t> = new Array(1);;
    
gl.glGetIntegerv(GL10.GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
    
stringBuffer!.appendint(maxTextureSize[0]!);
    

                                    }
                                

                        if(error == 1280)
                        
                                    {
                                    PreLogUtil.put(stringBuffer!.toString(), this, OpenGLStrings.getInstance()!.SET);
    

                                    }
                                
                        else {
                            ForcedLogUtil.log(stringBuffer!.toString(), this);
    

                        }
                            

                                    }
                                
}


    private: const LOG_ERROR: string = "logError";

    private: const IMAGE: string = " Image: ";

    public logError(GL10 gl, Image image){

    error: int32_t = gl.glGetError()!;;
    

                        if(error != GL10.GL_NO_ERROR)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(OpenGLStrings.getInstance()!.GL_ERROR_LABEL);
    
stringBuffer!.appendint(error);
    

                        if(error == 1281)
                        
                                    {
                                    stringBuffer!.append(this.MAX_TEXTURE);
    

    maxTextureSize: std::vector<int32_t> = new Array(1);;
    
gl.glGetIntegerv(GL10.GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
    
stringBuffer!.appendint(maxTextureSize[0]!);
    

                                    }
                                
stringBuffer!.append(this.IMAGE);
    
stringBuffer!.append(image.toString());
    
PreLogUtil.put(stringBuffer!.toString(), this, this.LOG_ERROR);
    

                                    }
                                
}


};

            

