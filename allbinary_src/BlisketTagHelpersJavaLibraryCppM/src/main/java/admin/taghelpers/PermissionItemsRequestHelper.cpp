
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/permission/PermissionItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class PermissionItemsRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string enabled;

    private: std::string number;

    private: std::string who;

    private: std::string what;

    private: std::string type;

    private: std::string remoteAddr;

    private: std::string startTime;

    private: std::string endTime;

    private: std::string price;

    private: std::string timeEntered;

    private: std::string lastModified;

public: PermissionItemsRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->request= pageContext.getRequest() as HttpServletRequest;
    
this->getFormData();
    
}


    public: void getFormData(){
this->id= this->request.getParameter(basicItemData.ID);
    
this->number= this->request.getParameter(basicItemData.NUMBER);
    
this->enabled= this->request.getParameter(EntryData::getInstance().ENABLE);
    
this->who= this->request.getParameter(PermissionItemData::WHO);
    
this->what= this->request.getParameter(PermissionItemData::WHAT);
    
this->type= this->request.getParameter(PermissionItemData::TYPE);
    
this->remoteAddr= this->request.getParameter(PermissionItemData::REMOTE_ADDR);
    
this->startTime= this->request.getParameter(PermissionItemData::START_TIME);
    
this->endTime= this->request.getParameter(PermissionItemData::END_TIME);
    
this->price= this->request.getParameter(basicItemData.PRICE);
    
this->timeEntered= this->request.getParameter(EntryData::getInstance().TIMECREATED);
    
this->lastModified= this->request.getParameter(EntryData::getInstance().LASTMODIFIED);
    
}


    private: HashMap<any, any> getHashMap(){

    HashMap<any, any> values = StdUtil::getInstance().createHashMap();;
    
values.put(basicItemData.ID, this->id);
    
values.put(basicItemData.NUMBER, this->number);
    
values.put(EntryData::getInstance().ENABLE, this->enabled);
    
values.put(PermissionItemData::WHO, this->who);
    
values.put(PermissionItemData::WHAT, this->what);
    
values.put(PermissionItemData::TYPE, this->type);
    
values.put(PermissionItemData::REMOTE_ADDR, this->remoteAddr);
    
values.put(PermissionItemData::START_TIME, this->startTime);
    
values.put(PermissionItemData::END_TIME, this->endTime);
    
values.put(basicItemData.PRICE, this->price);
    

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
    

    BasicArrayList values = BasicArrayListD();;
    
values.add(this->id);
    
values.add(this->number);
    
values.add(this->enabled);
    
values.add(this->who);
    
values.add(this->what);
    
values.add(this->type);
    
values.add(this->remoteAddr);
    
values.add(this->startTime);
    
values.add(this->endTime);
    
values.add(this->price);
    
values.add(time);
    
values.add(time);
    
PermissionItemsEntityFactory::getInstance().getPermissionItemsEntityInstance().insert(values);
    

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
            PermissionItemsEntityFactory::getInstance().getPermissionItemsEntityInstance().delete(this->id);
    

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
    
PermissionItemsEntityFactory::getInstance().getPermissionItemsEntityInstance().update(values);
    

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

            

