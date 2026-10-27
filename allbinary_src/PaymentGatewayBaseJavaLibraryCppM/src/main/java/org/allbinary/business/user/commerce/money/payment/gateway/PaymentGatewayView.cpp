
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayMapping.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"

class PaymentGatewayView
            : public Object
        , public DomNodeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: PaymentGatewayInterface* paymentGatewayInterface;

public: PaymentGatewayView(PaymentGatewayInterface* paymentGatewayInterface){
this->paymentGatewayInterface= paymentGatewayInterface;
    
}


    public: PaymentGatewayInterface* getPaymentGatewayInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "toXmlNode");
    

                                    }
                                

    HashMap<Object*, Object*>* hashMap = (new PaymentGatewayMapping(this->paymentGatewayInterface))->toHashMap();;
    
hashMap->putAll(this->toHashMap());
    

    Node* paymentGatewayNode = ModDomHelper::createNodeWithValueNodes(document, PaymentGatewayData::NAME.toString(), hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayNode;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "toXmlNode", &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

