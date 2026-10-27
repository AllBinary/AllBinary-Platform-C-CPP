
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_SHIPPINGADDRESSVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_SHIPPINGADDRESSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/shipping/ShippingAddressView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/generic/address/StatesView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ShippingAddressView::ShippingAddressView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(this->getTransformInfoInterface());;
    
this->request= dynamic_cast<HttpServletRequest*>(httpTransformInfoInterface->getPageContext()->getRequest());
    
}


    auto ShippingAddressView::getRequest() -> HttpServletRequest*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->request;
    
}


                //@Throws(Exception.constructor)
            
    auto ShippingAddressView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* formNode = document->createElement(StreetAddressData::FORM);;
    
formNode->appendChild(this->streetAddress->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return formNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto ShippingAddressView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(new StatesView()));
    
}


                //@Throws(Exception.constructor)
            
    auto ShippingAddressView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_SHIPPINGADDRESSVIEW_CPP
