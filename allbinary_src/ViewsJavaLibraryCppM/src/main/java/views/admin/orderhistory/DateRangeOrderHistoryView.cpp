
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
        



        #ifndef VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_CPP
        #define VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/orderhistory/DateRangeOrderHistoryView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/time/TimeUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DateRangeOrderHistoryView::DateRangeOrderHistoryView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->request= dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());
    
this->getFormData();
    
}


    auto DateRangeOrderHistoryView::getFormData() -> void{
this->dateType= this->request->getParameter(OrderHistoryData::DATETYPE);
    
this->preprocessing= this->request->getParameter(OrderHistoryData::PREPROCESSINGNAME);
    
this->shipped= this->request->getParameter(OrderHistoryData::SHIPPEDNAME);
    
this->partiallyShipped= this->request->getParameter(OrderHistoryData::PARTIALLYSHIPPEDNAME);
    
this->processing= this->request->getParameter(OrderHistoryData::PROCESSINGNAME);
    
this->cancelled= this->request->getParameter(OrderHistoryData::CANCELLEDNAME);
    
this->fromYear= this->request->getParameter(OrderHistoryData::FROMYEAR);
    
this->fromMonth= this->request->getParameter(OrderHistoryData::FROMMONTH);
    
this->fromDay= this->request->getParameter(OrderHistoryData::FROMDAY);
    
this->fromHour= this->request->getParameter(OrderHistoryData::FROMHOUR);
    
this->toYear= this->request->getParameter(OrderHistoryData::TOYEAR);
    
this->toMonth= this->request->getParameter(OrderHistoryData::TOMONTH);
    
this->toDay= this->request->getParameter(OrderHistoryData::TODAY);
    
this->toHour= this->request->getParameter(OrderHistoryData::TOHOUR);
    
this->command= this->request->getParameter(GLOBALS2::ADMINCOMMAND);
    
}


    auto DateRangeOrderHistoryView::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this));
    
}


                //@Throws(Exception.constructor)
            
    auto DateRangeOrderHistoryView::view() -> std::string{

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


    auto DateRangeOrderHistoryView::toXmlNode(Document* document) -> Node*{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Attempt to View orders in (fromDate=");
    
stringBuffer->append(this->fromDate);
    
stringBuffer->append(",toDate=");
    
stringBuffer->append(this->toDate);
    
stringBuffer->append(") and status");
    
this->logUtil->putF(stringBuffer->toString(), this, "view");
    

                                    }
                                

    Node* node = document->createElement(OrderData::ORDERS);;
    

                        if(true && this->preprocessing.compare(this->ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Adding Preprocessing Orders", this, "toXmlNode");
    

                                    }
                                

    BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory::getInstance()->getOrders(OrderHistoryData::PREPROCESSING, fromDate, toDate);;
    

    int32_t size = orderHistoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory* orderHistory = dynamic_cast<OrderHistory*>(orderHistoryVector->get(index));;
    
node->appendChild(orderHistory->toXmlNode(document));
    
}


                                    }
                                

                        if(true && this->shipped.compare(this->ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Adding Shipped Orders", this, "toXmlNode");
    

                                    }
                                

    BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory::getInstance()->getOrders(OrderHistoryData::SHIPPED, fromDate, toDate);;
    

    int32_t size = orderHistoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory* orderHistory = dynamic_cast<OrderHistory*>(orderHistoryVector->get(index));;
    
node->appendChild(orderHistory->toXmlNode(document));
    
}


                                    }
                                

                        if(true && this->partiallyShipped.compare(this->ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Adding Partially Shipped Orders", this, "toDomNode");
    

                                    }
                                

    BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory::getInstance()->getOrders(OrderHistoryData::PARTIALLYSHIPPED, fromDate, toDate);;
    

    int32_t size = orderHistoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory* orderHistory = dynamic_cast<OrderHistory*>(orderHistoryVector->get(index));;
    
node->appendChild(orderHistory->toXmlNode(document));
    
}


                                    }
                                

                        if(true && this->processing.compare(this->ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Adding Processing Orders", this, "toXmlNode");
    

                                    }
                                

    BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory::getInstance()->getOrders(OrderHistoryData::PROCESSING, fromDate, toDate);;
    

    int32_t size = orderHistoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory* orderHistory = dynamic_cast<OrderHistory*>(orderHistoryVector->get(index));;
    
node->appendChild(orderHistory->toXmlNode(document));
    
}


                                    }
                                

                        if(true && this->cancelled.compare(this->ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Adding Cancelled Orders", this, "view");
    

                                    }
                                

    BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory::getInstance()->getOrders(OrderHistoryData::CANCELLED, fromDate, toDate);;
    

    int32_t size = orderHistoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    OrderHistory* orderHistory = dynamic_cast<OrderHistory*>(orderHistoryVector->get(index));;
    
node->appendChild(orderHistory->toXmlNode(document));
    
}


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


    auto DateRangeOrderHistoryView::isValid() -> bool{

        try {
            
    bool isValid = Boolean::TRUE;;
    

                        if(false || (this->dateType.compare(OrderHistoryData::TYPELONG) != 0 && this->dateType.compare(OrderHistoryData::TYPECAESAR) != 0))
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(true)
                        
                                    {
                                    
                        if(this->dateType.compare(OrderHistoryData::TYPELONG) == 0)
                        
                                    {
                                    
    Calendar* calendar = Calendar::getInstance();;
    

    int64_t currentTime = calendar->getTimeInMillis();;
    

    std::string rangeDate = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(this->command.compare(this->VIEWORDERSINLASTHOUR) == 0)
                        
                                    {
                                    
    int64_t oneHour = 60 *60 *1000;;
    
rangeDate= (int64_t(oneHour)).toString();
    

                                    }
                                
                             else 
                        if(this->command.compare(this->VIEWORDERSINLASTDAY) == 0)
                        
                                    {
                                    
    int64_t oneDay = 24 *60 *60 *1000;;
    
rangeDate= (int64_t(oneDay)).toString();
    

                                    }
                                
                             else 
                        if(this->command.compare(this->VIEWORDERSINLASTWEEK) == 0)
                        
                                    {
                                    
    int64_t oneWeek = 7 *24 *60 *60 *1000;;
    
rangeDate= (int64_t(oneWeek)).toString();
    

                                    }
                                
                             else 
                        if(this->command.compare(this->VIEWORDERSINLAST30DAYS) == 0)
                        
                                    {
                                    
    int64_t thirtyDays = 30 *24 *60 *60 *1000;;
    
rangeDate= (int64_t(thirtyDays)).toString();
    

                                    }
                                
                             else 
                        if(this->command.compare(this->VIEWALLORDERS) == 0)
                        
                                    {
                                    rangeDate= (int64_t(currentTime)).toString();
    

                                    }
                                

    int64_t rangeDateLong = (int64_t(rangeDate)).longValue();;
    
this->fromDate= (int64_t(currentTime -rangeDateLong)).toString();
    

    std::string time = (int64_t(currentTime)).toString();;
    
this->toDate= time;
    

                                    }
                                
                             else 
                        if(this->dateType.compare(OrderHistoryData::TYPECAESAR) == 0)
                        
                                    {
                                    
    Calendar* calendar = Calendar::getInstance();;
    
TimeUtil::getInstance()->setCalendar(calendar, this->fromYear, this->fromMonth, this->fromDay, this->fromHour);
    
this->fromDate= (int64_t(calendar->getTimeInMillis())).toString();
    
TimeUtil::getInstance()->setCalendar(calendar, this->toYear, this->toMonth, this->toDay, this->toHour);
    
this->toDate= (int64_t(calendar->getTimeInMillis())).toString();
    

                                    }
                                

                        if(StringValidationUtil::getInstance()->isEmpty(this->toDate) || this->toDate.size() > this->MAXLEN)
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(StringValidationUtil::getInstance()->isEmpty(this->fromDate) || this->fromDate.size() > this->MAXLEN)
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Attempt to View orders in (fromDate=");
    
stringBuffer->append(this->fromDate);
    
stringBuffer->append(",toDate=");
    
stringBuffer->append(this->toDate);
    
stringBuffer->append(")");
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->put("Exception in validation", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto DateRangeOrderHistoryView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto DateRangeOrderHistoryView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto DateRangeOrderHistoryView::validationInfo() -> std::string{

        try {
            
    StringMaker* result = new StringMaker();;
    

                        if(false || (this->dateType.compare(OrderHistoryData::TYPELONG) != 0 && this->dateType.compare(OrderHistoryData::TYPECAESAR) != 0))
                        
                                    {
                                    result->append("DATETYPE not recognized");
    

                                    }
                                

                        if(StringValidationUtil::getInstance()->isEmpty(this->toDate) || this->toDate.size() > this->MAXLEN)
                        
                                    {
                                    result->append("Invalid To Date");
    

                                    }
                                

                        if(StringValidationUtil::getInstance()->isEmpty(this->fromDate) || this->fromDate.size() > this->MAXLEN)
                        
                                    {
                                    result->append("Invalid From Date");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Getting Validation Info";
    
}

}




        #endif //VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_CPP
