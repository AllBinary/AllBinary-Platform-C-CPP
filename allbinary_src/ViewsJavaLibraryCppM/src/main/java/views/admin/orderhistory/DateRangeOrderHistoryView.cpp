
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/Vector.h>

      
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
        
class DateRangeOrderHistoryView: public HttpStoreComponentView: public ValidationComponentInterface, public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const VIEWALLORDERS: string = "View All";

    private: const VIEWORDERSINLASTHOUR: string = "Last Hour";

    private: const VIEWORDERSINLASTDAY: string = "Last Day";

    private: const VIEWORDERSINLASTWEEK: string = "Last Week";

    private: const VIEWORDERSINLAST30DAYS: string = "30 Days";

    private: request: HttpServletRequest;

    private: shipped: string;

    private: partiallyShipped: string;

    private: processing: string;

    private: preprocessing: string;

    private: cancelled: string;

    private: dateType: string;

    private: toDate: string;

    private: fromDate: string;

    private: fromYear: string;

    private: fromMonth: string;

    private: fromDay: string;

    private: fromHour: string;

    private: toYear: string;

    private: toMonth: string;

    private: toDay: string;

    private: toHour: string;

    private: command: string;

    private: const ON: string = "on";

    private: MAXLEN: int32_t = 15;

public constructor (TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.request= this.getPageContext()!.getRequest() as HttpServletRequest;
    
this.getFormData();
    
}


    getFormData(){
this.dateType= this.request.getParameter(OrderHistoryData.DATETYPE);
    
this.preprocessing= this.request.getParameter(OrderHistoryData.PREPROCESSINGNAME);
    
this.shipped= this.request.getParameter(OrderHistoryData.SHIPPEDNAME);
    
this.partiallyShipped= this.request.getParameter(OrderHistoryData.PARTIALLYSHIPPEDNAME);
    
this.processing= this.request.getParameter(OrderHistoryData.PROCESSINGNAME);
    
this.cancelled= this.request.getParameter(OrderHistoryData.CANCELLEDNAME);
    
this.fromYear= this.request.getParameter(OrderHistoryData.FROMYEAR);
    
this.fromMonth= this.request.getParameter(OrderHistoryData.FROMMONTH);
    
this.fromDay= this.request.getParameter(OrderHistoryData.FROMDAY);
    
this.fromHour= this.request.getParameter(OrderHistoryData.FROMHOUR);
    
this.toYear= this.request.getParameter(OrderHistoryData.TOYEAR);
    
this.toMonth= this.request.getParameter(OrderHistoryData.TOMONTH);
    
this.toDay= this.request.getParameter(OrderHistoryData.TODAY);
    
this.toHour= this.request.getParameter(OrderHistoryData.TOHOUR);
    
this.command= this.request.getParameter(GLOBALS2.ADMINCOMMAND);
    
}


    public addDomNodeInterfaces(){
this.addDomNodeInterface(this as DomNodeInterface);
    
}


                //@Throws(Exception.constructor)
            
    public string view(){

        try {
            this.addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


    public Node toXmlNode(Document document){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Attempt to View orders in (fromDate=");
    
stringBuffer!.append(this.fromDate);
    
stringBuffer!.append(",toDate=");
    
stringBuffer!.append(this.toDate);
    
stringBuffer!.append(") and status");
    
this.logUtil!.putF(stringBuffer!.toString(), this, "view");
    

                                    }
                                

    node: Node = document.createElement(OrderData.ORDERS)!;;
    

                        if(this.preprocessing != 
                                    null
                                 && this.preprocessing.compareTo(this.ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Adding Preprocessing Orders", this, "toXmlNode");
    

                                    }
                                

    orderHistoryVector: Vector = OrderHistoryEntityFactory.getInstance()!.getOrders(OrderHistoryData.PREPROCESSING, fromDate, toDate)!;;
    

    size: int32_t = orderHistoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderHistory: OrderHistory = orderHistoryVector!.get(index) as OrderHistory;;
    
node.appendChild(orderHistory!.toXmlNode(document));
    
}


                                    }
                                

                        if(this.shipped != 
                                    null
                                 && this.shipped.compareTo(this.ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Adding Shipped Orders", this, "toXmlNode");
    

                                    }
                                

    orderHistoryVector: Vector = OrderHistoryEntityFactory.getInstance()!.getOrders(OrderHistoryData.SHIPPED, fromDate, toDate)!;;
    

    size: int32_t = orderHistoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderHistory: OrderHistory = orderHistoryVector!.get(index) as OrderHistory;;
    
node.appendChild(orderHistory!.toXmlNode(document));
    
}


                                    }
                                

                        if(this.partiallyShipped != 
                                    null
                                 && this.partiallyShipped!.compareTo(this.ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Adding Partially Shipped Orders", this, "toDomNode");
    

                                    }
                                

    orderHistoryVector: Vector = OrderHistoryEntityFactory.getInstance()!.getOrders(OrderHistoryData.PARTIALLYSHIPPED, fromDate, toDate)!;;
    

    size: int32_t = orderHistoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderHistory: OrderHistory = orderHistoryVector!.get(index) as OrderHistory;;
    
node.appendChild(orderHistory!.toXmlNode(document));
    
}


                                    }
                                

                        if(this.processing != 
                                    null
                                 && this.processing.compareTo(this.ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Adding Processing Orders", this, "toXmlNode");
    

                                    }
                                

    orderHistoryVector: Vector = OrderHistoryEntityFactory.getInstance()!.getOrders(OrderHistoryData.PROCESSING, fromDate, toDate)!;;
    

    size: int32_t = orderHistoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderHistory: OrderHistory = orderHistoryVector!.get(index) as OrderHistory;;
    
node.appendChild(orderHistory!.toXmlNode(document));
    
}


                                    }
                                

                        if(this.cancelled != 
                                    null
                                 && this.cancelled.compareTo(this.ON) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Adding Cancelled Orders", this, "view");
    

                                    }
                                

    orderHistoryVector: Vector = OrderHistoryEntityFactory.getInstance()!.getOrders(OrderHistoryData.CANCELLED, fromDate, toDate)!;;
    

    size: int32_t = orderHistoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    orderHistory: OrderHistory = orderHistoryVector!.get(index) as OrderHistory;;
    
