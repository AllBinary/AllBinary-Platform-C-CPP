
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreNamePersistanceSingleton
            : public Object
         {

    private: static HighScoreNamePersistanceSingleton SINGLETON = HighScoreNamePersistanceSingleton();

    public: static HighScoreNamePersistanceSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScoreNamePersistanceSingleton::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const PlatformRecordIdUtil platformRecordIdUtil = PlatformRecordIdUtil::getInstance();

    private: const std::string RECORD_ID = "_SN";

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: BasicArrayList nameBasicArrayList = BasicArrayListD();

    public: void clear(){
this->name= StringUtil::getInstance().EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    public: void deleteAll(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo){

    int32_t size = this->nameBasicArrayList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Integer integer = this->nameBasicArrayList.objectArray[index];;
    
this->delete(abeClientInformation, gameInfo, integer.intValue());
    
}

this->clear();
    
}


    private: std::string getRecordId(AbeClientInformationInterface abeClientInformation){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformRecordIdUtil.getRecordId(abeClientInformation, this->RECORD_ID);;
    
}


                //@Throws(Exception.constructor)
            
    public: void delete_(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, int32_t deleteId){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil.putF(StringMaker().append("Deleting: ").appendint(deleteId).toString(), this, this->commonStrings.delete_);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    
recordStore.deleteRecord(deleteId);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

         finally {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings.delete_);
    
recordStore.closeRecordStore();
    

                                    }
                                

         }
        
}


    public: BasicArrayList getIds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nameBasicArrayList;
    
}


    public: std::string load(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            
                        if(this->name == StringUtil::getInstance().EMPTY_STRING)
                        
                                    {
                                    
    std::string LOADING_ID = "Loading id: ";;
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    RecordEnumeration recordEnum = recordStore.enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    std::vector<int8_t> recordAsBytes;;
    

    ByteArrayInputStream byteArrayInputStream;;
    

    DataInputStream inputStream;;
    

        while(recordEnum.hasNextElement())
        {

    int32_t id = recordEnum.nextRecordId();;
    
this->logUtil.putF(StringMaker().append(LOADING_ID).appendint(id).toString(), this, this->commonStrings.LOAD);
    
recordAsBytes= this->tsUtil.getRecord(recordStore, id);
    
byteArrayInputStream= ByteArrayInputStream(recordAsBytes);
    
inputStream= DataInputStream(byteArrayInputStream);
    

        while(inputStream.available() > 0)
        {
this->name= inputStream.readUTF();
    
}

this->nameBasicArrayList.add(smallIntegerSingletonFactory.getAt(id));
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this->save(abeClientInformation, gameInfo, this->name);
    
this->logUtil.putF(StringMaker().append(this->commonStrings.EXCEPTION_LABEL).append(ExceptionUtil::getInstance().getStackTrace(e)).toString(), this, this->commonStrings.LOAD);
    
}

         finally {
            
        try {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings.LOAD);
    
recordStore.closeRecordStore();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.LOAD, e);
    
}


         }
        



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void save(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, std::string name){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil.putF(StringMaker().append("Saving: ").append(name).toString(), this, this->commonStrings.SAVE);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    ByteArrayOutputStream byteArrayOutputStream = ByteArrayOutputStream();;
    

    DataOutputStream outputStream = DataOutputStream(byteArrayOutputStream);;
    
outputStream.writeUTF(name);
    

    std::vector<int8_t> savedGameBytes = byteArrayOutputStream.toByteArray();;
    
recordStore.addRecord(savedGameBytes, 0, savedGameBytes.size());
    
this->name= name;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.SAVE, e);
    
}

         finally {
            
        try {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings.SAVE);
    
recordStore.closeRecordStore();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.SAVE, e);
    
}


         }
        
}


};

            

