
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
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLCapabilities
            : public virtual Object
         {

    private: static OpenGLCapabilities* instance_owner();
    private: static OpenGLCapabilities* instance;

    public: static OpenGLCapabilities* getInstance();

    public: const bool CUSTOM_GL_SURFACE_VIEW = true;

    public: const std::string VERSION_1_0 = "1.0";

    public: const std::string VERSION_1_1 = "1.1";

    public: const std::string VERSION_2_0 = "2.0";

    public: const std::string VERSION_3_0 = "3.0";

    public: const std::string VERSION_3_1 = "3.1";

    public: const std::string VERSION_3_2 = "3.2";

    public: const std::string VERSION_HIGHER_THAN_EXISTS = "999.999";

    private: std::string glVersion;

    public: int32_t shaderVersion = 0;

    public: std::string glInstanceVersion;

    public: int32_t maxTextureSize = 64;

private: OpenGLCapabilities();

    public: bool isInitialized();

    public: void initCapabilities(Object* gl);
    public: void initCapabilities(const std::string& gl) { return initCapabilities(JavaString::box(gl)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void initCapabilities(BoxValue gl) { return initCapabilities(JavaBoxes::toObject(gl)); }
    public: template<typename BoxElement> void initCapabilities(const std::vector<BoxElement>& gl) { return initCapabilities(JavaBoxes::toObject(gl)); }

    public: bool isGlExtensionDrawTexture();

    public: std::string getGlVersion();

    public: bool isVertexBufferObjectSupport();

    public: bool isTextureSizeValid(int32_t widthAndHeight);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
