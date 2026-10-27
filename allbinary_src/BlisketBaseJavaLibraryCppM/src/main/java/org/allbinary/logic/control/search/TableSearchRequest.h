
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchData.h"

class TableSearchRequest
            : public Object
         {

    private: std::string xslFile;

    private: std::string pageName;

    private: std::string contentType;

    private: std::string keywords;

    private: SearchParams* searchParams;

public: TableSearchRequest(std::string keywords, SearchParams* searchParams, std::string xslFile, std::string contentType);

    public: void setKeywords(std::string value);

    public: void setParams(SearchParams* searchParams);

    public: void setXslFile(std::string value);

    public: void setFileBaseName(std::string value);

    public: void setContentType(std::string value);

    public: std::string getKeywords();

    public: SearchParams* getParams();

                //@Throws(Exception.constructor)
            
    public: std::string getXslFile();

    public: std::string getFileBaseName();

    public: std::string getContentType();

                //@Throws(Exception.constructor)
            
    public: Node* getFileBaseNameNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_H
