
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
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2ME
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


                //@Throws(Exception.constructor)
            
    auto ResourceUtil::getResourceAsStream(std::string resource) -> InputStream*{

    InputStream* inputStream = Class::forType(typeid(std::string))->getResourceAsStream(resource);;
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    inputStream= this->getResourceAsStreamAtStart(resource, 2);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    inputStream= this->getResourceAsStreamAtStart(resource, 1);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    
    StringMaker* stringMaker = new StringMaker();;
    

    int32_t index = JavaString::lastIndexOf(resource, '/');;
    

    std::string resourcePath = JavaString::substring(resource, index +1);;
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    resourcePath= JavaString::substring(resource, index);
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string RES = "res";;
    
resourcePath= JavaString::valueOf(stringMaker->append(RES)->append(JavaString::substring(resource, index)));
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
resourcePath= JavaString::valueOf(stringMaker->append("/")->append(RES)->append(JavaString::substring(resource, index)));
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

    std::string COLON = CommonSeps::getInstance()->COLON;;
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
resourcePath= JavaString::valueOf(stringMaker->append(RES)->append(COLON)->append(JavaString::substring(resource, index)));
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
resourcePath= JavaString::valueOf(stringMaker->append(RES)->append(COLON)->append(JavaString::substring(resource, index +1)));
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string RESOURCE_STRING = "resource";;
    
stringMaker->delete_(0, stringMaker->length());
    
resourcePath= JavaString::valueOf(stringMaker->append(RESOURCE_STRING)->append(COLON)->append(JavaString::substring(resource, index)));
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    
resourcePath= JavaString::valueOf(stringMaker->append(RESOURCE_STRING)->append(COLON)->append(JavaString::substring(resource, index +1)));
    
inputStream= Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    stringMaker->delete_(0, stringMaker->length());
    



                            throw Exception(JavaString::valueOf(stringMaker->append("Unable to obtain: ")->append(resource)));
                    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    auto ResourceUtil::getResourceAsStreamAtStart(std::string resource, int32_t startIndex) -> InputStream*{

    StringMaker* stringMaker = new StringMaker();;
    

    int32_t index = JavaString::indexOf(resource, CommonSeps::getInstance()->COLON);;
    

    std::string resourcePath = JavaString::substring(resource, index +startIndex);;
    

    InputStream* inputStream = Class::forType(typeid(std::string))->getResourceAsStream(resourcePath);;
    

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
