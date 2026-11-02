
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/InputPersistance.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/GameKeyMappingFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
//GameInputPersistanceLibrary

InputPersistance::InputPersistance(std::string name) : BasicPersitance(name), tsUtil(TsUtil::getInstance()), hashtableUtil(HashtableUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto InputPersistance::loadAll(AbeClientInformationInterface* abeClientInformation) -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        {
        
        auto finallyFunction_N66394 = [&]() {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put(this->persistanceStrings->CLOSING_RECORDSTORE, this, this->persistanceStrings->LOAD_ALL);
    
recordStore->closeRecordStore();
    

                                    }
                                

        };
        
        struct FinallyGuard_N66394 { decltype(finallyFunction_N66394)& function; ~FinallyGuard_N66394() { function(); } } finallyGuard_N66394{finallyFunction_N66394};
        
        try {
            recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    RecordEnumeration* recordEnum = recordStore->enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    int64_t gameActionInputId= 0;;
    

    int64_t inputId= 0;;
    

    Input* gameActionInput;;
    

    Input* input;;
    

    ABHashtable<Object*, Object*>* hashtable;;
    

    GameKeyMappingFactory* gameKeyFactory = GameKeyMappingFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    InputFactory* inputFactory = InputFactory::getInstance();;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    StdUtil* stdUtil = StdUtil::getInstance();;
    

    std::vector<int8_t> recordAsBytes;;
    

    ByteArrayInputStream* byteArrayInputStream;;
    

    DataInputStream* inputStream;;
    

        while(recordEnum->hasNextElement())
        {

    int32_t id = recordEnum->nextRecordId();;
    
stringBuffer->delete_(0, stringBuffer->length());
    
this->logUtil->putF(stringBuffer->append(this->persistanceStrings->LOADING_ID)->appendint(id)->toString(), this, this->persistanceStrings->LOAD_ALL);
    
recordAsBytes= this->tsUtil->getRecord(recordStore, id);
    

                        if(!recordAsBytes.empty())
                        
                                    {
                                    byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    
hashtable= stdUtil->createHashtable();
    

    int32_t value= 0;;
    

        while(inputStream->available() > 0)
        {

    std::string gameActionInputIdAsString = inputStream->readUTF();;
    
value= Integer.parseInt(gameActionInputIdAsString);
    
gameActionInputId= value;
    
inputStream->readUTF();
    
value= Integer.parseInt(inputStream->readUTF());
    
inputId= value;
    
gameActionInput= gameKeyFactory->getGameKey(static_cast<int32_t>(gameActionInputId));
    
input= inputFactory->getInstanceById(static_cast<int32_t>(inputId));
    

                        if(input == inputFactory->NO_INPUT || gameActionInput == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    

                        if(input == inputFactory->NO_INPUT)
                        
                                    {
                                    stringBuffer->append(this->persistanceStrings->ERROR_LOADING_ID);
    
stringBuffer->appendlong(inputId);
    
stringBuffer->append(this->persistanceStrings->GAME_ACTION_INPUT);
    
stringBuffer->appendlong(gameActionInputId);
    
PreLogUtil::put(stringBuffer->toString(), this, this->persistanceStrings->LOAD_ALL);
    

                                    }
                                

                        if(gameActionInput == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->persistanceStrings->ERROR_LOADING);
    
stringBuffer->appendlong(gameActionInputId);
    
stringBuffer->append(this->persistanceStrings->ID);
    
stringBuffer->appendlong(inputId);
    
PreLogUtil::put(stringBuffer->toString(), this, this->persistanceStrings->LOAD_ALL);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
hashtable->put(input, gameActionInput);
    
}

this->valueList->add(hashtable);
    
this->idList->add(smallIntegerSingletonFactory->getAt(id));
    

                                    }
                                
                        else {
                            
                        }
                            
}


                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto InputPersistance::save(AbeClientInformationInterface* abeClientInformation, ABHashtable<Object*, Object*>* hashtable) -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        {
        
        auto finallyFunction_N68912 = [&]() {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put(this->persistanceStrings->CLOSING_RECORDSTORE, this, this->commonStrings->SAVE);
    
recordStore->closeRecordStore();
    

                                    }
                                

        };
        
        struct FinallyGuard_N68912 { decltype(finallyFunction_N68912)& function; ~FinallyGuard_N68912() { function(); } } finallyGuard_N68912{finallyFunction_N68912};
        
        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
PreLogUtil::put(stringBuffer->append(this->persistanceStrings->SAVING)->append(StringUtil::getInstance()->toString(hashtable))->toString(), this, this->commonStrings->SAVE);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    DataOutputStream* outputStream = new DataOutputStream(byteArrayOutputStream);;
    

    Input* gameActionInput;;
    

    BasicArrayList* list;;
    

    Input* input;;
    

    std::vector<int8_t> savedGameBytes;;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    std::vector<Object*> inputObjectArray = this->hashtableUtil->getKeysAsArray(hashtable);;
    

    int32_t size = inputObjectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameActionInput= dynamic_cast<Input*>(inputObjectArray[index]);
    
list= dynamic_cast<BasicArrayList*>(hashtable->get(inputObjectArray[index]));
    




                        for (
    int32_t index2 = 0;index2 < list->size(); index2++)
        {

    std::string gameActionInputIdAsString = smallIntegerSingletonFactory->getAt(gameActionInput->getId())->toString();;
    
outputStream->writeUTF(gameActionInputIdAsString);
    
outputStream->writeUTF(commonSeps->EQUALS);
    
input= dynamic_cast<Input*>(list->objectArray[index2]);
    

    std::string inputIdAsString = smallIntegerSingletonFactory->getAt(input->getId())->toString();;
    
outputStream->writeUTF(inputIdAsString);
    
}

}

savedGameBytes= byteArrayOutputStream->toByteArray();
    
recordStore->addRecord(savedGameBytes, 0, savedGameBytes.size());
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

        }

}




        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_CPP
