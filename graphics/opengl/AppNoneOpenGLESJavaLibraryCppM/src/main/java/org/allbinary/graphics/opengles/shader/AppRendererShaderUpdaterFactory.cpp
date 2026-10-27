
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/AppRendererShaderUpdaterFactory.h"
        

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


AppRendererShaderUpdaterFactory::AppRendererShaderUpdaterFactory() : NULL_SHADER_COMPOSITE_ARRAY({}), shaderCompositeArray(this->NULL_SHADER_COMPOSITE_ARRAY), shaderOpenGLProcessorArray({}) {
        }
        auto AppRendererShaderUpdaterFactory::instanceC_owner() -> AppRendererShaderUpdaterFactory* { static std::unique_ptr<AppRendererShaderUpdaterFactory> value(new AppRendererShaderUpdaterFactory()); return value.get(); }
AppRendererShaderUpdaterFactory* AppRendererShaderUpdaterFactory::instanceC = AppRendererShaderUpdaterFactory::instanceC_owner();

    auto AppRendererShaderUpdaterFactory::getInstance() -> AppRendererShaderUpdaterFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AppRendererShaderUpdaterFactory::instanceC;
    
}


    auto AppRendererShaderUpdaterFactory::getTestShaders() -> std::vector<ShaderOpenGLProcessor*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shaderOpenGLProcessorArray;
    
}


    auto AppRendererShaderUpdaterFactory::setShaderComposite(Object* object3d) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_CPP
