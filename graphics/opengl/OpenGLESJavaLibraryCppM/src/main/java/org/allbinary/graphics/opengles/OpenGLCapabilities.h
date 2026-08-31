
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
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
        #include "OpenGLFeatureFactory.h"
#include "OpenGLFeature.h"

class OpenGLCapabilities
            : public Object
         {
        

    private: static const instance: OpenGLCapabilities = new OpenGLCapabilities();

    public static OpenGLCapabilities getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const CUSTOM_GL_SURFACE_VIEW: bool = true;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: initialized: bool = false;

    private: glVersionString: string = this.stringUtil!.EMPTY_STRING;

    private: glShaderVersionString: string = this.stringUtil!.EMPTY_STRING;

    public shaderVersion: int32_t = 0;

    private: glRenderer: string = this.stringUtil!.EMPTY_STRING;

    private: glVendor: string = this.stringUtil!.EMPTY_STRING;

    private: glExtensions: string = this.stringUtil!.EMPTY_STRING;

    private: possiblyAccelerated: bool= false;

    private: acceleratedString: string = this.stringUtil!.EMPTY_STRING;

    public maxTextureSize: int32_t = 64;

    public const VERSION_1_0: string = "1.0";

    public const VERSION_1_1: string = "1.1";

    public const VERSION_2_0: string = "2.0";

    public const VERSION_3_0: string = "3.0";

    public const VERSION_3_1: string = "3.1";

    public const VERSION_3_2: string = "3.2";

    public const VERSION_HIGHER_THAN_EXISTS: string = "999.999";

    public const VERSION_UNK: string = "Unk";

    public const GL_EXT_GPU_SHADER_100: string = "GL_ARB_shading_language_100";

    public const GL_EXT_GPU_SHADER4: string = "GL_EXT_gpu_shader4";

    private: glVersion: string = this.glVersionString;

    public glInstanceVersion: string = this.VERSION_UNK;

    private: glExtensionDrawTexture: bool= false;

    private: glThreedDrawTexture: bool= false;

    private: glExtensionGPUShader4: bool= false;

    private: glExtensionGPUShader100: bool= false;

    private: vertexBufferObjectSupport: bool= false;

private constructor ();

    public bool isInitialized();

    requireInitialization();

    public initCapabilities(GL10 gl);

    bool isExtension(OpenGLFeature gameFeature);

    public bool isGlExtensionDrawTexture();

    public bool isGlExtensionGPUShader100();

    public bool isGlExtensionGPUShader4();

    public string getGlVersion();

    public string getGlVersionString();

    public string getGlShaderVersion();

    public bool isGlThreedDrawTexture();

    public string getGlRenderer();

    public bool isVertexBufferObjectSupport();

    public bool isTextureSizeValid(int32_t widthAndHeight);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
