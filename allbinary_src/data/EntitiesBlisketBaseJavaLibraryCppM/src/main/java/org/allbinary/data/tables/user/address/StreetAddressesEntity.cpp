
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

class StreetAddressesEntity: public AbSqlBean: public StreetAddressesEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userName: string;

public constructor (){
            super(new UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public constructor (string userName){
            super(new UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.userName= userName;
    
}


    public remove(Integer index){

        try {
            
    whereHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
whereHashMap!.put(UserData.USERNAME, this.userName);
    
whereHashMap!.put(StreetAddressData.ID, index.toString() as string);
    
super.deleteWhere(whereHashMap);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, "remove");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "remove", e);
    

                                    }
                                
}

}


    public add(StreetAddress address){
this.add(address, TableDataFactory.getInstance()!.INTEGER_MAX_VALUE_STRING);
    
}


    add(StreetAddress address, string index){

        try {
            
    values: Vector = new Vector();;
    
values.add(index);
    
values.add(this.userName);
    
values.add(StringUtil.getInstance()!.EMPTY_STRING);
    
values.add(address.getName());
    
values.add(address.getStreet());
    
values.add(address.getCity());
    
values.add(address.getState());
    
values.add(address.getCode());
    
values.add(address.getCountry());
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
super.insert(values);
    
this.setDefault(getLastId());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, "add");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "add", e);
    

                                    }
                                
}

}


    public update(StreetAddress address){

        try {
            
    addressHashMap: HashMap<any, any> = address.toHashMap()!;;
    

    whereKeyValuePairs: HashMap<any, any> = new HashMap<any, any>();;
    
whereKeyValuePairs!.put(StreetAddressData.ID, address.getId());
    
whereKeyValuePairs!.put(UserData.USERNAME, this.userName);
    
super.updateWhere(whereKeyValuePairs, addressHashMap);
    
this.setDefault(address.getId());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, "update");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "add", e);
    

                                    }
                                
}

}


    public string getLastId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getLargestIntegerInColumnWhere(StreetAddressData.ID, UserData.USERNAME, userName);;
    
}


    public Vector get(){

        try {
            
    streetAddressVector: Vector = new Vector();;
    

    keyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    
keyAndValue!.put(UserData.USERNAME, this.userName);
    

    addressList: Vector = super.getRows(keyAndValue)!;;
    

    size: int32_t = addressList!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    addressHashMap: HashMap<any, any> = addressList!.get(index) as HashMap<any, any>;;
    

    streetAddress: StreetAddress = new StreetAddress(addressHashMap);;
    

                        if(streetAddress != 
                                    null
                                )
                        
                                    {
                                    streetAddressVector!.add(streetAddress);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streetAddressVector;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public StreetAddress get(Integer index){

        try {
            
    keyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    
keyAndValue!.put(UserData.USERNAME, this.userName);
    
keyAndValue!.put(StreetAddressData.ID, index.toString());
    

    addressHashMap: HashMap<any, any> = super.getRow(keyAndValue)!;;
    

                        if(addressHashMap != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StreetAddress(addressHashMap);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public StreetAddress getDefault(){

        try {
            
    addressHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    updateKeyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    
updateKeyAndValue!.put(StreetAddressData.DEFAULT, StreetAddressData.DEFAULT);
    
updateKeyAndValue!.put(UserData.USERNAME, this.userName);
    
addressHashMap= super.getRow(updateKeyAndValue);
    

                        if(addressHashMap != 
                                    null
                                )
                        
                                    {
                                    
    streetAddress: StreetAddress = new StreetAddress(addressHashMap);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return streetAddress;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF("No Default Address Found", this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "getDefault", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public setDefault(string value){

        try {
            
    updateKeyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    

    whereKeyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    
whereKeyAndValue!.put(UserData.USERNAME, this.userName);
    

    streetAddress: StreetAddress = this.getDefault()!;;
    

                        if(streetAddress != 
                                    null
                                )
                        
                                    {
                                    updateKeyAndValue!.put(StreetAddressData.DEFAULT, StringUtil.getInstance()!.EMPTY_STRING);
    
whereKeyAndValue!.put(StreetAddressData.ID, streetAddress!.getId());
    
super.updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                                    }
                                
whereKeyAndValue!.put(StreetAddressData.ID, value);
    
updateKeyAndValue!.put(StreetAddressData.DEFAULT, StreetAddressData.DEFAULT);
    
super.updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, "setDefault");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "setShippingAddress", e);
    

                                    }
                                
}

}


    string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public string createTableStatement(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.CREATE_TABLE)!.append(this.getTableName())!.append(this.sqlStrings!.START)!.append(StreetAddressData.ID)!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL)!.append(UserData.USERNAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(StreetAddressData.DEFAULT)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(StreetAddressData.NAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(StreetAddressData.STREET)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(StreetAddressData.CITY)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(StreetAddressData.STATE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(StreetAddressData.CODE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(StreetAddressData.COUNTRY)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(EntryData.getInstance()!.TIMECREATED)!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL)!.append(this.sqlStrings!.PRIMARY_KEY)!.append(StreetAddressData.ID)!.append(this.sqlStrings!.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this.createTableStatement());;
    
}


    public string drop(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

