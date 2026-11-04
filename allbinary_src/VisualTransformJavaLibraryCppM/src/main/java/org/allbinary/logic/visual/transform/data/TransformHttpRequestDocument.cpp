
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENT_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/http/AcceptableResponseGenerator.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"


TransformHttpRequestDocument::TransformHttpRequestDocument(PageContext* pageContext, WeblisketSession* weblisketSession) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

        try {
            
    std::string contentType = AcceptableResponseGenerator::getInstance()->get(dynamic_cast<HttpServletRequest*>(pageContext->getRequest()));;
    
this->document= DomDocumentHelper::create();
    

    Node* contentTypeNode = this->document->createElement(contentType);;
    

    Node* languageTypeNode = this->document->createElement(language);;
    

    Node* localTypeNode = this->document->createElement(local);;
    
this->baseNode= localTypeNode;
    
languageTypeNode->appendChild(localTypeNode);
    
contentTypeNode->appendChild(languageTypeNode);
    
this->document->appendChild(contentTypeNode);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->putF(this->log(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


TransformHttpRequestDocument::TransformHttpRequestDocument(SearchRequest* searchRequest) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

        try {
            
    std::string contentType = searchRequest->getContentType();;
    
this->document= DomDocumentHelper::create();
    

    Node* contentTypeNode = this->document->createElement(contentType);;
    

    Node* languageTypeNode = this->document->createElement(language);;
    

    Node* localTypeNode = this->document->createElement(local);;
    
this->baseNode= localTypeNode;
    
languageTypeNode->appendChild(localTypeNode);
    
contentTypeNode->appendChild(languageTypeNode);
    
this->document->appendChild(contentTypeNode);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto TransformHttpRequestDocument::getBaseNode() -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->baseNode;
    
}


    auto TransformHttpRequestDocument::getDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->document;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformHttpRequestDocument::log() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->baseNode != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("BaseNode: ");
    
stringBuffer->append(this->baseNode->getNodeName());
    

                                    }
                                
                        else {
                            stringBuffer->append("Log-Error: BaseNode is Null");
    

                        }
                            
stringBuffer->append("\nDocument: ");
    
stringBuffer->append(XmlDocumentHelper::toString(this->document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMHTTPREQUESTDOCUMENT_CPP
