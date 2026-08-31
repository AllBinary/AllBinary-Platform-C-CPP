
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SearchParams.h"
#include "SearchData.h"

class TableSearchRequest
            : public Object
         {
        

    private: xslFile: string;

    private: pageName: string;

    private: contentType: string;

    private: keywords: string;

    private: searchParams: SearchParams;

public constructor (string keywords, SearchParams searchParams, string xslFile, string contentType);

    public setKeywords(string value);

    public setParams(SearchParams searchParams);

    public setXslFile(string value);

    public setFileBaseName(string value);

    public setContentType(string value);

    public string getKeywords();

    public SearchParams getParams();

                //@Throws(Exception.constructor)
            
    public string getXslFile();

    public string getFileBaseName();

    public string getContentType();

                //@Throws(Exception.constructor)
            
    public Node getFileBaseNameNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_H
