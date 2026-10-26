
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicWeightShippingModule.h"

class BasicWeightShippingModuleView: public BasicWeightShippingModule, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: BasicWeightShippingModuleView(){
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: org::w3c::dom::Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: org::w3c::dom::Node toValidationInfoNode(org::w3c::dom::Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: org::w3c::dom::Node toXmlNode(org::w3c::dom::Document document){

        try {
            
    Node shippingMethodNode = document.createElement(ShippingMethodData::NAME);;
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodData::NAME, this->getName()));
    
shippingMethodNode.appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodData::DESCRIPTION, this->getDescription()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return shippingMethodNode;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "toXmlNode", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: org::w3c::dom::Document toXmlDoc(){

        try {
            
    Document document = DomDocumentHelper::create();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "toXmlDoc", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::string view(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commonStrings.NOT_IMPLEMENTED;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

