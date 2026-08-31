
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Shader.h"
#include "ShaderInitializer.h"
#include "CompositeShaderUpdater.h"
#include "ModelViewProjection.h"
#include "NullOpenGLTextureProcessor.h"
#include "OpenGLObject3dProcessor.h"

class ShaderComposite
            : public Object
         {
        

    public const disableProgramShaderOpenGLProcessor: OpenGLProcessor;

    public const requiresOpenGLVersion: string;

    public const shaderArray: std::vector<Shader>;

    public const shaderInitializer: ShaderInitializer;

    public const compositeShaderUpdater: CompositeShaderUpdater;

    public const modelViewProjection: ModelViewProjection;

    public const colorOpenGLProcessor: OpenGLProcessor;

    public const vertexOpenGLProcessor: OpenGLProcessor;

    public useProgramShaderOpenGLProcessor: OpenGLProcessor = 
                null
            ;

    public shaderMatrixOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public colorEnableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public normalEnableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public vertexEnableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public textureEnableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public colorDisableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public normalDisableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public vertexDisableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public textureDisableVertexAttribArrayOpenGLProcessor: OpenGLProcessor = NullOpenGLProcessorFactory.getInstance()!;

    public uniformLightPositionOpenGLProcessor: OpenGLObject3dProcessor = NullOpenGLTextureProcessor.getInstance()!;

    public uniformLightColorOpenGLProcessor: OpenGLObject3dProcessor = NullOpenGLTextureProcessor.getInstance()!;

    public uniformCameraPositionOpenGLProcessor: OpenGLObject3dProcessor = NullOpenGLTextureProcessor.getInstance()!;

    public uniformTextureUnitOpenGLProcessor: OpenGLObject3dProcessor = NullOpenGLTextureProcessor.getInstance()!;

    public programHandle: int32_t= 0;

public constructor (string requiresOpenGLVersion, std::vector<Shader> shaderArray, CompositeShaderUpdater compositeShaderUpdater, ShaderInitializer shaderInitializer, ModelViewProjection modelViewProjection, OpenGLProcessor colorOpenGLProcessor, OpenGLProcessor vertexOpenGLProcessor, OpenGLProcessor disableProgramShaderOpenGLProcessor){

            super();
        this.requiresOpenGLVersion= requiresOpenGLVersion;
    
this.shaderArray= shaderArray;
    
this.shaderInitializer= shaderInitializer;
    
this.compositeShaderUpdater= compositeShaderUpdater;
    
this.modelViewProjection= modelViewProjection;
    
this.colorOpenGLProcessor= colorOpenGLProcessor;
    
this.vertexOpenGLProcessor= vertexOpenGLProcessor;
    
this.disableProgramShaderOpenGLProcessor= disableProgramShaderOpenGLProcessor;
    
}


    public init(GL10 gl){
this.programHandle= this.shaderInitializer!.init(gl, this.shaderArray, this.compositeShaderUpdater!.attributeArray);
    
}


};

            

