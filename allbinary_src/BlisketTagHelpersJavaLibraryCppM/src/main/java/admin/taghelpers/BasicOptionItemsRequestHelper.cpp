
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
        



            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/option/BasicOptionItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class BasicOptionItemsRequestHelper: public ModifyTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: request: HttpServletRequest;

    private: id: string;

    private: optionOneTitle: string;

    private: defaultOptionItem: string;

    private: defaultOptionValue: string;

    private: optionItem: Vector;

    private: optionValue: Vector;

    private: timeEntered: string;

    private: lastModified: string;

public constructor (HashMap<any, any> hashMap, PageContext pageContext){

            super();
        this.request= pageContext!.getRequest() as HttpServletRequest;
    
this.getFormData();
    
}


    public getFormData(){
this.optionItem= new Vector();
    
this.optionValue= new Vector();
    
this.id= this.request.getParameter(BasicItemData.ID);
    
this.optionOneTitle= this.request.getParameter(BasicOptionItemData.OPTION_ONE_TITLE);
    
this.defaultOptionItem= this.request.getParameter(BasicOptionItemData.DEFAULT_OPTION_ITEM);
    
this.defaultOptionValue= this.request.getParameter(BasicOptionItemData.DEFAULT_OPTION_VALUE);
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_ONE_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_ONE_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_TWO_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_TWO_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_THREE_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_THREE_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_FOUR_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_FOUR_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_FIVE_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_FIVE_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_SIX_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_SIX_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_SEVEN_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_SEVEN_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_EIGHT_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_EIGHT_VALUE));
    
this.optionItem!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_NINE_ITEM));
    
this.optionValue!.add(this.request.getParameter(BasicOptionItemData.OPTION_ONE_NINE_VALUE));
    
this.timeEntered= this.request.getParameter(EntryData.getInstance()!.TIMECREATED);
    
this.lastModified= this.request.getParameter(EntryData.getInstance()!.LASTMODIFIED);
    
}


    HashMap<any, any> getHashMap(){

    values: HashMap<any, any> = new HashMap<any, any>();;
    
values.put(BasicItemData.ID, id);
    
values.put(BasicOptionItemData.OPTION_ONE_ONE_ITEM, this.optionItem!.get(0));
    
values.put(BasicOptionItemData.OPTION_ONE_ONE_VALUE, this.optionValue!.get(0));
    
values.put(BasicOptionItemData.OPTION_ONE_TWO_ITEM, this.optionItem!.get(1));
    
values.put(BasicOptionItemData.OPTION_ONE_TWO_VALUE, this.optionValue!.get(1));
    
values.put(BasicOptionItemData.OPTION_ONE_THREE_ITEM, this.optionItem!.get(2));
    
values.put(BasicOptionItemData.OPTION_ONE_THREE_VALUE, this.optionValue!.get(2));
    
values.put(BasicOptionItemData.OPTION_ONE_FOUR_ITEM, this.optionItem!.get(3));
    
values.put(BasicOptionItemData.OPTION_ONE_FOUR_VALUE, this.optionValue!.get(3));
    
values.put(BasicOptionItemData.OPTION_ONE_FIVE_ITEM, this.optionItem!.get(4));
    
values.put(BasicOptionItemData.OPTION_ONE_FIVE_VALUE, this.optionValue!.get(4));
    
values.put(BasicOptionItemData.OPTION_ONE_SIX_ITEM, this.optionItem!.get(5));
    
values.put(BasicOptionItemData.OPTION_ONE_SIX_VALUE, this.optionValue!.get(5));
    
values.put(BasicOptionItemData.OPTION_ONE_SEVEN_ITEM, this.optionItem!.get(6));
    
values.put(BasicOptionItemData.OPTION_ONE_SEVEN_VALUE, this.optionValue!.get(6));
    
values.put(BasicOptionItemData.OPTION_ONE_EIGHT_ITEM, this.optionItem!.get(7));
    
values.put(BasicOptionItemData.OPTION_ONE_EIGHT_VALUE, this.optionValue!.get(7));
    
values.put(BasicOptionItemData.OPTION_ONE_NINE_ITEM, this.optionItem!.get(8));
    
values.put(BasicOptionItemData.OPTION_ONE_NINE_VALUE, this.optionValue!.get(8));
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.put(EntryData.getInstance()!.LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public string insert(){

        try {
            
    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    

    values: Vector = new Vector();;
    
values.add(this.id);
    

    size: int32_t = this.optionValue!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
values.add(this.optionValue!.get(index));
    
values.add(this.optionItem!.get(index));
    
}

values.add(time);
    
values.add(time);
    
BasicOptionItemsEntityFactory.getInstance()!.getBasicOptionItemsEntityInstance()!.insert(values);
    

    success: string = "Successfully inserted " +this.id +" into items table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to insert " +this.id +" into items table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "inserts()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string delete(){

        try {
            BasicOptionItemsEntityFactory.getInstance()!.getBasicOptionItemsEntityInstance()!.delete(this.id);
    

    success: string = "Successfully deleted";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to delete";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "delete()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string update(){

        try {
            
    success: string = "Update Pricing Successful";;
    

    values: HashMap<any, any> = this.getHashMap()!;;
    
BasicOptionItemsEntityFactory.getInstance()!.getBasicOptionItemsEntityInstance()!.update(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(this.id)!.append(CommonSeps.getInstance()!.SPACE)!.append(success)!.toString(), this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to update: " +this.id;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

