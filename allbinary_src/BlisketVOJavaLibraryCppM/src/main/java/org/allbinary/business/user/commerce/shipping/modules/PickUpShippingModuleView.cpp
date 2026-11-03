
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/shipping/modules/PickUpShippingModuleView.h"
        

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
        #include "org/allbinary/business/user/commerce/shipping/modules/PickUpShippingModule.h"
#include "org/allbinary/business/user/commerce/shipping/modules/Document.h"


PickUpShippingModuleView::PickUpShippingModuleView() : logUtil(LogUtil::getInstance()){
}


    auto PickUpShippingModuleView::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto PickUpShippingModuleView::toValidationInfoDoc() -> org::w3c::dom::Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto PickUpShippingModuleView::toValidationInfoNode(org::w3c::dom::Document* document) -> org::w3c::dom::Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto PickUpShippingModuleView::toXmlDoc() -> org::w3c::dom::Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto PickUpShippingModuleView::toXmlNode(org::w3c::dom::Document* document) -> org::w3c::dom::Node*{

        try {
            
    Node* shippingMethodNode = document->createElement(ShippingMethodData::NAME);;
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodData::NAME, this->getName()));
    
shippingMethodNode->appendChild(ModDomHelper::createNameValueNodes(document, ShippingMethodData::DESCRIPTION, this->getDescription()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return shippingMethodNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "toXmlNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto PickUpShippingModuleView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto PickUpShippingModuleView::view() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_CPP
