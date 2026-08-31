
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLObject3dProcessor
            : public Object
         {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public process(GL10 gl, any = {} object3d);

    public process(GL10 gl, any = {} object3d, int32_t index);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H
