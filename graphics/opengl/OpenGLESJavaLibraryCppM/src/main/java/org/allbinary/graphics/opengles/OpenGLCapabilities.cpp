
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/khronos/opengles/GL11.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESGL10ImageFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLESGL11VBOImageFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLImageSpecificFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"

class OpenGLCapabilities
            : public Object
         {

    private: static OpenGLCapabilities* instance() { static std::unique_ptr<OpenGLCapabilities> value(new OpenGLCapabilities()); return value.get(); }

    public: static OpenGLCapabilities* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLCapabilities::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const bool CUSTOM_GL_SURFACE_VIEW = true;

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: bool initialized = false;

    private: std::string glVersionString = this->stringUtil->EMPTY_STRING;

    private: std::string glShaderVersionString = this->stringUtil->EMPTY_STRING;

    public: int32_t shaderVersion = 0;

    private: std::string glRenderer = this->stringUtil->EMPTY_STRING;

    private: std::string glVendor = this->stringUtil->EMPTY_STRING;

    private: std::string glExtensions = this->stringUtil->EMPTY_STRING;

    private: bool possiblyAccelerated= false;

    private: std::string acceleratedString = this->stringUtil->EMPTY_STRING;

    public: int32_t maxTextureSize = 64;

    public: const std::string VERSION_1_0 = "1.0";

    public: const std::string VERSION_1_1 = "1.1";

    public: const std::string VERSION_2_0 = "2.0";

    public: const std::string VERSION_3_0 = "3.0";

    public: const std::string VERSION_3_1 = "3.1";

    public: const std::string VERSION_3_2 = "3.2";

    public: const std::string VERSION_HIGHER_THAN_EXISTS = "999.999";

    public: const std::string VERSION_UNK = "Unk";

    public: const std::string GL_EXT_GPU_SHADER_100 = "GL_ARB_shading_language_100";

    public: const std::string GL_EXT_GPU_SHADER4 = "GL_EXT_gpu_shader4";

    private: std::string glVersion = this->glVersionString;

    public: std::string glInstanceVersion = this->VERSION_UNK;

    private: bool glExtensionDrawTexture= false;

    private: bool glThreedDrawTexture= false;

    private: bool glExtensionGPUShader4= false;

    private: bool glExtensionGPUShader100= false;

    private: bool vertexBufferObjectSupport= false;

private: OpenGLCapabilities(){
}


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


    private: void requireInitialization(){
}


    public: void initCapabilities(GL10* gl){

    std::string METHOD_NAME = "initGLCapabilities";;
    

        try {
            
    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

    OpenGLImageSpecificFactory* openGLImageSpecificFactory = OpenGLImageSpecificFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
this->glVersionString= gl->glGetString(GL10::GL_VERSION);
    

    int32_t GL_SHADING_LANGUAGE_VERSION = 0x8b8c;;
    
this->glShaderVersionString= gl->glGetString(GL_SHADING_LANGUAGE_VERSION);
    

                        if(false)
                        
                                    {
                                    this->glShaderVersionString= this->stringUtil->EMPTY_STRING;
    

                                    }
                                

        try {
            
                        if(true && this->glShaderVersionString.indexOf('.') >= 0)
                        
                                    {
                                    
    int32_t startIndex = this->glShaderVersionString.lastIndexOf(' ');;
    

                        if(startIndex >= 0)
                        
                                    {
                                    this->glShaderVersionString= this->glShaderVersionString.substring(startIndex +1);
    

                                    }
                                
this->shaderVersion= Integer.parseInt(this->glShaderVersionString.replace(CommonSeps::getInstance()->PERIOD, StringUtil::getInstance()->EMPTY_STRING));
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, METHOD_NAME, &e);
    
}

this->glRenderer= gl->glGetString(GL10::GL_RENDERER);
    
this->glVendor= gl->glGetString(GL10::GL_VENDOR);
    
this->glExtensions= gl->glGetString(GL10::GL_EXTENSIONS);
    

                        if(this->glExtensions.indexOf(this->GL_EXT_GPU_SHADER_100) >= 0)
                        
                                    {
                                    this->glExtensionGPUShader100= true;
    

                                    }
                                
                        else {
                            this->glExtensionGPUShader100= false;
    

                        }
                            

                        if(this->glExtensions.indexOf(this->GL_EXT_GPU_SHADER4) >= 0)
                        
                                    {
                                    this->glExtensionGPUShader4= true;
    

                                    }
                                
                        else {
                            this->glExtensionGPUShader4= false;
    

                        }
                            

                        if(false)
                        
                                    {
                                    this->glRenderer= this->stringUtil->EMPTY_STRING;
    

                                    }
                                

                        if(this->glRenderer.toLowerCase().indexOf("pixelflinger") >= 0)
                        
                                    {
                                    this->acceleratedString= "Probably Not for " +this->glRenderer;
    
this->possiblyAccelerated= false;
    

                                    }
                                
                        else {
                            this->acceleratedString= "Probably for " +this->glRenderer;
    

                    //Otherwise - statement - EmptyStmt

this->possiblyAccelerated= true;
    

                        }
                            
this->glExtensionDrawTexture= false;
    

                        if(false)
                        
                                    {
                                    this->glVersionString= this->stringUtil->EMPTY_STRING;
    
this->glVersion= this->VERSION_UNK;
    

                                    }
                                
                             else 
                        if(this->glVersionString.indexOf(" 1.0") >= 0)
                        
                                    {
                                    this->glVersion= this->VERSION_1_0;
    

                                    }
                                
                             else 
                        if(this->glVersionString.indexOf(" 1.1") >= 0)
                        
                                    {
                                    this->glVersion= this->VERSION_1_1;
    

                                    }
                                
                        else {
                            this->glVersion= this->VERSION_UNK;
    

                        }
                            

                        if(
                                        (dynamic_cast<const GL11*>(gl) != nullptr)
                                    )
                        
                                    {
                                    this->glInstanceVersion= this->VERSION_1_1;
    

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const GL10*>(gl) != nullptr)
                                    )
                        
                                    {
                                    this->glInstanceVersion= this->VERSION_1_0;
    

                                    }
                                

                        if(false)
                        
                                    {
                                    this->glVendor= this->stringUtil->EMPTY_STRING;
    

                                    }
                                

                        if(false)
                        
                                    {
                                    this->glExtensions= this->stringUtil->EMPTY_STRING;
    

                                    }
                                

                        if(this->possiblyAccelerated)
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append("VBO:?")->appendboolean((this->glInstanceVersion == this->VERSION_1_1))->append("||")->appendboolean(this->isExtension(openGLFeatureFactory->OPENGL_VERTEX_BUFFER_OBJECT))->toString(), this, METHOD_NAME);
    

                        if((this->glInstanceVersion == this->VERSION_1_1 || this->isExtension(openGLFeatureFactory->OPENGL_VERTEX_BUFFER_OBJECT)))
                        
                                    {
                                    
                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    PreLogUtil::put("VBO implementation was detected, but disabled by default for Android", this, METHOD_NAME);
    

                                    }
                                
                        else {
                            PreLogUtil::put("VBO implementation was detected, but disabled for now", this, METHOD_NAME);
    

                        }
                            

                                    }
                                

                                    }
                                

    StringUtil* stringUtil = StringUtil::getInstance();;
    

                        if(features->isDefault(openGLFeatureFactory->OPENGL_AUTO_SELECT))
                        
                                    {
                                    
                        if(this->vertexBufferObjectSupport)
                        
                                    {
                                    openGLImageSpecificFactory->setImageFactory(new OpenGLESGL11VBOImageFactory());
    

                                    }
                                
                        else {
                            stringBuffer->append("OpenGL is on but ");
    
stringBuffer->append(stringUtil->toString(openGLFeatureFactory->OPENGL_DRAW_TEXTURE));
    
stringBuffer->append(" was not available");
    
PreLogUtil::put(stringBuffer->toString(), this, METHOD_NAME);
    
openGLImageSpecificFactory->setImageFactory(new OpenGLESGL10ImageFactory());
    

                        }
                            

                                    }
                                
                        else {
                            stringBuffer->append(stringUtil->toString(openGLFeatureFactory->OPENGL_AUTO_SELECT));
    
stringBuffer->append(" is not on");
    
PreLogUtil::put(stringBuffer->toString(), this, METHOD_NAME);
    
openGLImageSpecificFactory->setImageFactory(new OpenGLESGL10ImageFactory());
    

                        }
                            

    std::vector<int32_t> maxTextureSizeArray = std::vector<int32_t>(1);;
    
