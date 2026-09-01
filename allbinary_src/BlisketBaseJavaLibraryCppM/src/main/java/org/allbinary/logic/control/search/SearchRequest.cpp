
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

    private: std::string xslFile;

    private: std::string pageName;

    private: std::string contentType;

    private: SearchParams searchParams;

    private: StoreFrontInterface storeFront;

public: SearchRequest(StoreFrontInterface storeFront, SearchParams searchParams, std::string xslFile, std::string contentType, HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super(propertiesHashMap, pageContext);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->storeFront= storeFront;
    
this->searchParams= searchParams;
    
this->xslFile= xslFile;
    
this->pageName= this->pageName;
    
this->contentType= contentType;
    
}


    public: void setStoreFront(StoreFrontInterface storeFront){
this->storeFront= storeFront;
    
}


    public: void setParams(SearchParams searchParams){
this->searchParams= searchParams;
    
}


    public: void setXslFile(std::string value){
this->xslFile= value;
    
}


    public: void setFileBaseName(std::string value){
this->pageName= value;
    
}


    public: void setContentType(std::string value){
this->contentType= value;
    
}


    public: StoreFrontInterface getStoreFront(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFront;
    
}


    public: SearchParams getParams(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->searchParams;
    
}


    public: std::string getXslFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->xslFile;
    
}


    public: std::string getFileBaseName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pageName;
    
}


    public: std::string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contentType;
    
}


                //@Throws(Exception.constructor)
            
    public: Node getFileBaseNameNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::FILENAME, this->getFileBaseName());;
    
}


};

            

