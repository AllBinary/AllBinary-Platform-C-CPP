
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
class ShaderComposite;
class ShaderOpenGLProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AppRendererShaderUpdaterFactory: public ShaderUpdater {

    private: static AppRendererShaderUpdaterFactory* instanceC_owner();
    private: static AppRendererShaderUpdaterFactory* instanceC;

    public: static AppRendererShaderUpdaterFactory* getInstance();


            
    public: AppRendererShaderUpdaterFactory();
        
    private: std::vector<ShaderComposite*> NULL_SHADER_COMPOSITE_ARRAY;

    public: std::vector<ShaderComposite*> shaderCompositeArray;

    private: std::vector<ShaderOpenGLProcessor*> shaderOpenGLProcessorArray;

    public: std::vector<ShaderOpenGLProcessor*> getTestShaders();

    public: void setShaderComposite(Object* object3d);
    public: void setShaderComposite(const std::string& object3d) { return setShaderComposite(JavaString::box(object3d)); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/graphics/opengles/shader/ShaderUpdater.h")
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderComposite.h")
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderOpenGLProcessor.h")
#include "org/allbinary/graphics/opengles/shader/ShaderOpenGLProcessor.h"
#endif

        #endif
    
