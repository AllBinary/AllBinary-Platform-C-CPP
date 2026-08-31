
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformDocumentInterface.h"

class TransformHttpRequestDocument
            : public Object
        : public TransformDocumentInterface {
        

    private: static const language: string = "en";

    private: static const local: string = "US";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: baseNode: Node;

    private: document: Document;

public constructor (PageContext pageContext, WeblisketSession weblisketSession){

            super();
        
        try {
            
    contentType: string = AcceptableResponseGenerator.getInstance()!.get(pageContext!.getRequest() as HttpServletRequest)!;;
    
this.document= DomDocumentHelper.create();
    

    contentTypeNode: Node = this.document.createElement(contentType)!;;
    

    languageTypeNode: Node = this.document.createElement(language)!;;
    

    localTypeNode: Node = this.document.createElement(local)!;;
    
this.baseNode= localTypeNode;
    
languageTypeNode!.appendChild(localTypeNode);
    
contentTypeNode!.appendChild(languageTypeNode);
    
this.document.appendChild(contentTypeNode);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.putF(this.log(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    

                                    }
                                



                            throw e;
                    
}

}


public constructor (SearchRequest searchRequest){

            super();
        
        try {
            
    contentType: string = searchRequest!.getContentType()!;;
    
this.document= DomDocumentHelper.create();
    

    contentTypeNode: Node = this.document.createElement(contentType)!;;
    

    languageTypeNode: Node = this.document.createElement(language)!;;
    

    localTypeNode: Node = this.document.createElement(local)!;;
    
this.baseNode= localTypeNode;
    
languageTypeNode!.appendChild(localTypeNode);
    
contentTypeNode!.appendChild(languageTypeNode);
    
this.document.appendChild(contentTypeNode);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    

                                    }
                                



                            throw e;
                    
}

}


    public Node getBaseNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.baseNode;
    
}


    public Document getDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.document;
    
}


                //@Throws(Exception.constructor)
            
    public string log(){

    stringBuffer: StringMaker = new StringMaker();;
    

                        if(this.baseNode != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append("BaseNode: ");
    
stringBuffer!.append(this.baseNode!.getNodeName());
    

                                    }
                                
                        else {
                            stringBuffer!.append("Log-Error: BaseNode is Null");
    

                        }
                            
stringBuffer!.append("\nDocument: ");
    
stringBuffer!.append(DomDocumentHelper.toString(this.document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

