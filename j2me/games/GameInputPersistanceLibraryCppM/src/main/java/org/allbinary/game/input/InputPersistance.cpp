
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
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/configuration/persistance/BasicPersitance.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "GameKeyMappingFactory.h"
#include "InputFactory.h"
//GameInputPersistanceLibrary
class InputPersistance: public BasicPersitance {

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: const HashtableUtil hashtableUtil = HashtableUtil::getInstance();

public: InputPersistance(std::string name){
            super(name);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void loadAll(AbeClientInformationInterface abeClientInformation){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    RecordEnumeration recordEnum = recordStore.enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    int64_t gameActionInputId= 0;;
    

    int64_t inputId= 0;;
    

    Input gameActionInput;;
    

    Input input;;
    

    Hashtable<any, any> hashtable;;
    

    GameKeyMappingFactory gameKeyFactory = GameKeyMappingFactory::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    

    InputFactory inputFactory = InputFactory::getInstance();;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    StdUtil stdUtil = StdUtil::getInstance();;
    

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
    
hashtable= stdUtil.createHashtable();
    

    int32_t value= 0;;
    

        while(inputStream.available() > 0)
        {

    std::string gameActionInputIdAsString = inputStream.readUTF();;
    
value= Integer::parseInt(gameActionInputIdAsString);
    
gameActionInputId= value;
    
inputStream.readUTF();
    
value= Integer::parseInt(inputStream.readUTF());
    
inputId= value;
    
gameActionInput= gameKeyFactory.getGameKey(static_cast<int32_t>(gameActionInputId));
    
input= inputFactory.getInstanceById(static_cast<int32_t>(inputId));
    

                        if(input == inputFactory.NO_INPUT || gameActionInput == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    

                        if(input == inputFactory.NO_INPUT)
                        
                                    {
                                    stringBuffer.append(this->persistanceStrings.ERROR_LOADING_ID);
    
stringBuffer.appendlong(inputId);
    
stringBuffer.append(this->persistanceStrings.GAME_ACTION_INPUT);
    
stringBuffer.appendlong(gameActionInputId);
    
PreLogUtil::put(stringBuffer.toString(), this, this->persistanceStrings.LOAD_ALL);
    

                                    }
                                

                        if(gameActionInput == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(this->persistanceStrings.ERROR_LOADING);
    
stringBuffer.appendlong(gameActionInputId);
    
stringBuffer.append(this->persistanceStrings.ID);
    
stringBuffer.appendlong(inputId);
    
PreLogUtil::put(stringBuffer.toString(), this, this->persistanceStrings.LOAD_ALL);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
hashtable.put(input, gameActionInput);
    
}

this->valueList.add(hashtable);
    
this->idList.add(smallIntegerSingletonFactory.getAt(id));
    

                                    }
                                
                        else {
                            
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
            
    public: void save(AbeClientInformationInterface abeClientInformation, Hashtable<any, any> hashtable){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            
    StringMaker stringBuffer = StringMaker();;
    
PreLogUtil::put(stringBuffer.append(this->persistanceStrings.SAVING).append(StringUtil::getInstance().toString(hashtable)).toString(), this, this->commonStrings.SAVE);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    ByteArrayOutputStream byteArrayOutputStream = ByteArrayOutputStream();;
    

    DataOutputStream outputStream = DataOutputStream(byteArrayOutputStream);;
    

    Input gameActionInput;;
    

    BasicArrayList list;;
    

    Input input;;
    

    std::vector<int8_t> savedGameBytes;;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    std::vector<Object*> inputObjectArray = this->hashtableUtil.getKeysAsArray(hashtable);;
    

    int32_t size = inputObjectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameActionInput= inputObjectArray[index]! as Input;
    
list= hashtable.get(inputObjectArray[index]!) as BasicArrayList;
    




                        for (
    int32_t index2 = 0;index2 < list.size(); index2++)
        {

    std::string gameActionInputIdAsString = smallIntegerSingletonFactory.getAt(gameActionInput.getId()).toString();;
    
outputStream.writeUTF(gameActionInputIdAsString);
    
outputStream.writeUTF(commonSeps.EQUALS);
    
input= list.objectArray[index2]! as Input;
    

    std::string inputIdAsString = smallIntegerSingletonFactory.getAt(input.getId()).toString();;
    
outputStream.writeUTF(inputIdAsString);
    
}

}

savedGameBytes= byteArrayOutputStream.toByteArray();
    
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


};

            

