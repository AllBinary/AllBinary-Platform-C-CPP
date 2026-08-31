
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADER_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADER_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Shader
            : public Object
         {
        

    public shaderName: string = StringUtil.getInstance()!.EMPTY_STRING;

    public shaderStringList: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    public shaderAsString: string = StringUtil.getInstance()!.EMPTY_STRING;

    public shaderHandle: int32_t= 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADER_H
