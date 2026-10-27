
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLResources
            : public Object
         {

    private: static OpenGLResources* instance() { static std::unique_ptr<OpenGLResources> value(new OpenGLResources()); return value.get(); }

    public: static OpenGLResources* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLResources::instance();
    
}


    public: void init(){
}


    public: bool isExcluded(std::string name){



                            throw new RuntimeException();
                    
}


    public: int32_t getIdentifier(std::string name, std::string defType, std::string defPackage){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* openRawResource(int32_t id){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* openRawResourceFromName(std::string resourceName){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resourceName){



                            throw new RuntimeException();
                    
}


    public: std::string getPackageName(){



                            throw new RuntimeException();
                    
}


};

            

