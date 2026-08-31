
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RequestParams.h"
#include "NameSpaceRequestParamData.h"
#include "NameSpaceRequestParam.h"
//containing string values and other hashmaps of the like
class NameSpaceRequestParams: public RequestParams {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

public constructor (HttpServletRequest httpServletRequest);

public constructor (PageContext pageContext);

                //@Throws(Exception.constructor)
            
    Node createPackageNode(Document document, string packageName, HashMap<any, any> packagePropertiesHashMap);

                //@Throws(Exception.constructor)
            
    Node createPackageMultiNode(Document document, NameSpaceRequestParam nameSpaceRequestParam, string packageName, HashMap<any, any> packagePropertiesHashMap);

                //@Throws(Exception.constructor)
            
    Node getRootNode(string rootElementPackage, HashMap<any, any> packagePropertiesHashMap, Document document);

                //@Throws(Exception.constructor)
            
    Node addNewProperties(Document document, Node node, HashMap<any, any> nextPackagePropertiesHashMap);

                //@Throws(Exception.constructor)
            
    bool isElementValueTextNodeEqual(HashMap<any, any> nextPackagePropertiesHashMap, Node node);

                //@Throws(Exception.constructor)
            
    int32_t isElementValueTextNodeUnique(HashMap<any, any> nextPackagePropertiesHashMap, Vector elementNodeVector);

                //@Throws(Exception.constructor)
            
    Document addChildren(Document document, Node rootNode, NameSpaceRequestParam nameSpaceRequestParam);

                //@Throws(Exception.constructor)
            
    Document addNameSpace(string key, string value, Document document);

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_NAMESPACEREQUESTPARAMS_H
