
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H

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

    public: static OpenGLCapabilities* getInstance();

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

private: OpenGLCapabilities();

    public: bool isInitialized();

    private: void requireInitialization();

    public: void initCapabilities(GL10* gl);

    private: bool isExtension(OpenGLFeature* gameFeature);

    public: bool isGlExtensionDrawTexture();

    public: bool isGlExtensionGPUShader100();

    public: bool isGlExtensionGPUShader4();

    public: std::string getGlVersion();

    public: std::string getGlVersionString();

    public: std::string getGlShaderVersion();

    public: bool isGlThreedDrawTexture();

    public: std::string getGlRenderer();

    public: bool isVertexBufferObjectSupport();

    public: bool isTextureSizeValid(int32_t widthAndHeight);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
