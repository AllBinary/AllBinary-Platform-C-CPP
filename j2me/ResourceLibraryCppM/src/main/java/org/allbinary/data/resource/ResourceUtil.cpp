
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
        



        #ifndef ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_CPP
        #define ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/resource/ResourceUtil.h"
        

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
Object* ResourceUtil::classLoader = NullUtil::getInstance()->NULL_OBJECT;
auto ResourceUtil::instance_owner() -> ResourceUtil* { static std::unique_ptr<ResourceUtil> value(new ResourceUtil()); return value.get(); }
ResourceUtil* ResourceUtil::instance = ResourceUtil::instance_owner();

    auto ResourceUtil::getInstance() -> ResourceUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ResourceUtil::instance;
    
}


ResourceUtil::ResourceUtil() : logUtil(LogUtil::getInstance()){
}


    auto ResourceUtil::setLoadingPaths(std::string path, std::string ext) -> void{
this->logUtil->putF(CommonStrings::getInstance()->NOT_IMPLEMENTED, this, "setLoadingPaths");
    
}


    auto ResourceUtil::setClassLoader(ClassLoader* classLoader) -> void{
this->logUtil->putF((new StringMaker())->append("Resource Loader: ")->append(classLoader->getClass()->getName())->toString(), this, "setClassLoader");
    
ResourceUtil::classLoader= classLoader;
    
}


                //@Throws(Exception.constructor)
            
    auto ResourceUtil::getResourceAsStream(std::string resource) -> InputStream*{

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
                                    


                            throw Exception((new StringMaker())->append("Unable to obtain: ")->append(resource)->toString());
                    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    auto ResourceUtil::getResourceAsStreamAtStart(std::string resource, int32_t startIndex) -> InputStream*{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    int32_t index = JavaString::indexOf(resource, commonSeps->COLON);;
    

    std::string resourcePath = JavaString::substring(resource, index +startIndex);;
    

    InputStream* inputStream = Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);;
    

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


    auto ResourceUtil::addResource(std::string resource, int32_t value) -> void{
}




        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_CPP
