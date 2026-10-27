
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class EGLConfig;
class GL10;
class NullUtil;
class StringUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompositeShaderUpdater: public ShaderUpdater {

    private: static CompositeShaderUpdater* instanceC_owner();
    private: static CompositeShaderUpdater* instanceC;

    public: static CompositeShaderUpdater* getInstance();

    /*protected*/ public: CommonSeps* commonSeps;

public: CompositeShaderUpdater(std::vector<std::string> uniformBlockArray, std::vector<std::string> uniformArray, std::vector<std::string> attributeArray, std::vector<int32_t> attributeHandleArray);

    public: void onSurfaceCreated(GL10* gl, EGLConfig* eglConfig, int32_t programHandle);

    public: void onSurfaceDestroyed(GL10* gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/egl/EGLConfig.h>)
#include <javax/microedition/khronos/egl/EGLConfig.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderUpdater.h")
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
#endif

        #endif
    
