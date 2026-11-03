
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_CPP
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/payment/gateways/PaymentGatewaysView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewaysData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PaymentGatewaysView::PaymentGatewaysView(TransformInfoInterface* transformInfoInterface, BasicArrayList* gatewayVector) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->paymentGatewayVector= gatewayVector;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentGatewaysView::toXmlNode(Document* document) -> Node*{

        try {
            
    std::string storeName = this->getTransformInfoInterface()->getStoreName();;
    

    Node* paymentGatewaysNode = document->createElement(PaymentGatewaysData::NAME);;
    

    int32_t size = this->paymentGatewayVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicPaymentType* paymentType = dynamic_cast<BasicPaymentType*>(this->paymentGatewayVector->get(index));;
    

    HashMap<Object*, Object*>* hashMap = paymentType->toHashMap();;
    
hashMap->put(EntryData::getInstance()->DEFAULT, PaymentTypeUtil::getInstance()->getDefault(storeName)->getBasicPaymentType()->getName());
    

    Node* paymentGatewayNode = ModDomHelper::createNodeWithValueNodes(document, PaymentGatewayData::NAME->toString(), hashMap);;
    
paymentGatewaysNode->appendChild(paymentGatewayNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentGatewaysNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto PaymentGatewaysView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


    auto PaymentGatewaysView::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to view payment gateways";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //VIEWS_ADMIN_PAYMENT_GATEWAYS_PAYMENTGATEWAYSVIEW_CPP
