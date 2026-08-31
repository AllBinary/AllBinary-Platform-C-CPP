
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
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShaderManager
            : public Object
         {
        

    private: static const instance: ShaderManager = new ShaderManager( -1,  -1);

    public static ShaderManager getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShaderManager.instance;
    
}


    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const LOAD_SHADER: string = "loadShader";

    const __VERSION__: string = "__VERSION__";

    public const GL_VERTEX_SHADER: int32_t;

    public const GL_FRAGMENT_SHADER: int32_t;

public constructor (int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER){

            super();
        this.GL_VERTEX_SHADER= GL_VERTEX_SHADER;
    
this.GL_FRAGMENT_SHADER= GL_FRAGMENT_SHADER;
    
}


    public int32_t load(GL10 gl, string resource, std::vector<string> shaderAsStringArray, int32_t shaderType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public int32_t loadShader(GL10 gl, string resource, BasicArrayList stringList, int32_t shaderType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

