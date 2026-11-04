
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_BILLING_BILLINGADDRESSVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_BILLING_BILLINGADDRESSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/billing/BillingAddressView.h"
        

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

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/generic/address/StatesView.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BillingAddressView::BillingAddressView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
}


    auto BillingAddressView::getRequest() -> HttpServletRequest*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->request;
    
}


                //@Throws(Exception.constructor)
            
    auto BillingAddressView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* formNode = document->createElement(StreetAddressData::FORM);;
    
formNode->appendChild(this->streetAddress->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return formNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto BillingAddressView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(new StatesView()));
    
}


                //@Throws(Exception.constructor)
            
    auto BillingAddressView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_GENERIC_ADDRESS_BILLING_BILLINGADDRESSVIEW_CPP
