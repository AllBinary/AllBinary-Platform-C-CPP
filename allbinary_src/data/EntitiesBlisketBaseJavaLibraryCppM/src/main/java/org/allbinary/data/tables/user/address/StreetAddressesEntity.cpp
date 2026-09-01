
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tables/TableDataFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StreetAddressesEntityInterface.h"

class StreetAddressesEntity: public AbSqlBean, public StreetAddressesEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string userName;

public: StreetAddressesEntity(){
            super(UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: StreetAddressesEntity(std::string userName){
            super(UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->userName= userName;
    
}


    public: void remove(Integer index){

        try {
            
    HashMap<any, any> whereHashMap = HashMap<any, any>();;
    
whereHashMap.put(UserData::USERNAME, this->userName);
    
whereHashMap.put(StreetAddressData::ID, std::to_string(index) as string);
    
super.deleteWhere(whereHashMap);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "remove");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "remove", e);
    

                                    }
                                
}

}


    public: void add(StreetAddress address){
this->add(address, TableDataFactory::getInstance().INTEGER_MAX_VALUE_STRING);
    
}


    private: void add(StreetAddress address, std::string index){

        try {
            
    Vector values = Vector();;
    
values.add(index);
    
values.add(this->userName);
    
values.add(StringUtil::getInstance().EMPTY_STRING);
    
values.add(address.getName());
    
values.add(address.getStreet());
    
values.add(address.getCity());
    
values.add(address.getState());
    
values.add(address.getCode());
    
values.add(address.getCountry());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
super.insert(values);
    
this->setDefault(getLastId());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "add");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "add", e);
    

                                    }
                                
}

}


    public: void update(StreetAddress address){

        try {
            
    HashMap<any, any> addressHashMap = address.toHashMap();;
    

    HashMap<any, any> whereKeyValuePairs = HashMap<any, any>();;
    
whereKeyValuePairs.put(StreetAddressData::ID, address.getId());
    
whereKeyValuePairs.put(UserData::USERNAME, this->userName);
    
super.updateWhere(whereKeyValuePairs, addressHashMap);
    
this->setDefault(address.getId());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "update");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "add", e);
    

                                    }
                                
}

}


    public: std::string getLastId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getLargestIntegerInColumnWhere(StreetAddressData::ID, UserData::USERNAME, userName);;
    
}


    public: Vector get(){

        try {
            
    Vector streetAddressVector = Vector();;
    

    HashMap<any, any> keyAndValue = HashMap<any, any>();;
    
keyAndValue.put(UserData::USERNAME, this->userName);
    

    Vector addressList = super.getRows(keyAndValue);;
    

    int32_t size = addressList.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<any, any> addressHashMap = addressList.get(index) as HashMap<any, any>;;
    

    StreetAddress streetAddress = StreetAddress(addressHashMap);;
    

                        if(streetAddress != 
                                    nullptr
                                )
                        
                                    {
                                    streetAddressVector.add(streetAddress);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streetAddressVector;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, this->commonStrings.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: StreetAddress get(Integer index){

        try {
            
    HashMap<any, any> keyAndValue = HashMap<any, any>();;
    
keyAndValue.put(UserData::USERNAME, this->userName);
    
keyAndValue.put(StreetAddressData::ID, std::to_string(index));
    

    HashMap<any, any> addressHashMap = super.getRow(keyAndValue);;
    

                        if(addressHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StreetAddress(addressHashMap);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, this->commonStrings.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: StreetAddress getDefault(){

        try {
            
    HashMap<any, any> addressHashMap = HashMap<any, any>();;
    

    HashMap<any, any> updateKeyAndValue = HashMap<any, any>();;
    
updateKeyAndValue.put(StreetAddressData::DEFAULT, StreetAddressData::DEFAULT);
    
updateKeyAndValue.put(UserData::USERNAME, this->userName);
    
addressHashMap= super.getRow(updateKeyAndValue);
    

                        if(addressHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    StreetAddress streetAddress = StreetAddress(addressHashMap);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streetAddress;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF("No Default Address Found", this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "getDefault", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void setDefault(std::string value){

        try {
            
    HashMap<any, any> updateKeyAndValue = HashMap<any, any>();;
    

    HashMap<any, any> whereKeyAndValue = HashMap<any, any>();;
    
whereKeyAndValue.put(UserData::USERNAME, this->userName);
    

    StreetAddress streetAddress = this->getDefault();;
    

                        if(streetAddress != 
                                    nullptr
                                )
                        
                                    {
                                    updateKeyAndValue.put(StreetAddressData::DEFAULT, StringUtil::getInstance().EMPTY_STRING);
    
whereKeyAndValue.put(StreetAddressData::ID, streetAddress.getId());
    
super.updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                                    }
                                
whereKeyAndValue.put(StreetAddressData::ID, value);
    
updateKeyAndValue.put(StreetAddressData::DEFAULT, StreetAddressData::DEFAULT);
    
super.updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, "setDefault");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, "setShippingAddress", e);
    

                                    }
                                
}

}


    protected: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: std::string createTableStatement(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE).append(this->getTableName()).append(this->sqlStrings.START).append(StreetAddressData::ID).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL).append(UserData::USERNAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(StreetAddressData::DEFAULT).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(StreetAddressData::NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(StreetAddressData::STREET).append(this->sqlTypeStrings.MAX_CHAR_COLUMN).append(StreetAddressData::CITY).append(this->sqlTypeStrings.MAX_CHAR_COLUMN).append(StreetAddressData::STATE).append(this->sqlTypeStrings.MAX_CHAR_COLUMN).append(StreetAddressData::CODE).append(this->sqlTypeStrings.MAX_CHAR_COLUMN).append(StreetAddressData::COUNTRY).append(this->sqlTypeStrings.MAX_CHAR_COLUMN).append(EntryData::getInstance().TIMECREATED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(StreetAddressData::ID).append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


    public: std::string drop(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

