
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class BasicArrayList;

class HttpServletRequest;
class PageContext;
class DomData;
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class DomDocumentHelper;
class XmlDocumentHelper;
class StdUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/RequestParams.h"
class NameSpaceRequestParamData;
class NameSpaceRequestParam;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //containing string values and other hashmaps of the like
class NameSpaceRequestParams: public RequestParams {

    /*protected*/ public: LogUtil* logUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomData.h>)
#include <org/allbinary/data/tree/dom/DomData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/communication/http/request/RequestParams.h")
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#endif
#if __has_include("org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h")
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h"
#endif
#if __has_include("org/allbinary/logic/communication/http/request/NameSpaceRequestParam.h")
#include "org/allbinary/logic/communication/http/request/NameSpaceRequestParam.h"
#endif

        #endif
    
