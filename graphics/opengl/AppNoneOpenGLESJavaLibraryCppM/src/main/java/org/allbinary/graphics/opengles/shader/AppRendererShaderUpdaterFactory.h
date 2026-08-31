
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

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShaderUpdater.h"
#include "ShaderComposite.h"
#include "ShaderOpenGLProcessor.h"

class AppRendererShaderUpdaterFactory: public ShaderUpdater {
        

    private: static const instanceC: AppRendererShaderUpdaterFactory = new AppRendererShaderUpdaterFactory();

    public static AppRendererShaderUpdaterFactory getInstance();

    private: const NULL_SHADER_COMPOSITE_ARRAY: std::vector<ShaderComposite> = [];

    public const shaderCompositeArray: std::vector<ShaderComposite> = this.NULL_SHADER_COMPOSITE_ARRAY;

    private: const shaderOpenGLProcessorArray: std::vector<ShaderOpenGLProcessor> = [];

    public std::vector<ShaderOpenGLProcessor> getTestShaders();

    public setShaderComposite(any = {} object3d);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_APPRENDERERSHADERUPDATERFACTORY_H
