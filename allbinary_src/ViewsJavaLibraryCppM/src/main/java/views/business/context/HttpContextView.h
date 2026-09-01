
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H

            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/ContextTransformer.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <views/HttpComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpContextView: public HttpComponentView {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: HttpContextView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H
