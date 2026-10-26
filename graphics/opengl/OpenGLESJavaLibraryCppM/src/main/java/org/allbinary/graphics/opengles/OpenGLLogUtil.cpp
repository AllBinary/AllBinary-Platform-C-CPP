
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
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

    private: static OpenGLLogUtil instance() { return OpenGLLogUtil(); }

    public: static OpenGLLogUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLLogUtil::instance();
    
}


    private: const std::string MAX_TEXTURE = " Max Texture Size: ";

    public: void logError(GL10 gl){

    int32_t error = gl.glGetError();;
    

                        if(error != GL10::GL_NO_ERROR)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(OpenGLStrings::getInstance().GL_ERROR_LABEL);
    
stringBuffer.appendint(error);
    

                        if(error == 1281)
                        
                                    {
                                    stringBuffer.append(this->MAX_TEXTURE);
    

    std::vector<int32_t> maxTextureSize = std::vector<int32_t>(1);;
    
gl.glGetIntegerv(GL10::GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
    
stringBuffer.appendint(maxTextureSize[0]);
    

                                    }
                                

                        if(error == 1280)
                        
                                    {
                                    PreLogUtil::put(stringBuffer.toString(), this, OpenGLStrings::getInstance().SET);
    

                                    }
                                
                        else {
                            ForcedLogUtil::log(stringBuffer.toString(), this);
    

                        }
                            

                                    }
                                
}


    private: const std::string LOG_ERROR = "logError";

    private: const std::string IMAGE = " Image: ";

    public: void logError(GL10 gl, Image image){

    int32_t error = gl.glGetError();;
    

                        if(error != GL10::GL_NO_ERROR)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(OpenGLStrings::getInstance().GL_ERROR_LABEL);
    
stringBuffer.appendint(error);
    

                        if(error == 1281)
                        
                                    {
                                    stringBuffer.append(this->MAX_TEXTURE);
    

    std::vector<int32_t> maxTextureSize = std::vector<int32_t>(1);;
    
gl.glGetIntegerv(GL10::GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
    
stringBuffer.appendint(maxTextureSize[0]);
    

                                    }
                                
stringBuffer.append(this->IMAGE);
    
stringBuffer.append(image.toString());
    
PreLogUtil::put(stringBuffer.toString(), this, this->LOG_ERROR);
    

                                    }
                                
}


};

            

