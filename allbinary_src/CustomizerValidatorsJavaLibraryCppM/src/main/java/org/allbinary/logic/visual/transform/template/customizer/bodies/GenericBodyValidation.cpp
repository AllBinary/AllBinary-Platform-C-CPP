
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

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h"

class GenericBodyValidation: public Validation, public DomNodeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string body;

public: GenericBodyValidation(){
this->body= StringUtil::getInstance()->EMPTY_STRING;
    
}


public: GenericBodyValidation(Document* document){

    NodeList* nodeList = document->getElementsByTagName(BodyData::getInstance()->NAME);;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* aBodyNode = nodeList->item(index);;
    

    Node* aBodyValueNode = DomSearchHelper::getNode(DomData::VALUE, aBodyNode->getChildNodes());;
    
this->body= DomNodeHelper::getTextNodeValue(aBodyValueNode);
    
}

}


public: GenericBodyValidation(HashMap<Object*, Object*>* hashMap){
this->getFormData(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    public: void getFormData(HashMap<Object*, Object*>* hashMap){
this->body= hashMap->get(BodyData::getInstance()->NAME);
    
}


    public: bool isValid(){

        try {
            
    bool isValid = Boolean::TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.START, this, this->commonStrings.IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidNotRequired(this->body, BodyData::getInstance()->MIN, AbSqlData::MAXBLOB))
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("BodyValidation: " +isValid, this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings.IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    


                            {
                            stringBuffer->append("Error: Data submitted is < ");
    
stringBuffer->appendint(BodyData::getInstance()->MIN);
    
stringBuffer->append(" or > ");
    
stringBuffer->appendint(AbSqlData::MAXBLOB);
    

                            }
                    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public: Document* toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node* toValidationInfoNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    Node* node = ModDomHelper::createNameValueNodes(document, BodyData::getInstance()->NAME, this->body);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

