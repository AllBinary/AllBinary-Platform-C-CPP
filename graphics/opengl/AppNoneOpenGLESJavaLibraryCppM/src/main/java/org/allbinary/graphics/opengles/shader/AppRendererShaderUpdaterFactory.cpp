
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
        



            #include <vector>
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShaderUpdater.h"
#include "ShaderComposite.h"
#include "ShaderOpenGLProcessor.h"

class AppRendererShaderUpdaterFactory: public ShaderUpdater {

    private: static const AppRendererShaderUpdaterFactory instanceC = AppRendererShaderUpdaterFactory();

    public: static AppRendererShaderUpdaterFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AppRendererShaderUpdaterFactory::instanceC;
    
}


    private: const std::vector<ShaderComposite> NULL_SHADER_COMPOSITE_ARRAY = {};

    public: const std::vector<ShaderComposite> shaderCompositeArray = this->NULL_SHADER_COMPOSITE_ARRAY;

    private: const std::vector<ShaderOpenGLProcessor> shaderOpenGLProcessorArray = {};

    public: std::vector<ShaderOpenGLProcessor> getTestShaders(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shaderOpenGLProcessorArray;
    
}


    public: void setShaderComposite(Object* object3d){
}


};

            

