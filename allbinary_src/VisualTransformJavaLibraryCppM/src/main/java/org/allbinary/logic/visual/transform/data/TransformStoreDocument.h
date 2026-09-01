
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENT_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontViewFactory.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformHttpRequestDocument.h"

class TransformStoreDocument: public TransformHttpRequestDocument {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: TransformStoreDocument(PageContext pageContext, WeblisketSession weblisketSession);

public: TransformStoreDocument(SearchRequest searchRequest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENT_H
