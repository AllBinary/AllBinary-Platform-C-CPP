
        /* Generated Code Do Not Modify */
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLResources
            : public Object
         {

    private: static OpenGLResources instance() { return OpenGLResources(); }

    public: static OpenGLResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLResources::instance();
    
}


    public: void init(){
}


    public: bool isExcluded(std::string name){



                            throw RuntimeException();
                    
}


    public: int32_t getIdentifier(std::string name, std::string defType, std::string defPackage){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: InputStream openRawResource(int32_t id){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: InputStream openRawResourceFromName(std::string resourceName){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: InputStream getResourceAsStream(std::string resourceName){



                            throw RuntimeException();
                    
}


    public: std::string getPackageName(){



                            throw RuntimeException();
                    
}


};

            

