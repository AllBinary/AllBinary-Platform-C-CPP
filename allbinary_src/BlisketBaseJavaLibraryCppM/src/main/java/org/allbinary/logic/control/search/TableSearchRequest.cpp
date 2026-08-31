
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
        

    private: xslFile: string;

    private: pageName: string;

    private: contentType: string;

    private: keywords: string;

    private: searchParams: SearchParams;

public constructor (string keywords, SearchParams searchParams, string xslFile, string contentType){

            super();
        this.keywords= keywords;
    
this.searchParams= searchParams;
    
this.xslFile= xslFile;
    
this.pageName= this.pageName;
    
this.contentType= contentType;
    
}


    public setKeywords(string value){
this.keywords= value;
    
}


    public setParams(SearchParams searchParams){
this.searchParams= searchParams;
    
}


    public setXslFile(string value){
this.xslFile= value;
    
}


    public setFileBaseName(string value){
this.pageName= value;
    
}


    public setContentType(string value){
this.contentType= value;
    
}


    public string getKeywords(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.keywords;
    
}


    public SearchParams getParams(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.searchParams;
    
}


                //@Throws(Exception.constructor)
            
    public string getXslFile(){

    path: string = URLGLOBALS.getMainPath() +FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH +this.xslFile;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public string getFileBaseName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pageName;
    
}


    public string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.contentType;
    
}


                //@Throws(Exception.constructor)
            
    public Node getFileBaseNameNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueNodes(document, SearchData.FILENAME, this.getFileBaseName());;
    
}


};

            

