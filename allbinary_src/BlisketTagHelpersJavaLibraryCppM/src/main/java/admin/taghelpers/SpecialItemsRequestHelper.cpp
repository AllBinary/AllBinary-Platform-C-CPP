
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

      
#include <org/allbinary/business/user/commerce/inventory/item/special/SpecialItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/special/SpecialItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class SpecialItemsRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string enabled;

    private: std::string number;

    private: std::string startTime;

    private: std::string endTime;

    private: std::string price;

    private: std::string timeEntered;

    private: std::string lastModified;

public: SpecialItemsRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->request= pageContext.getRequest() as HttpServletRequest;
    
this->getFormData();
    
}


    public: void getFormData(){
this->id= this->request.getParameter(BasicItemData::ID);
    
this->number= this->request.getParameter(BasicItemData::NUMBER);
    
this->enabled= this->request.getParameter(EntryData::getInstance().ENABLE);
    
this->startTime= this->request.getParameter(SpecialItemData::START_TIME);
    
this->endTime= this->request.getParameter(SpecialItemData::END_TIME);
    
this->price= this->request.getParameter(BasicItemData::PRICE);
    
this->timeEntered= this->request.getParameter(EntryData::getInstance().TIMECREATED);
    
this->lastModified= this->request.getParameter(EntryData::getInstance().LASTMODIFIED);
    
}


    private: HashMap<any, any> getHashMap(){

    HashMap<any, any> values = HashMap<any, any>();;
    
values.put(BasicItemData::ID, this->id);
    
values.put(BasicItemData::NUMBER, this->number);
    
values.put(EntryData::getInstance().ENABLE, this->enabled);
    
values.put(SpecialItemData::START_TIME, this->startTime);
    
values.put(SpecialItemData::END_TIME, this->endTime);
    
values.put(BasicItemData::PRICE, this->price);
    

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
    
values.add(this->number);
    
values.add(this->enabled);
    
values.add(this->startTime);
    
values.add(this->endTime);
    
values.add(this->price);
    
values.add(time);
    
values.add(time);
    
SpecialItemsEntityFactory::getInstance().getSpecialItemsEntityInstance().insert(values);
    

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
            SpecialItemsEntityFactory::getInstance().getSpecialItemsEntityInstance().delete(this->id);
    

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
            
    std::string success = "Update Successful";;
    

    HashMap<any, any> values = this->getHashMap();;
    
SpecialItemsEntityFactory::getInstance().getSpecialItemsEntityInstance().update(values);
    

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

            

