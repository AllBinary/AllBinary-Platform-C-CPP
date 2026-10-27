
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLCapabilities
            : public Object
         {

    private: static OpenGLCapabilities* instance() { static std::unique_ptr<OpenGLCapabilities> value(new OpenGLCapabilities()); return value.get(); }

    public: static OpenGLCapabilities* getInstance();

    public: const bool CUSTOM_GL_SURFACE_VIEW = true;

    public: const std::string VERSION_1_0 = "1.0";

    public: const std::string VERSION_1_1 = "1.1";

    public: const std::string VERSION_2_0 = "2.0";

    public: const std::string VERSION_3_0 = "3.0";

    public: const std::string VERSION_3_1 = "3.1";

    public: const std::string VERSION_3_2 = "3.2";

    public: const std::string VERSION_HIGHER_THAN_EXISTS = "999.999";

    private: std::string glVersion = StringUtil::getInstance()->EMPTY_STRING;

    public: int32_t shaderVersion = 0;

    public: std::string glInstanceVersion = StringUtil::getInstance()->EMPTY_STRING;

    public: int32_t maxTextureSize = 64;

private: OpenGLCapabilities();

    public: bool isInitialized();

    public: void initCapabilities(Object* gl);

    public: bool isGlExtensionDrawTexture();

    public: std::string getGlVersion();

    public: bool isVertexBufferObjectSupport();

    public: bool isTextureSizeValid(int32_t widthAndHeight);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
