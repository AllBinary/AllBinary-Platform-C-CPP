
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_REQUESTPARAMS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_REQUESTPARAMS_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RequestData.h"
//Note: if request is destroyed or messed up this will not work. Use fileRequestParams
class RequestParams
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Map map;

public: RequestParams();

public: RequestParams(HttpServletRequest request);

public: RequestParams(PageContext pageContext);

    protected: void setMap(Map map);

    protected: Map getMap();

    private: const std::string KEY = "Key: ";

    private: const std::string VALUE = " Value: ";

    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_REQUESTPARAMS_H
