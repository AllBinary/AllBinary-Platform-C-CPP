
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/file/upload/AbFileUploadFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/ArrayList.h>

      
#include <java/util/List.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/communication/http/AbFileItemFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItemIterator.h>

      
#include <org/apache/commons/fileupload/FileItemStream.h>

      
#include <org/apache/commons/fileupload/FileItemUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/file/upload/AbFileUpload.h"
#include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
#include "org/allbinary/logic/communication/http/file/upload/AbFileItem.h"

auto AbFileUploadFactory::instance_owner() -> AbFileUploadFactory* { static std::unique_ptr<AbFileUploadFactory> value(new AbFileUploadFactory()); return value.get(); }
AbFileUploadFactory* AbFileUploadFactory::instance = AbFileUploadFactory::instance_owner();

    auto AbFileUploadFactory::getInstance() -> AbFileUploadFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbFileUploadFactory::instance;
    
}


AbFileUploadFactory::AbFileUploadFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AbFileUploadFactory::getFileItemStreamList(HttpServletRequest* httpServletRequest) -> List*{

        try {
            
    AbFileUpload* fileUpload = new AbFileUpload(new AbFileItemFactory());;
    

    FileItemIterator* iterator = fileUpload->getItemIterator(httpServletRequest);;
    

    List* items = new ArrayList();;
    

        while(iterator->hasNext())
        {

    FileItemStream* fileItemStream = iterator->next();;
    
HttpFileUploadUtil::log(fileItemStream);
    

    AbFileItem* fileItem = new AbFileItem(fileItemStream->getName(), fileItemStream->getFieldName(), FileItemUtil::getInstance()->getBytes(fileItemStream));;
    
items->add(fileItem);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return items;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "get()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto AbFileUploadFactory::getFileItemList(HttpServletRequest* httpServletRequest) -> List*{

        try {
            
    AbFileUpload* abFileUpload = new AbFileUpload(new AbFileItemFactory());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return abFileUpload->parseRequest(httpServletRequest);;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "get()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_CPP
