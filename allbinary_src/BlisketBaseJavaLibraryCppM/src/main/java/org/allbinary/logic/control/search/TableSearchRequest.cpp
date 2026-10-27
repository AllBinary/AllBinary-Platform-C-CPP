
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/search/TableSearchRequest.h"
        

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


TableSearchRequest::TableSearchRequest(std::string keywords, SearchParams* searchParams, std::string xslFile, std::string contentType){
this->keywords= keywords;
    
this->searchParams= searchParams;
    
this->xslFile= xslFile;
    
this->pageName= this->pageName;
    
this->contentType= contentType;
    
}


    auto TableSearchRequest::setKeywords(std::string value) -> void{
this->keywords= value;
    
}


    auto TableSearchRequest::setParams(SearchParams* searchParams) -> void{
this->searchParams= searchParams;
    
}


    auto TableSearchRequest::setXslFile(std::string value) -> void{
this->xslFile= value;
    
}


    auto TableSearchRequest::setFileBaseName(std::string value) -> void{
this->pageName= value;
    
}


    auto TableSearchRequest::setContentType(std::string value) -> void{
this->contentType= value;
    
}


    auto TableSearchRequest::getKeywords() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keywords;
    
}


    auto TableSearchRequest::getParams() -> SearchParams*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->searchParams;
    
}


                //@Throws(Exception.constructor)
            
    auto TableSearchRequest::getXslFile() -> std::string{

    std::string path = URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH +this->xslFile;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    auto TableSearchRequest::getFileBaseName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pageName;
    
}


    auto TableSearchRequest::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contentType;
    
}


                //@Throws(Exception.constructor)
            
    auto TableSearchRequest::getFileBaseNameNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::FILENAME, this->getFileBaseName());;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_TABLESEARCHREQUEST_CPP
