
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SE - J2ME
class ResourceUtil
            : public Object
         {

    private: static inline Object* classLoader = NullUtil::getInstance()->NULL_OBJECT;

    private: static ResourceUtil* instance() { static std::unique_ptr<ResourceUtil> value(new ResourceUtil()); return value.get(); }

    public: static ResourceUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ResourceUtil(){
}


    public: void setLoadingPaths(std::string path, std::string ext){
this->logUtil->putF(CommonStrings::getInstance()->NOT_IMPLEMENTED, this, "setLoadingPaths");
    
}


    public: void setClassLoader(ClassLoader* classLoader){
this->logUtil->putF((new StringMaker())->append("Resource Loader: ")->append(classLoader->getClass()->getName())->toString(), this, "setClassLoader");
    
ResourceUtil::classLoader= classLoader;
    
}


                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resource){

    InputStream* inputStream = this->getResourceAsStreamAtStart(resource, 2);;
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    inputStream= this->getResourceAsStreamAtStart(resource, 1);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception((new StringMaker())->append("Unable to obtain: ")->append(resource)->toString());
                    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    private: InputStream* getResourceAsStreamAtStart(std::string resource, int32_t startIndex){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    int32_t index = JavaString::indexOf(resource, commonSeps->COLON);;
    

    std::string resourcePath = JavaString::substring(resource, index +startIndex);;
    

    InputStream* inputStream = resource.getClass()->getResourceAsStream(resourcePath);;
    

                        if(inputStream != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    

                                    }
                                

    ClassLoader* classLoader = dynamic_cast<ClassLoader*>(ResourceUtil::classLoader);;
    
inputStream= classLoader->getResourceAsStream(resourcePath);
    

                        if(inputStream != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    

                                    }
                                
inputStream= Thread::currentThread()->getContextClassLoader()->getResourceAsStream(resourcePath);
    

                        if(inputStream != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


    public: void addResource(std::string resource, int32_t value){
}


};

            

