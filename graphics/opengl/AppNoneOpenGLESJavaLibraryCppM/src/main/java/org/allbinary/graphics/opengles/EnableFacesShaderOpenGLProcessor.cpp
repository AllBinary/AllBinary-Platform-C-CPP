
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EnableFacesShaderOpenGLProcessor: public ObjectThreedOpenGLProcessor {

    private: static EnableFacesShaderOpenGLProcessor* instance() { static std::unique_ptr<EnableFacesShaderOpenGLProcessor> value(new EnableFacesShaderOpenGLProcessor()); return value.get(); }

    public: static EnableFacesShaderOpenGLProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EnableFacesShaderOpenGLProcessor::instance();
    
}


public: EnableFacesShaderOpenGLProcessor(){
}


    public: void process(GL10* gl, Object* anyType){
}


};

            

