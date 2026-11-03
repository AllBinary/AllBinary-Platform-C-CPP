
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLLogUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/opengles/OpenGLStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLLogUtil::OpenGLLogUtil() {
        }
        auto OpenGLLogUtil::instance_owner() -> OpenGLLogUtil* { static std::unique_ptr<OpenGLLogUtil> value(new OpenGLLogUtil()); return value.get(); }
OpenGLLogUtil* OpenGLLogUtil::instance = OpenGLLogUtil::instance_owner();

    auto OpenGLLogUtil::getInstance() -> OpenGLLogUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLLogUtil::instance;
    
}


    auto OpenGLLogUtil::logError(GL10* gl) -> void{

    int32_t error = gl->glGetError();;
    

                        if(error != GL10::GL_NO_ERROR)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(OpenGLStrings::getInstance()->GL_ERROR_LABEL);
    
stringBuffer->appendint(error);
    

                        if(error == 1281)
                        
                                    {
                                    stringBuffer->append(this->MAX_TEXTURE);
    

    std::vector<int32_t> maxTextureSize = std::vector<int32_t>(1);;
    
gl->glGetIntegerv(GL10::GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
    
stringBuffer->appendint(maxTextureSize[0]);
    

                                    }
                                

                        if(error == 1280)
                        
                                    {
                                    PreLogUtil::put(stringBuffer->toString(), this, OpenGLStrings::getInstance()->SET);
    

                                    }
                                
                        else {
                            ForcedLogUtil::log(stringBuffer->toString(), this);
    

                        }
                            

                                    }
                                
}


    auto OpenGLLogUtil::logError(GL10* gl, Image* image) -> void{

    int32_t error = gl->glGetError();;
    

                        if(error != GL10::GL_NO_ERROR)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(OpenGLStrings::getInstance()->GL_ERROR_LABEL);
    
stringBuffer->appendint(error);
    

                        if(error == 1281)
                        
                                    {
                                    stringBuffer->append(this->MAX_TEXTURE);
    

    std::vector<int32_t> maxTextureSize = std::vector<int32_t>(1);;
    
gl->glGetIntegerv(GL10::GL_MAX_TEXTURE_SIZE, maxTextureSize, 0);
    
stringBuffer->appendint(maxTextureSize[0]);
    

                                    }
                                
stringBuffer->append(this->IMAGE);
    
stringBuffer->append(image->toString());
    
PreLogUtil::put(stringBuffer->toString(), this, this->LOG_ERROR);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_CPP
