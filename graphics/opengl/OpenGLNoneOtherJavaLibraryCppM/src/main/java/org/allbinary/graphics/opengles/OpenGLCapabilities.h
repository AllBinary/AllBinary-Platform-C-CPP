
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLCapabilities
            : public Object
         {
        

    private: static const instance: OpenGLCapabilities = new OpenGLCapabilities();

    public static OpenGLCapabilities getInstance();

    public const VERSION_1_0: string = "1.0";

    public const VERSION_1_1: string = "1.1";

    public const VERSION_2_0: string = "2.0";

    public const VERSION_3_0: string = "3.0";

    public const VERSION_3_1: string = "3.1";

    public const VERSION_3_2: string = "3.2";

    public const VERSION_HIGHER_THAN_EXISTS: string = "999.999";

    private: glVersion: string = StringUtil.getInstance()!.EMPTY_STRING;

    public shaderVersion: int32_t = 0;

    public glInstanceVersion: string = StringUtil.getInstance()!.EMPTY_STRING;

    public maxTextureSize: int32_t = 64;

private constructor ();

    public initCapabilities(any = {} gl);

    public bool isGlExtensionDrawTexture();

    public string getGlVersion();

    public bool isVertexBufferObjectSupport();

    public bool isTextureSizeValid(int32_t widthAndHeight);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
