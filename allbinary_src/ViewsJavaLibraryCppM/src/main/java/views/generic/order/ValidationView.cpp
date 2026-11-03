
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
        



        #ifndef VIEWS_GENERIC_ORDER_VALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ORDER_VALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/order/ValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/order/OrderView.h"


ValidationView::ValidationView(TransformInfoInterface* transformInfoInterface) : OrderView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ValidationView::isValid() -> bool{

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(this->order->isIdValid() == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            this->orderHistory= OrderHistoryFactory::getInstance(this->order->getId());
    

                        if(this->orderHistory == 
                                    nullptr
                                 || this->orderHistory->isValid() == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    OrderItemsEntity* orderItems = new OrderItemsEntity();;
    
this->basketReview= orderItems->getBasketReview(this->order->getId());
    

                        if(this->basketReview == 
                                    nullptr
                                 || this->basketReview->isValid() == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto ValidationView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->order->isIdValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append(this->order->getIdValidationInfo());
    

                                    }
                                
                        else {
                            this->orderHistory= OrderHistoryFactory::getInstance(this->order->getId());
    

                        if(this->orderHistory == 
                                    nullptr
                                 || this->orderHistory->isValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append("Order History data error for: ");
    
stringBuffer->append(this->order->getId());
    
stringBuffer->append("<br />");
    

                                    }
                                

    OrderItemsEntity* orderItems = new OrderItemsEntity();;
    
this->basketReview= orderItems->getBasketReview(this->order->getId());
    

                        if(this->basketReview == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Order Items data error - does not exist for: ");
    
stringBuffer->append(this->order->getId());
    
stringBuffer->append("<br />");
    

                                    }
                                
                             else 
                        if(this->basketReview->isValid() == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append("Order Items data error - not valid for: ");
    
stringBuffer->append(this->order->getId());
    
stringBuffer->append("<br />");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto ValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto ValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ORDER_VALIDATIONVIEW_CPP
