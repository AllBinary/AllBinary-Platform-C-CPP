
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoreNamePersistanceSingleton.h"
        

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
        

HighScoreNamePersistanceSingleton::HighScoreNamePersistanceSingleton() : logUtil(LogUtil::getInstance()), tsUtil(TsUtil::getInstance()), commonStrings(CommonStrings::getInstance()), platformRecordIdUtil(PlatformRecordIdUtil::getInstance()), name(StringUtil::getInstance()->EMPTY_STRING), nameBasicArrayList(new BasicArrayListD()) {
        }
        auto HighScoreNamePersistanceSingleton::SINGLETON_owner() -> HighScoreNamePersistanceSingleton* { static std::unique_ptr<HighScoreNamePersistanceSingleton> value(new HighScoreNamePersistanceSingleton()); return value.get(); }
HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton::SINGLETON = HighScoreNamePersistanceSingleton::SINGLETON_owner();

    auto HighScoreNamePersistanceSingleton::getInstance() -> HighScoreNamePersistanceSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScoreNamePersistanceSingleton::SINGLETON;
    
}


    auto HighScoreNamePersistanceSingleton::clear() -> void{
this->name= StringUtil::getInstance()->EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    auto HighScoreNamePersistanceSingleton::deleteAll(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo) -> void{

    int32_t size = this->nameBasicArrayList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t integer = this->nameBasicArrayList->objectArray[index];;
    
this->delete_(abeClientInformation, gameInfo, integer.intValue());
    
}

this->clear();
    
}


    auto HighScoreNamePersistanceSingleton::getRecordId(AbeClientInformationInterface* abeClientInformation) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformRecordIdUtil->getRecordId(abeClientInformation, this->RECORD_ID);;
    
}


                //@Throws(Exception.constructor)
            
    auto HighScoreNamePersistanceSingleton::delete_(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, int32_t deleteId) -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil->putF((new StringMaker())->append("Deleting: ")->appendint(deleteId)->toString(), this, this->commonStrings->delete_);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    
recordStore->deleteRecord(deleteId);
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

         finally {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings->delete_);
    
recordStore->closeRecordStore();
    

                                    }
                                

         }
        
}


    auto HighScoreNamePersistanceSingleton::getIds() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nameBasicArrayList;
    
}


    auto HighScoreNamePersistanceSingleton::load(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo) -> std::string{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            
                        if(this->name == StringUtil::getInstance()->EMPTY_STRING)
                        
                                    {
                                    
    std::string LOADING_ID = "Loading id: ";;
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    RecordEnumeration* recordEnum = recordStore->enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    std::vector<int8_t> recordAsBytes;;
    

    ByteArrayInputStream* byteArrayInputStream;;
    

    DataInputStream* inputStream;;
    

        while(recordEnum->hasNextElement())
        {

    int32_t id = recordEnum->nextRecordId();;
    
this->logUtil->putF((new StringMaker())->append(LOADING_ID)->appendint(id)->toString(), this, this->commonStrings->LOAD);
    
recordAsBytes= this->tsUtil->getRecord(recordStore, id);
    
byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    

        while(inputStream->available() > 0)
        {
this->name= inputStream->readUTF();
    
}

this->nameBasicArrayList->add(smallIntegerSingletonFactory->getAt(id));
    
}


                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->save(abeClientInformation, gameInfo, this->name);
    
this->logUtil->putF((new StringMaker())->append(this->commonStrings->EXCEPTION_LABEL)->append(ExceptionUtil::getInstance()->getStackTrace(&e))->toString(), this, this->commonStrings->LOAD);
    
}

         finally {
            
        try {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings->LOAD);
    
recordStore->closeRecordStore();
    

                                    }
                                

                //: 
} catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->LOAD, &e);
    
}


         }
        



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto HighScoreNamePersistanceSingleton::save(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string name) -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil->putF((new StringMaker())->append("Saving: ")->append(name)->toString(), this, this->commonStrings->SAVE);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    

    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    DataOutputStream* outputStream = new DataOutputStream(byteArrayOutputStream);;
    
outputStream->writeUTF(name);
    

    std::vector<int8_t> savedGameBytes = byteArrayOutputStream->toByteArray();;
    
recordStore->addRecord(savedGameBytes, 0, savedGameBytes.size());
    
this->name= name;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, &e);
    
}

         finally {
            
        try {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings->SAVE);
    
recordStore->closeRecordStore();
    

                                    }
                                

                //: 
} catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, &e);
    
}


         }
        
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_CPP
