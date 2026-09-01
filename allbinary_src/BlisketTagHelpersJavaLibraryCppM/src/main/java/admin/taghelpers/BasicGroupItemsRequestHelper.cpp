
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

      
#include <org/allbinary/business/user/commerce/inventory/item/group/BasicGroupItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/groups/BasicGroupItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class BasicGroupItemsRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string itemOne;

    private: std::string itemTwo;

    private: std::string itemThree;

    private: std::string itemFour;

    private: std::string itemFive;

    private: std::string itemSix;

    private: std::string itemSeven;

    private: std::string itemEight;

    private: std::string itemNine;

    private: std::string itemTen;

    private: std::string timeEntered;

    private: std::string lastModified;

public: BasicGroupItemsRequestHelper(HashMap<any, any> hashMap, PageContext pageContext){
this->request= pageContext.getRequest() as HttpServletRequest;
    
this->getFormData();
    
}


    public: void getFormData(){
this->id= this->request.getParameter(BasicItemData::ID);
    
this->itemOne= this->request.getParameter(BasicGroupItemData::ITEM_ONE);
    
this->itemTwo= this->request.getParameter(BasicGroupItemData::ITEM_TWO);
    
this->itemThree= this->request.getParameter(BasicGroupItemData::ITEM_THREE);
    
this->itemFour= this->request.getParameter(BasicGroupItemData::ITEM_FOUR);
    
this->itemFive= this->request.getParameter(BasicGroupItemData::ITEM_FIVE);
    
this->itemSix= this->request.getParameter(BasicGroupItemData::ITEM_SIX);
    
this->itemSeven= this->request.getParameter(BasicGroupItemData::ITEM_SEVEN);
    
this->itemEight= this->request.getParameter(BasicGroupItemData::ITEM_EIGHT);
    
this->itemNine= this->request.getParameter(BasicGroupItemData::ITEM_NINE);
    
this->itemTen= this->request.getParameter(BasicGroupItemData::ITEM_TEN);
    
this->timeEntered= this->request.getParameter(EntryData::getInstance().TIMECREATED);
    
this->lastModified= this->request.getParameter(EntryData::getInstance().LASTMODIFIED);
    
}


    private: HashMap<any, any> getHashMap(){

    HashMap<any, any> values = HashMap<any, any>();;
    
values.put(BasicItemData::ID, id);
    
values.put(BasicGroupItemData::ITEM_ONE, this->itemOne);
    
values.put(BasicGroupItemData::ITEM_TWO, this->itemTwo);
    
values.put(BasicGroupItemData::ITEM_THREE, this->itemThree);
    
values.put(BasicGroupItemData::ITEM_FOUR, this->itemFour);
    
values.put(BasicGroupItemData::ITEM_FIVE, this->itemFive);
    
values.put(BasicGroupItemData::ITEM_SIX, this->itemSix);
    
values.put(BasicGroupItemData::ITEM_SEVEN, this->itemSeven);
    
values.put(BasicGroupItemData::ITEM_EIGHT, this->itemEight);
    
values.put(BasicGroupItemData::ITEM_NINE, this->itemNine);
    
values.put(BasicGroupItemData::ITEM_TEN, this->itemTen);
    

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
    
values.add(this->itemOne);
    
values.add(this->itemTwo);
    
values.add(this->itemThree);
    
values.add(this->itemFour);
    
values.add(this->itemFive);
    
values.add(this->itemSix);
    
values.add(this->itemSeven);
    
values.add(this->itemEight);
    
values.add(this->itemNine);
    
values.add(this->itemTen);
    
values.add(time);
    
values.add(time);
    
BasicGroupItemsEntityFactory::getInstance().getBasicGroupItemsEntityInstance().insert(values);
    

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
            BasicGroupItemsEntityFactory::getInstance().getBasicGroupItemsEntityInstance().delete(this->id);
    

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
    
BasicGroupItemsEntityFactory::getInstance().getBasicGroupItemsEntityInstance().update(values);
    

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

            

