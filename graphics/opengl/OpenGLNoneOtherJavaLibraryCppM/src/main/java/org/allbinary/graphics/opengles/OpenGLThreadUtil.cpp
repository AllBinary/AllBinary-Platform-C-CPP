
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLThreadUtil
            : public Object
         {

    private: static OpenGLThreadUtil* instance() { static std::unique_ptr<OpenGLThreadUtil> value(new OpenGLThreadUtil()); return value.get(); }

    public: static OpenGLThreadUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLThreadUtil::instance();
    
}


    public: void set(Object* glSurfaceView){
}


    public: void onPause(){
}


    public: void onResume(){
}


};

            

