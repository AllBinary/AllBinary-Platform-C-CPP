
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENT_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENT_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformDocumentInterface.h"

class TransformHttpRequestDocument
            : public Object
        : public TransformDocumentInterface {

    private: static const std::string language = "en";

    private: static const std::string local = "US";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Node baseNode;

    private: Document document;

public: TransformHttpRequestDocument(PageContext pageContext, WeblisketSession weblisketSession);

public: TransformHttpRequestDocument(SearchRequest searchRequest);

    public: Node getBaseNode();

    public: Document getDoc();

                //@Throws(Exception.constructor)
            
    public: std::string log();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENT_H
