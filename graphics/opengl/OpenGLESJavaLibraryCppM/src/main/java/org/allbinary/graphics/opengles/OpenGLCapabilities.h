
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class GL10;
class GL11;
class AndroidUtil;
class OpenGLESGL10ImageFactory;
class OpenGLESGL11VBOImageFactory;
class OpenGLImageSpecificFactory;
class BasicArrayList;
class BasicArrayListD;
class CommonSeps;
class CommonStrings;
class StringMaker;
class StringUtil;
class Tokenizer;
class PreLogUtil;
class Features;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLFeatureFactory;
class OpenGLFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLCapabilities
            : public virtual Object
         {

    private: static OpenGLCapabilities* instance_owner();
    private: static OpenGLCapabilities* instance;

    public: static OpenGLCapabilities* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: const bool CUSTOM_GL_SURFACE_VIEW = true;

    private: StringUtil* stringUtil;

    private: bool initialized = false;

    private: std::string glVersionString;

    private: std::string glShaderVersionString;

    public: int32_t shaderVersion = 0;

    private: std::string glRenderer;

    private: std::string glVendor;

    private: std::string glExtensions;

    private: bool possiblyAccelerated= false;

    private: std::string acceleratedString;

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

    private: std::string glVersion;

    public: std::string glInstanceVersion;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL11.h>)
#include <javax/microedition/khronos/opengles/GL11.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESGL10ImageFactory.h>)
#include <org/allbinary/image/opengles/OpenGLESGL10ImageFactory.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESGL11VBOImageFactory.h>)
#include <org/allbinary/image/opengles/OpenGLESGL11VBOImageFactory.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLImageSpecificFactory.h>)
#include <org/allbinary/image/opengles/OpenGLImageSpecificFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/tokens/Tokenizer.h>)
#include <org/allbinary/logic/string/tokens/Tokenizer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeature.h")
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"
#endif

        #endif
    
