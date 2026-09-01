
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string optionOneTitle;

    private: std::string defaultOptionItem;

    private: std::string defaultOptionValue;

    private: Vector optionItem;

    private: Vector optionValue;

    private: std::string timeEntered;

    private: std::string lastModified;

public: BasicOptionItemsRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->request= pageContext.getRequest() as HttpServletRequest;
    
this->getFormData();
    
}


    public: void getFormData(){
this->optionItem= Vector();
    
this->optionValue= Vector();
    
this->id= this->request.getParameter(BasicItemData::ID);
    
this->optionOneTitle= this->request.getParameter(BasicOptionItemData::OPTION_ONE_TITLE);
    
this->defaultOptionItem= this->request.getParameter(BasicOptionItemData::DEFAULT_OPTION_ITEM);
    
this->defaultOptionValue= this->request.getParameter(BasicOptionItemData::DEFAULT_OPTION_VALUE);
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_ONE_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_ONE_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_TWO_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_TWO_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_THREE_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_THREE_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_FOUR_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_FOUR_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_FIVE_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_FIVE_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_SIX_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_SIX_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_SEVEN_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_SEVEN_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_EIGHT_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_EIGHT_VALUE));
    
this->optionItem.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_NINE_ITEM));
    
this->optionValue.add(this->request.getParameter(BasicOptionItemData::OPTION_ONE_NINE_VALUE));
    
this->timeEntered= this->request.getParameter(EntryData::getInstance().TIMECREATED);
    
this->lastModified= this->request.getParameter(EntryData::getInstance().LASTMODIFIED);
    
}


    private: HashMap<any, any> getHashMap(){

    HashMap<any, any> values = HashMap<any, any>();;
    
values.put(BasicItemData::ID, id);
    
values.put(BasicOptionItemData::OPTION_ONE_ONE_ITEM, this->optionItem.get(0));
    
values.put(BasicOptionItemData::OPTION_ONE_ONE_VALUE, this->optionValue.get(0));
    
values.put(BasicOptionItemData::OPTION_ONE_TWO_ITEM, this->optionItem.get(1));
    
values.put(BasicOptionItemData::OPTION_ONE_TWO_VALUE, this->optionValue.get(1));
    
values.put(BasicOptionItemData::OPTION_ONE_THREE_ITEM, this->optionItem.get(2));
    
values.put(BasicOptionItemData::OPTION_ONE_THREE_VALUE, this->optionValue.get(2));
    
values.put(BasicOptionItemData::OPTION_ONE_FOUR_ITEM, this->optionItem.get(3));
    
values.put(BasicOptionItemData::OPTION_ONE_FOUR_VALUE, this->optionValue.get(3));
    
values.put(BasicOptionItemData::OPTION_ONE_FIVE_ITEM, this->optionItem.get(4));
    
values.put(BasicOptionItemData::OPTION_ONE_FIVE_VALUE, this->optionValue.get(4));
    
values.put(BasicOptionItemData::OPTION_ONE_SIX_ITEM, this->optionItem.get(5));
    
values.put(BasicOptionItemData::OPTION_ONE_SIX_VALUE, this->optionValue.get(5));
    
values.put(BasicOptionItemData::OPTION_ONE_SEVEN_ITEM, this->optionItem.get(6));
    
values.put(BasicOptionItemData::OPTION_ONE_SEVEN_VALUE, this->optionValue.get(6));
    
values.put(BasicOptionItemData::OPTION_ONE_EIGHT_ITEM, this->optionItem.get(7));
    
values.put(BasicOptionItemData::OPTION_ONE_EIGHT_VALUE, this->optionValue.get(7));
    
values.put(BasicOptionItemData::OPTION_ONE_NINE_ITEM, this->optionItem.get(8));
    
values.put(BasicOptionItemData::OPTION_ONE_NINE_VALUE, this->optionValue.get(8));
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
values.put(EntryData::getInstance().LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public: std::string insert(){

        try {
            
    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    

    Vector values = Vector();;
    
values.add(this->id);
    

    int32_t size = this->optionValue.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
values.add(this->optionValue.get(index));
    
values.add(this->optionItem.get(index));
    
}

values.add(time);
    
values.add(time);
    
BasicOptionItemsEntityFactory::getInstance().getBasicOptionItemsEntityInstance().insert(values);
    

    std::string success = "Successfully inserted " +this->id +" into items table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to insert " +this->id +" into items table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "inserts()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string delete_(){

        try {
            BasicOptionItemsEntityFactory::getInstance().getBasicOptionItemsEntityInstance().delete(this->id);
    

    std::string success = "Successfully deleted";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to delete";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "delete()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string update(){

        try {
            
    std::string success = "Update Pricing Successful";;
    

    HashMap<any, any> values = this->getHashMap();;
    
BasicOptionItemsEntityFactory::getInstance().getBasicOptionItemsEntityInstance().update(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(StringMaker().append(this->id).append(CommonSeps::getInstance().SPACE).append(success).toString(), this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to update: " +this->id;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

