
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
        



        #ifndef VIEWS_ADMIN_ORDERHISTORY_USERNAMEORDERHISTORYVIEW_CPP
        #define VIEWS_ADMIN_ORDERHISTORY_USERNAMEORDERHISTORYVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/orderhistory/UserNameOrderHistoryView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/username/UserName.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UserNameOrderHistoryView::UserNameOrderHistoryView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
this->userName= this->request->getParameter(UserData::USERNAME);
    
this->preprocessing= this->request->getParameter(OrderHistoryData::PREPROCESSINGNAME);
    
this->shipped= this->request->getParameter(OrderHistoryData::SHIPPEDNAME);
    
this->partiallyShipped= this->request->getParameter(OrderHistoryData::PARTIALLYSHIPPEDNAME);
    
this->processing= this->request->getParameter(OrderHistoryData::PROCESSINGNAME);
    
this->cancelled= this->request->getParameter(OrderHistoryData::CANCELLEDNAME);
    
}


    auto UserNameOrderHistoryView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    auto UserNameOrderHistoryView::view() -> std::string{

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


    auto UserNameOrderHistoryView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* node = document->createElement(OrderData::ORDERS);;
    

    OrderHistoryEntity* orderHistoryEntity = new OrderHistoryEntity();;
    

    BasicArrayList* orderReviewVector = orderHistoryEntity->getOrders(this->userName);;
    

    int32_t size = orderReviewVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory* orderHistory = dynamic_cast<OrderHistory*>(orderReviewVector->get(index));;
    

    Node* orderHistoryNode = orderHistory->toXmlNode(document);;
    

    Node* orderNode = document->createElement(orderHistory->getPaymentMethod());;
    
node->appendChild(orderHistory->toXmlNode(document));
    
}


                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Attempt to View a users order history", this, "view");
    

                                    }
                                
node->appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::PREPROCESSINGNAME, OrderHistoryData::PREPROCESSING));
    
node->appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::PROCESSINGNAME, OrderHistoryData::PROCESSING));
    
node->appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::CANCELLEDNAME, OrderHistoryData::CANCELLED));
    
node->appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::PARTIALLYSHIPPEDNAME, OrderHistoryData::PARTIALLYSHIPPED));
    
node->appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::SHIPPEDNAME, OrderHistoryData::SHIPPED));
    
node->appendChild(ModDomHelper::createNameValueNodes(document, GLOBALS2::VIEWNAME, GLOBALS2::VIEW));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto UserNameOrderHistoryView::isValid() -> bool{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Started", this, this->commonStrings->IS_VALID);
    

                                    }
                                

                        if(UserName::getInstance()->isValid(this->userName) == Boolean::TRUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}


    auto UserNameOrderHistoryView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto UserNameOrderHistoryView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto UserNameOrderHistoryView::validationInfo() -> std::string{

                        if(false)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "No User Name Specified<br />";
    

                        if(UserName::getInstance()->isValid(this->userName) == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Invalid User Name<br />";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Unknown Error<br />";
    
}




        #endif //VIEWS_ADMIN_ORDERHISTORY_USERNAMEORDERHISTORYVIEW_CPP
