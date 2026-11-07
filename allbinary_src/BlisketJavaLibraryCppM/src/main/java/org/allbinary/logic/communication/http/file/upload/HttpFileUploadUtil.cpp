
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileItemStream.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HttpFileUploadUtil::instance_owner() -> HttpFileUploadUtil* { static std::unique_ptr<HttpFileUploadUtil> value(new HttpFileUploadUtil()); return value.get(); }
HttpFileUploadUtil* HttpFileUploadUtil::instance = HttpFileUploadUtil::instance_owner();

    auto HttpFileUploadUtil::getInstance() -> HttpFileUploadUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpFileUploadUtil::instance;
    
}


HttpFileUploadUtil::HttpFileUploadUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto HttpFileUploadUtil::isValid(Object* anyType) -> bool{

                        if(anyType != 
                                    nullptr
                                 && !((dynamic_cast<const String*>(anyType) != nullptr)))
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const FileItem*>(anyType) != nullptr)
                                    )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Object Not Instance Of FileItem but is: ") +JavaString::valueOf(ClassUtil::viewAll(anyType, CommonSeps::getInstance()->NEW_LINE)));
                    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto HttpFileUploadUtil::log(FileItemStream* fileItem) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
stringBuffer->append("FileItem Log:");
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Content Type:");
    
stringBuffer->append(fileItem->getContentType());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Field Name:");
    
stringBuffer->append(fileItem->getFieldName());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Name:");
    
stringBuffer->append(fileItem->getName());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Size:");
    
stringBuffer->append(" Not Calculated Yet");
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->HTTP))
                        
                                    {
                                    logUtil->putF(JavaString::valueOf(stringBuffer), getInstance(), "log()");
    

                                    }
                                
}


    auto HttpFileUploadUtil::log(FileItem* fileItem) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
stringBuffer->append("FileItem Log:");
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Content Type:");
    
stringBuffer->append(fileItem->getContentType());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Field Name:");
    
stringBuffer->append(fileItem->getFieldName());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Name:");
    
stringBuffer->append(fileItem->getName());
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append("Size:");
    
stringBuffer->appendlong(fileItem->getSize());
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->HTTPREQUEST))
                        
                                    {
                                    logUtil->putF(JavaString::valueOf(stringBuffer), getInstance(), "log()");
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEUPLOADUTIL_CPP
