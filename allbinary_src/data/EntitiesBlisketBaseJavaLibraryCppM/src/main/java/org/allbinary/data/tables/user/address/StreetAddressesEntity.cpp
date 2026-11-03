
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/address/StreetAddressesEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tables/TableDataFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h"


StreetAddressesEntity::StreetAddressesEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


StreetAddressesEntity::StreetAddressesEntity(std::string userName) : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->userName= userName;
    
}


    auto StreetAddressesEntity::remove(int32_t index) -> void{

        try {
            
    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    
whereHashMap->put(UserData::USERNAME, this->userName);
    
whereHashMap->put(StreetAddressData::ID, JavaBoxes::unbox<std::string>(JavaString::valueOf(index)));
    
AbSqlBean::deleteWhere(whereHashMap);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "remove");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "remove", &e);
    

                                    }
                                
}

}


    auto StreetAddressesEntity::add(StreetAddress* address) -> void{
this->add(address, TableDataFactory::getInstance()->INTEGER_MAX_VALUE_STRING);
    
}


    auto StreetAddressesEntity::add(StreetAddress* address, std::string index) -> void{

        try {
            
    BasicArrayList* values = new BasicArrayListD();;
    
values->add(index);
    
values->add(this->userName);
    
values->add(StringUtil::getInstance()->EMPTY_STRING);
    
values->add(address->getName());
    
values->add(address->getStreet());
    
values->add(address->getCity());
    
values->add(address->getState());
    
values->add(address->getCode());
    
values->add(address->getCountry());
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->add(time);
    
AbSqlBean::insert(values);
    
this->setDefault(getLastId());
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "add");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "add", &e);
    

                                    }
                                
}

}


    auto StreetAddressesEntity::update(StreetAddress* address) -> void{

        try {
            
    HashMap<Object*, Object*>* addressHashMap = address->toHashMap();;
    

    HashMap<Object*, Object*>* whereKeyValuePairs = StdUtil::getInstance()->createHashMap();;
    
whereKeyValuePairs->put(StreetAddressData::ID, address->getId());
    
whereKeyValuePairs->put(UserData::USERNAME, this->userName);
    
AbSqlBean::updateWhere(whereKeyValuePairs, addressHashMap);
    
this->setDefault(address->getId());
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "update");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "add", &e);
    

                                    }
                                
}

}


    auto StreetAddressesEntity::getLastId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::getLargestIntegerInColumnWhere(StreetAddressData::ID, UserData::USERNAME, userName);;
    
}


    auto StreetAddressesEntity::get() -> BasicArrayList*{

        try {
            
    BasicArrayList* streetAddressVector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* keyAndValue = StdUtil::getInstance()->createHashMap();;
    
keyAndValue->put(UserData::USERNAME, this->userName);
    

    BasicArrayList* addressList = AbSqlBean::getRows(keyAndValue);;
    

    int32_t size = addressList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* addressHashMap = dynamic_cast<HashMap*>(addressList->get(index));;
    

    StreetAddress* streetAddress = new StreetAddress(addressHashMap);;
    

                        if(streetAddress != 
                                    nullptr
                                )
                        
                                    {
                                    streetAddressVector->add(streetAddress);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return streetAddressVector;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StreetAddressesEntity::get(int32_t index) -> StreetAddress*{

        try {
            
    HashMap<Object*, Object*>* keyAndValue = StdUtil::getInstance()->createHashMap();;
    
keyAndValue->put(UserData::USERNAME, this->userName);
    
keyAndValue->put(StreetAddressData::ID, JavaString::valueOf(index));
    

    HashMap<Object*, Object*>* addressHashMap = AbSqlBean::getRow(keyAndValue);;
    

                        if(addressHashMap != 
                                    nullptr
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
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StreetAddressesEntity::getDefault() -> StreetAddress*{

        try {
            
    HashMap<Object*, Object*>* addressHashMap = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* updateKeyAndValue = StdUtil::getInstance()->createHashMap();;
    
updateKeyAndValue->put(StreetAddressData::DEFAULT, StreetAddressData::DEFAULT);
    
updateKeyAndValue->put(UserData::USERNAME, this->userName);
    
addressHashMap= AbSqlBean::getRow(updateKeyAndValue);
    

                        if(addressHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    StreetAddress* streetAddress = new StreetAddress(addressHashMap);;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return streetAddress;
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF("No Default Address Found", this, "getDefault");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "getDefault", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StreetAddressesEntity::setDefault(std::string value) -> void{

        try {
            
    HashMap<Object*, Object*>* updateKeyAndValue = StdUtil::getInstance()->createHashMap();;
    

    HashMap<Object*, Object*>* whereKeyAndValue = StdUtil::getInstance()->createHashMap();;
    
whereKeyAndValue->put(UserData::USERNAME, this->userName);
    

    StreetAddress* streetAddress = this->getDefault();;
    

                        if(streetAddress != 
                                    nullptr
                                )
                        
                                    {
                                    updateKeyAndValue->put(StreetAddressData::DEFAULT, StringUtil::getInstance()->EMPTY_STRING);
    
whereKeyAndValue->put(StreetAddressData::ID, streetAddress->getId());
    
AbSqlBean::updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                                    }
                                
whereKeyAndValue->put(StreetAddressData::ID, value);
    
updateKeyAndValue->put(StreetAddressData::DEFAULT, StreetAddressData::DEFAULT);
    
AbSqlBean::updateWhere(whereKeyAndValue, updateKeyAndValue);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "setDefault");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "setShippingAddress", &e);
    

                                    }
                                
}

}


    auto StreetAddressesEntity::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userName;
    
}


    auto StreetAddressesEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(this->getTableName())->append(this->sqlStrings->START)->append(StreetAddressData::ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL)->append(UserData::USERNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(StreetAddressData::DEFAULT)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(StreetAddressData::NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(StreetAddressData::STREET)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(StreetAddressData::CITY)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(StreetAddressData::STATE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(StreetAddressData::CODE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(StreetAddressData::COUNTRY)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(StreetAddressData::ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto StreetAddressesEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto StreetAddressesEntity::drop() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_STREETADDRESSESENTITY_CPP
