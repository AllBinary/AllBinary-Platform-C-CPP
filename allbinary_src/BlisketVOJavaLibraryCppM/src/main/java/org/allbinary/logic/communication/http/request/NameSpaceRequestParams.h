
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h"
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParam.h"
//containing string values and other hashmaps of the like
class NameSpaceRequestParams: public RequestParams {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: NameSpaceRequestParams();

public: NameSpaceRequestParams(HttpServletRequest* httpServletRequest);

public: NameSpaceRequestParams(PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    private: Node* createPackageNode(Document* document, std::string packageName, HashMap<Object*, Object*>* packagePropertiesHashMap);

                //@Throws(Exception.constructor)
            
    private: Node* createPackageMultiNode(Document* document, NameSpaceRequestParam* nameSpaceRequestParam, std::string packageName, HashMap<Object*, Object*>* packagePropertiesHashMap);

                //@Throws(Exception.constructor)
            
    private: Node* getRootNode(std::string rootElementPackage, HashMap<Object*, Object*>* packagePropertiesHashMap, Document* document);

                //@Throws(Exception.constructor)
            
    private: Node* addNewProperties(Document* document, Node* node, HashMap<Object*, Object*>* nextPackagePropertiesHashMap);

                //@Throws(Exception.constructor)
            
    private: bool isElementValueTextNodeEqual(HashMap<Object*, Object*>* nextPackagePropertiesHashMap, Node* node);

                //@Throws(Exception.constructor)
            
    private: int32_t isElementValueTextNodeUnique(HashMap<Object*, Object*>* nextPackagePropertiesHashMap, BasicArrayList* elementNodeVector);

                //@Throws(Exception.constructor)
            
    private: Document* addChildren(Document* document, Node* rootNode, NameSpaceRequestParam* nameSpaceRequestParam);

                //@Throws(Exception.constructor)
            
    private: Document* addNameSpace(std::string key, std::string value, Document* document);

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_H
