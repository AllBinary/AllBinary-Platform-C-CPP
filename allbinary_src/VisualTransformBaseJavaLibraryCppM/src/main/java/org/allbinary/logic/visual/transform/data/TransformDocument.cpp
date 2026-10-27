
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"

class TransformDocument
            : public Object
        , public TransformDocumentInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: Node* baseNode;

    private: Document* document;

public: TransformDocument(){

        try {
            this->document= DomDocumentHelper::create();
    

    Node* allbinaryNode = this->document->createElement("allbinary");;
    
this->baseNode= allbinaryNode;
    
this->document->appendChild(this->baseNode);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->putF(this->log(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


    public: Node* getBaseNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->baseNode;
    
}


    public: Document* getDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->document;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string log(){

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


};

            

