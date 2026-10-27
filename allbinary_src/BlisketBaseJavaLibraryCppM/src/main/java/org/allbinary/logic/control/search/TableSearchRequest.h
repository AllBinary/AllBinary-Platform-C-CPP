
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ModDomHelper;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SearchParams;
class SearchData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TableSearchRequest
            : public virtual Object
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
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
    
