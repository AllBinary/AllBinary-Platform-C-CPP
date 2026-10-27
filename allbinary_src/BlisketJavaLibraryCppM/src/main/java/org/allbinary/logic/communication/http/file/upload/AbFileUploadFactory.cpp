
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

class AbFileUploadFactory
            : public Object
         {

    private: static AbFileUploadFactory* instance() { static std::unique_ptr<AbFileUploadFactory> value(new AbFileUploadFactory()); return value.get(); }

    public: static AbFileUploadFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileUploadFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: AbFileUploadFactory(){
}


                //@Throws(Exception.constructor)
            
    public: List* getFileItemStreamList(HttpServletRequest* httpServletRequest){

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "get()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: List* getFileItemList(HttpServletRequest* httpServletRequest){

        try {
            
    AbFileUpload* abFileUpload = new AbFileUpload(new AbFileItemFactory());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return abFileUpload->parseRequest(httpServletRequest);;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->HTTPERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "get()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

