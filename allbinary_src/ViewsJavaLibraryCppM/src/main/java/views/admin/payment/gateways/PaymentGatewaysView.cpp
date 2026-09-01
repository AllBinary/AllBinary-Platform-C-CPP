
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewaysView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Vector paymentGatewayVector;

public: PaymentGatewaysView(TransformInfoInterface transformInfoInterface, Vector gatewayVector){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->paymentGatewayVector= gatewayVector;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

        try {
            
    std::string storeName = this->getTransformInfoInterface().getStoreName();;
    

    Node paymentGatewaysNode = document.createElement(PaymentGatewaysData::NAME);;
    

    int32_t size = this->paymentGatewayVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicPaymentType paymentType = this->paymentGatewayVector.get(index) as BasicPaymentType;;
    

    HashMap<any, any> hashMap = paymentType.toHashMap();;
    
hashMap.put(EntryData::getInstance().DEFAULT, PaymentTypeUtil::getInstance().getDefault(storeName).getBasicPaymentType().getName());
    

    Node paymentGatewayNode = ModDomHelper::createNodeWithValueNodes(document, PaymentGatewayData::NAME.toString(), hashMap);;
    
paymentGatewaysNode.appendChild(paymentGatewayNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewaysNode;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public: void addDomNodeInterfaces(){
this->addDomNodeInterface(this as DomNodeInterface);
    
}


    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to view payment gateways";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

