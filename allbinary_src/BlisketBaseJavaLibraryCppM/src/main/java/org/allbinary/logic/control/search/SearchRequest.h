
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
#include <org/allbinary/business/context/AbContext.h>
class StoreFrontInterface;
class ModDomHelper;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SearchParams;
class SearchData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SearchRequest: public AbContext {

    private: std::string xslFile;

    private: std::string pageName;

    private: std::string contentType;

    private: SearchParams* searchParams;

    private: StoreFrontInterface* storeFront;

public: SearchRequest(StoreFrontInterface* storeFront, SearchParams* searchParams, std::string xslFile, std::string contentType, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

    public: void setStoreFront(StoreFrontInterface* storeFront);

    public: void setParams(SearchParams* searchParams);

    public: void setXslFile(std::string value);

    public: void setFileBaseName(std::string value);

    public: void setContentType(std::string value);

    public: StoreFrontInterface* getStoreFront();

    public: SearchParams* getParams();

    public: std::string getXslFile();

    public: std::string getFileBaseName();

    public: std::string getContentType();

                //@Throws(Exception.constructor)
            
    public: Node* getFileBaseNameNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/AbContext.h>)
#include <org/allbinary/business/context/AbContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/control/search/SearchParams.h")
#include "org/allbinary/logic/control/search/SearchParams.h"
#endif
#if __has_include("org/allbinary/logic/control/search/SearchData.h")
#include "org/allbinary/logic/control/search/SearchData.h"
#endif

        #endif
    
