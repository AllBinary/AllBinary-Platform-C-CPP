
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

    private: std::string xslFile;

    private: std::string pageName;

    private: std::string contentType;

    private: std::string keywords;

    private: SearchParams searchParams;

public: TableSearchRequest(std::string keywords, SearchParams searchParams, std::string xslFile, std::string contentType){
this->keywords= keywords;
    
this->searchParams= searchParams;
    
this->xslFile= xslFile;
    
this->pageName= this->pageName;
    
this->contentType= contentType;
    
}


    public: void setKeywords(std::string value){
this->keywords= value;
    
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


    public: std::string getKeywords(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keywords;
    
}


    public: SearchParams getParams(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->searchParams;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getXslFile(){

    std::string path = URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH +this->xslFile;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
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

            

