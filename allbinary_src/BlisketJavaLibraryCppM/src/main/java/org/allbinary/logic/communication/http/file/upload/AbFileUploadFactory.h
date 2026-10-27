
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H

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

    public: static AbFileUploadFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: AbFileUploadFactory();

                //@Throws(Exception.constructor)
            
    public: List* getFileItemStreamList(HttpServletRequest* httpServletRequest);

                //@Throws(Exception.constructor)
            
    public: List* getFileItemList(HttpServletRequest* httpServletRequest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOADFACTORY_H
