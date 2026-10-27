
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/image/opengles/OpenGLImageUtilBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLImageUtil: public OpenGLImageUtilBase {

    private: static OpenGLImageUtil* instance() { static std::unique_ptr<OpenGLImageUtil> value(new OpenGLImageUtil()); return value.get(); }

    public: static OpenGLImageUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLImageUtil::instance();
    
}


};

            

