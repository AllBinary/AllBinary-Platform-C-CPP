
        /* Generated Code Do Not Modify */
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLResources
            : public Object
         {
        

    private: static const instance: OpenGLResources = new OpenGLResources();

    public static OpenGLResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLResources.instance;
    
}


    public init(){
}


    public bool isExcluded(string name){



                            throw new RuntimeException();
                    
}


    public int32_t getIdentifier(string name, string defType, string defPackage){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public InputStream openRawResource(int32_t id){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public InputStream openRawResourceFromName(string resourceName){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resourceName){



                            throw new RuntimeException();
                    
}


    public string getPackageName(){



                            throw new RuntimeException();
                    
}


};

            