gl->glGetIntegerv(GL10::GL_MAX_TEXTURE_SIZE, maxTextureSizeArray, 0);
    
this->maxTextureSize= maxTextureSizeArray[0];
    
this->initialized= true;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, METHOD_NAME, &e);
    
}

}


    private: bool isExtension(OpenGLFeature* gameFeature){

    int32_t index = this->glExtensions.indexOf(gameFeature->getName());;
    

                        if(index >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: bool isGlExtensionDrawTexture(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glExtensionDrawTexture;
    
}


    public: bool isGlExtensionGPUShader100(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glExtensionGPUShader100;
    
}


    public: bool isGlExtensionGPUShader4(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glExtensionGPUShader4;
    
}


    public: std::string getGlVersion(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glVersion;
    
}


    public: std::string getGlVersionString(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glVersionString;
    
}


    public: std::string getGlShaderVersion(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glShaderVersionString;
    
}


    public: bool isGlThreedDrawTexture(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glThreedDrawTexture;
    
}


    public: std::string getGlRenderer(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->glRenderer;
    
}


    public: bool isVertexBufferObjectSupport(){
this->requireInitialization();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vertexBufferObjectSupport;
    
}


    public: bool isTextureSizeValid(int32_t widthAndHeight){
this->requireInitialization();
    

                        if(this->maxTextureSize >= widthAndHeight)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toString(){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("GL_VERSION: ");
    
stringBuffer->append(this->glVersionString);
    
stringBuffer->append(" GL_SHADING_LANGUAGE_VERSION: ");
    
stringBuffer->append(this->glShaderVersionString);
    
stringBuffer->append(" GL_RENDERER: ");
    
stringBuffer->append(this->glRenderer);
    
stringBuffer->append(" GL_VENDOR: ");
    
stringBuffer->append(this->glVendor);
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(" Is Accelerated: ");
    
stringBuffer->append(this->acceleratedString);
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(" VBO Support: ");
    
stringBuffer->appendboolean(this->isVertexBufferObjectSupport());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(" Max Texture Size: ");
    
stringBuffer->appendint(this->maxTextureSize);
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(" GL_EXTENSIONS: ");
    

        try {
            
    Tokenizer* tokenizer = new Tokenizer(commonSeps->SPACE);;
    

    BasicArrayList* list = tokenizer->getTokensFromString(this->glExtensions, new BasicArrayListD());;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->stringUtil->toString(list->objectArray[index]));
    
}


                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, this, commonStrings->TOSTRING, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

