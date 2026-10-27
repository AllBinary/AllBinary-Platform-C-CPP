
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLUtil
            : public Object
         {

    private: static OpenGLUtil* instance() { static std::unique_ptr<OpenGLUtil> value(new OpenGLUtil()); return value.get(); }

    public: static OpenGLUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLUtil::instance();
    
}


    public: Image* addImage(Image* image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public: void clear(){
}


    public: void addRunnable(Runnable* runnable){
}


};

            

