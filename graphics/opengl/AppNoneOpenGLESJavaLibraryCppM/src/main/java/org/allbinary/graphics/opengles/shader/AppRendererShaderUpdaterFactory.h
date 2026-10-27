
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#include "org/allbinary/graphics/opengles/shader/ShaderOpenGLProcessor.h"

class AppRendererShaderUpdaterFactory: public ShaderUpdater {

    private: static AppRendererShaderUpdaterFactory* instanceC() { static std::unique_ptr<AppRendererShaderUpdaterFactory> value(new AppRendererShaderUpdaterFactory()); return value.get(); }

    public: static AppRendererShaderUpdaterFactory* getInstance();

    private: const std::vector<ShaderComposite*> NULL_SHADER_COMPOSITE_ARRAY = {};

    public: const std::vector<ShaderComposite*> shaderCompositeArray = this->NULL_SHADER_COMPOSITE_ARRAY;

    private: const std::vector<ShaderOpenGLProcessor*> shaderOpenGLProcessorArray = {};

    public: std::vector<ShaderOpenGLProcessor*> getTestShaders();

    public: void setShaderComposite(Object* object3d);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H
