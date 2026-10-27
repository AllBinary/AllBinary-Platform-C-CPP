
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/search/SearchRequest.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/search/SearchParams.h"
#include "org/allbinary/logic/control/search/SearchData.h"


SearchRequest::SearchRequest(StoreFrontInterface* storeFront, SearchParams* searchParams, std::string xslFile, std::string contentType, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : AbContext(propertiesHashMap, pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->storeFront= storeFront;
    
this->searchParams= searchParams;
    
this->xslFile= xslFile;
    
this->pageName= this->pageName;
    
this->contentType= contentType;
    
}


    auto SearchRequest::setStoreFront(StoreFrontInterface* storeFront) -> void{
this->storeFront= storeFront;
    
}


    auto SearchRequest::setParams(SearchParams* searchParams) -> void{
this->searchParams= searchParams;
    
}


    auto SearchRequest::setXslFile(std::string value) -> void{
this->xslFile= value;
    
}


    auto SearchRequest::setFileBaseName(std::string value) -> void{
this->pageName= value;
    
}


    auto SearchRequest::setContentType(std::string value) -> void{
this->contentType= value;
    
}


    auto SearchRequest::getStoreFront() -> StoreFrontInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFront;
    
}


    auto SearchRequest::getParams() -> SearchParams*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->searchParams;
    
}


    auto SearchRequest::getXslFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->xslFile;
    
}


    auto SearchRequest::getFileBaseName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pageName;
    
}


    auto SearchRequest::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contentType;
    
}


                //@Throws(Exception.constructor)
            
    auto SearchRequest::getFileBaseNameNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::FILENAME, this->getFileBaseName());;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHREQUEST_CPP
