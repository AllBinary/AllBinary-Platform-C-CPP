
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

            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: xslFile: string;

    private: pageName: string;

    private: contentType: string;

    private: searchParams: SearchParams;

    private: storeFront: StoreFrontInterface;

public constructor (StoreFrontInterface storeFront, SearchParams searchParams, string xslFile, string contentType, HashMap<any, any> propertiesHashMap, PageContext pageContext);

    public setStoreFront(StoreFrontInterface storeFront);

    public setParams(SearchParams searchParams);

    public setXslFile(string value);

    public setFileBaseName(string value);

    public setContentType(string value);

    public StoreFrontInterface getStoreFront();

    public SearchParams getParams();

    public string getXslFile();

    public string getFileBaseName();

    public string getContentType();

                //@Throws(Exception.constructor)
            
    public Node getFileBaseNameNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_H