node.appendChild(orderHistory!.toXmlNode(document));
    
}


                                    }
                                
node.appendChild(ModDomHelper.createNameValueNodes(document, OrderHistoryData.PREPROCESSINGNAME, OrderHistoryData.PREPROCESSING));
    
node.appendChild(ModDomHelper.createNameValueNodes(document, OrderHistoryData.PROCESSINGNAME, OrderHistoryData.PROCESSING));
    
node.appendChild(ModDomHelper.createNameValueNodes(document, OrderHistoryData.CANCELLEDNAME, OrderHistoryData.CANCELLED));
    
node.appendChild(ModDomHelper.createNameValueNodes(document, OrderHistoryData.PARTIALLYSHIPPEDNAME, OrderHistoryData.PARTIALLYSHIPPED));
    
node.appendChild(ModDomHelper.createNameValueNodes(document, OrderHistoryData.SHIPPEDNAME, OrderHistoryData.SHIPPED));
    
node.appendChild(ModDomHelper.createNameValueNodes(document, GLOBALS2.VIEWNAME, GLOBALS2.VIEW));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.XSLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "toXmlNode", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Boolean isValid(){

        try {
            
    isValid: Boolean = Boolean.TRUE;;
    

                        if(this.dateType == 
                                    null
                                 || (this.dateType!.compareTo(OrderHistoryData.TYPELONG) != 0 && this.dateType!.compareTo(OrderHistoryData.TYPECAESAR) != 0))
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                

                        if(this.dateType != 
                                    null
                                )
                        
                                    {
                                    
                        if(this.dateType!.compareTo(OrderHistoryData.TYPELONG) == 0)
                        
                                    {
                                    
    calendar: Calendar = Calendar.getInstance()!;;
    

    currentTime: int64_t = calendar.getTimeInMillis()!;;
    

    rangeDate: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(this.command.compareTo(this.VIEWORDERSINLASTHOUR) == 0)
                        
                                    {
                                    
    oneHour: int64_t = 60 *60 *1000;;
    
rangeDate= new Long(oneHour).toString();
    

                                    }
                                
                             else 
                        if(this.command.compareTo(this.VIEWORDERSINLASTDAY) == 0)
                        
                                    {
                                    
    oneDay: int64_t = 24 *60 *60 *1000;;
    
rangeDate= new Long(oneDay).toString();
    

                                    }
                                
                             else 
                        if(this.command.compareTo(this.VIEWORDERSINLASTWEEK) == 0)
                        
                                    {
                                    
    oneWeek: int64_t = 7 *24 *60 *60 *1000;;
    
rangeDate= new Long(oneWeek).toString();
    

                                    }
                                
                             else 
                        if(this.command.compareTo(this.VIEWORDERSINLAST30DAYS) == 0)
                        
                                    {
                                    
    thirtyDays: int64_t = 30 *24 *60 *60 *1000;;
    
rangeDate= new Long(thirtyDays).toString();
    

                                    }
                                
                             else 
                        if(this.command.compareTo(this.VIEWALLORDERS) == 0)
                        
                                    {
                                    rangeDate= new Long(currentTime).toString();
    

                                    }
                                

    rangeDateLong: int64_t = new Long(rangeDate).longValue()!;;
    
this.fromDate= new Long(currentTime -rangeDateLong).toString();
    

    time: string = new Long(currentTime).toString();;
    
this.toDate= time;
    

                                    }
                                
                             else 
                        if(this.dateType!.compareTo(OrderHistoryData.TYPECAESAR) == 0)
                        
                                    {
                                    
    calendar: Calendar = Calendar.getInstance()!;;
    
TimeUtil.getInstance()!.setCalendar(calendar, this.fromYear, this.fromMonth, this.fromDay, this.fromHour);
    
this.fromDate= new Long(calendar.getTimeInMillis()).toString();
    
TimeUtil.getInstance()!.setCalendar(calendar, this.toYear, this.toMonth, this.toDay, this.toHour);
    
this.toDate= new Long(calendar.getTimeInMillis()).toString();
    

                                    }
                                

                        if(StringValidationUtil.getInstance()!.isEmpty(this.toDate) || this.toDate!.length > this.MAXLEN)
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                

                        if(StringValidationUtil.getInstance()!.isEmpty(this.fromDate) || this.fromDate!.length > this.MAXLEN)
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Attempt to View orders in (fromDate=");
    
stringBuffer!.append(this.fromDate);
    
stringBuffer!.append(",toDate=");
    
stringBuffer!.append(this.toDate);
    
stringBuffer!.append(")");
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.put("Exception in validation", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public string validationInfo(){

        try {
            
    result: StringMaker = new StringMaker();;
    

                        if(this.dateType == 
                                    null
                                 || (this.dateType!.compareTo(OrderHistoryData.TYPELONG) != 0 && this.dateType!.compareTo(OrderHistoryData.TYPECAESAR) != 0))
                        
                                    {
                                    result.append("DATETYPE not recognized");
    

                                    }
                                

                        if(StringValidationUtil.getInstance()!.isEmpty(this.toDate) || this.toDate!.length > this.MAXLEN)
                        
                                    {
                                    result.append("Invalid To Date");
    

                                    }
                                

                        if(StringValidationUtil.getInstance()!.isEmpty(this.fromDate) || this.fromDate!.length > this.MAXLEN)
                        
                                    {
                                    result.append("Invalid From Date");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


};

            

