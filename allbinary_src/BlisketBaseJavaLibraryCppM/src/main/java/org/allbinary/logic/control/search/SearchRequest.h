
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SearchParams.h"
#include "SearchData.h"

class SearchRequest: public AbContext {

    private: std::string xslFile;

    private: std::string pageName;

    private: std::string contentType;

    private: SearchParams searchParams;

    private: StoreFrontInterface storeFront;

public: SearchRequest(StoreFrontInterface storeFront, SearchParams searchParams, std::string xslFile, std::string contentType, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext);

    public: void setStoreFront(StoreFrontInterface storeFront);

    public: void setParams(SearchParams searchParams);

    public: void setXslFile(std::string value);

    public: void setFileBaseName(std::string value);

    public: void setContentType(std::string value);

    public: StoreFrontInterface getStoreFront();

    public: SearchParams getParams();

    public: std::string getXslFile();

    public: std::string getFileBaseName();

    public: std::string getContentType();

                //@Throws(Exception.constructor)
            
    public: Node getFileBaseNameNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H
