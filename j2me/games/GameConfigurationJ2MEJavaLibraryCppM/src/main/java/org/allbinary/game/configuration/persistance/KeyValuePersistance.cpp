
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
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPersitance.h"
#include "NullRecordStore.h"
#include "NullRecordFilter.h"
#include "NullRecordComparator.h"

class KeyValuePersistance: public BasicPersitance {

    private: const TsUtil tsUtil = TsUtil::getInstance();

protected: KeyValuePersistance(std::string recordId) : BasicPersitance(recordId){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void loadAll(AbeClientInformationInterface abeClientInformation){
this->loadAllSize(abeClientInformation, 1);
    
}


                //@Throws(Exception.constructor)
            
    public: void loadAllSize(AbeClientInformationInterface abeClientInformation, int32_t size){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    RecordEnumeration recordEnum = recordStore.enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    ABHashtable<std::string, std::string> hashtable;;
    

    std::string name;;
    

    std::string value;;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    

    std::vector<int8_t> recordAsBytes;;
    

    ByteArrayInputStream byteArrayInputStream;;
    

    DataInputStream inputStream;;
    

        while(recordEnum.hasNextElement())
        {

    int32_t id = recordEnum.nextRecordId();;
    
stringBuffer.delete(0, stringBuffer.length());
    
this->logUtil.putF(stringBuffer.append(this->persistanceStrings.LOADING_ID).appendint(id).toString(), this, this->persistanceStrings.LOAD_ALL);
    
recordAsBytes= this->tsUtil.getRecord(recordStore, id);
    

                        if(recordAsBytes != 
                                    nullptr
                                )
                        
                                    {
                                    byteArrayInputStream= ByteArrayInputStream(recordAsBytes);
    
inputStream= DataInputStream(byteArrayInputStream);
    
hashtable= ABHashtable<std::string, std::string>();
    




                        for (
    int32_t index = 0;index < size; index++)
        {
name= inputStream.readUTF();
    
inputStream.readUTF();
    
value= inputStream.readUTF();
    
hashtable.put(name, value);
    
}

this->valueList.add(hashtable);
    
this->idList.add(smallIntegerSingletonFactory.getAt(id));
    

                                    }
                                
}


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
                                    PreLogUtil::put(this->persistanceStrings.CLOSING_RECORDSTORE, this, this->persistanceStrings.LOAD_ALL);
    
recordStore.closeRecordStore();
    

                                    }
                                

         }
        
}


                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface abeClientInformation, ABHashtable<Object*, Object*> hashtable){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil.putF(StringMaker().append(this->persistanceStrings.SAVING).append(StringUtil::getInstance().toString(hashtable)).toString(), this, this->commonStrings.SAVE);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    ByteArrayOutputStream byteArrayOutputStream = ByteArrayOutputStream();;
    

    DataOutputStream outputStream = DataOutputStream(byteArrayOutputStream);;
    

    std::string value;;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance().getKeysAsArray(hashtable);;
    

    Object* anyType;;
    

    int32_t size = objectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
outputStream.writeUTF(objectArray[index]);
    
outputStream.writeUTF(commonSeps.EQUALS);
    
anyType= objectArray[index];
    
value= hashtable.get(anyType);
    
outputStream.writeUTF(value);
    
}


    TsUtil tsUtil = TsUtil::getInstance();;
    

    std::vector<int8_t> savedGameBytes = tsUtil.getByteArray(byteArrayOutputStream.toString());;
    
recordStore.addRecord(savedGameBytes, 0, savedGameBytes.size());
    

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
                                    PreLogUtil::put(this->persistanceStrings.CLOSING_RECORDSTORE, this, this->commonStrings.SAVE);
    
recordStore.closeRecordStore();
    

                                    }
                                

         }
        
}


    public: ABHashtable<Object*, Object*> get(int32_t index){

    ABHashtable<Object*, Object*> hashtable = this->valueList.objectArray[index];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

