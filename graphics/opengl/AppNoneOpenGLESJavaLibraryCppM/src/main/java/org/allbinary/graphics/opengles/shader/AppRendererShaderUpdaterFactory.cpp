
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShaderUpdater.h"
#include "ShaderComposite.h"
#include "ShaderOpenGLProcessor.h"

class AppRendererShaderUpdaterFactory: public ShaderUpdater {
        

    private: static const instanceC: AppRendererShaderUpdaterFactory = new AppRendererShaderUpdaterFactory();

    public static AppRendererShaderUpdaterFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AppRendererShaderUpdaterFactory.instanceC;
    
}


    private: const NULL_SHADER_COMPOSITE_ARRAY: std::vector<ShaderComposite> = [];

    public const shaderCompositeArray: std::vector<ShaderComposite> = this.NULL_SHADER_COMPOSITE_ARRAY;

    private: const shaderOpenGLProcessorArray: std::vector<ShaderOpenGLProcessor> = [];

    public std::vector<ShaderOpenGLProcessor> getTestShaders(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shaderOpenGLProcessorArray;
    
}


    public setShaderComposite(any = {} object3d){
}


};

            

