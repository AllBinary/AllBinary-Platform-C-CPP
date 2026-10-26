
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
        
class UserNameOrderHistoryView: public HttpStoreComponentView, public ValidationComponentInterface, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    private: std::string userName;

    private: std::string shipped;

    private: std::string partiallyShipped;

    private: std::string processing;

    private: std::string preprocessing;

    private: std::string cancelled;

    private: const std::string ON = "on";

public: UserNameOrderHistoryView(TransformInfoInterface transformInfoInterface) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= this->getPageContext().getRequest();
    
this->userName= this->request.getParameter(UserData::USERNAME);
    
this->preprocessing= this->request.getParameter(OrderHistoryData::PREPROCESSINGNAME);
    
this->shipped= this->request.getParameter(OrderHistoryData::SHIPPEDNAME);
    
this->partiallyShipped= this->request.getParameter(OrderHistoryData::PARTIALLYSHIPPEDNAME);
    
this->processing= this->request.getParameter(OrderHistoryData::PROCESSINGNAME);
    
this->cancelled= this->request.getParameter(OrderHistoryData::CANCELLEDNAME);
    
}


    public: void addDomNodeInterfaces(){
this->addDomNodeInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public: Node toXmlNode(Document document){

        try {
            
    Node node = document.createElement(OrderData::ORDERS);;
    

    OrderHistoryEntity orderHistoryEntity = OrderHistoryEntity();;
    

    BasicArrayList orderReviewVector = orderHistoryEntity.getOrders(this->userName);;
    

    int32_t size = orderReviewVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory orderHistory = orderReviewVector.get(index);;
    

    Node orderHistoryNode = orderHistory.toXmlNode(document);;
    

    Node orderNode = document.createElement(orderHistory.getPaymentMethod());;
    
node.appendChild(orderHistory.toXmlNode(document));
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Attempt to View a users order history", this, "view");
    

                                    }
                                
node.appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::PREPROCESSINGNAME, OrderHistoryData::PREPROCESSING));
    
node.appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::PROCESSINGNAME, OrderHistoryData::PROCESSING));
    
node.appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::CANCELLEDNAME, OrderHistoryData::CANCELLED));
    
node.appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::PARTIALLYSHIPPEDNAME, OrderHistoryData::PARTIALLYSHIPPED));
    
node.appendChild(ModDomHelper::createNameValueNodes(document, OrderHistoryData::SHIPPEDNAME, OrderHistoryData::SHIPPED));
    
node.appendChild(ModDomHelper::createNameValueNodes(document, GLOBALS2::VIEWNAME, GLOBALS2::VIEW));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().XSLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: Boolean isValid(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Started", this, this->commonStrings.IS_VALID);
    

                                    }
                                

                        if(UserName::getInstance().isValid(this->userName) == Boolean::TRUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string validationInfo(){

                        if(false)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "No User Name Specified<br />";
    

                        if(UserName::getInstance().isValid(this->userName) == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Invalid User Name<br />";
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Unknown Error<br />";
    
}


};

            

