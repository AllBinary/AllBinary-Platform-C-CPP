
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_NOSHIPPINGMODULEVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_NOSHIPPINGMODULEVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/modules/NoShippingModule.h"
#include "org/allbinary/business/user/commerce/shipping/modules/Document.h"


NoShippingModuleView::NoShippingModuleView() : logUtil(LogUtil::getInstance()){
}


    auto NoShippingModuleView::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NoShippingModuleView::toValidationInfoDoc() -> org::w3c::dom::Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NoShippingModuleView::toValidationInfoNode(org::w3c::dom::Document* document) -> org::w3c::dom::Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NoShippingModuleView::toXmlDoc() -> org::w3c::dom::Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NoShippingModuleView::toXmlNode(org::w3c::dom::Document* document) -> org::w3c::dom::Node*{

        try {
            
    Node* shippingMethodNode = document->createElement(ShippingMethodData::NAME);;
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodData::NAME, this->getName()));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodData::DESCRIPTION, this->getDescription()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return shippingMethodNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "toXmlNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    auto NoShippingModuleView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NoShippingModuleView::view() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_NOSHIPPINGMODULEVIEW_CPP
