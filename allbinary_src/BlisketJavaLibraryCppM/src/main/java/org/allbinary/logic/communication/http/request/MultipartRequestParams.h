
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H

            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/List.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/file/upload/AbFileUploadFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileUploadBase/InvalidContentTypeException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RequestParams.h"

class MultipartRequestParams: public RequestParams {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool special = false;

public: MultipartRequestParams(HttpServletRequest request);

public: MultipartRequestParams(PageContext pageContext);

    protected: void setSpecial();

    private: void processMultipartRequest(HttpServletRequest request);

                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_MULTIPARTREQUESTPARAMS_H
