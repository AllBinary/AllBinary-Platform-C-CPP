
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class HttpServletRequest;
class PageContext;
class StoreFrontViewFactory;
class RequestParams;
class WeblisketSession;
class LogUtil;
class SearchRequest;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformStoreDocument: public TransformHttpRequestDocument {

    /*protected*/ public: LogUtil* logUtil;

public: TransformStoreDocument(PageContext* pageContext, WeblisketSession* weblisketSession);

public: TransformStoreDocument(SearchRequest* searchRequest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENT_H_COMPLETE
        #if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontViewFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontViewFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h")
#include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h"
#endif

        #endif
    
