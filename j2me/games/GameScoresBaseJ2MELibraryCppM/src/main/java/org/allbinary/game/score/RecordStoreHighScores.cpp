
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_CPP
        #define ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/RecordStoreHighScores.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/EOFException.h>

      
#include <java/io/IOException.h>

      
#include <javax/microedition/rms/RecordComparator.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <javax/microedition/rms/RecordStoreNotFoundException.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/ScoreComparator.h"

ABHashtable<Object*, Object*>* RecordStoreHighScores::hashTable = StdUtil::getInstance()->createHashtable();

RecordStoreHighScores::RecordStoreHighScores(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string name, std::string heading, std::string columnTwoHeading, RecordComparator* recordComparatorInterface) : HighScores(name, heading, columnTwoHeading), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), platformRecordIdUtil(PlatformRecordIdUtil::getInstance()), tsUtil(TsUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->gameInfo= gameInfo;
    
this->recordComparatorInterface= recordComparatorInterface;
    
this->load();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto RecordStoreHighScores::getInstance(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string highScoreName, std::string heading, std::string columnTwoHeading, RecordComparator* recordComparatorInterface) -> HighScores*{

    Object* highScoresCanBeNull = JavaBoxes::toObject(RecordStoreHighScores::hashTable->get(highScoreName));;
    

                        if(highScoresCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    
    HighScores* highScores = new RecordStoreHighScores(abeClientInformation, gameInfo, highScoreName, heading, columnTwoHeading, recordComparatorInterface);;
    
RecordStoreHighScores::hashTable->put(highScores->getName(), highScores);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HighScores*>(highScoresCanBeNull);
    
}


    auto RecordStoreHighScores::getRecordId(AbeClientInformationInterface* abeClientInformation) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformRecordIdUtil->getRecordId(abeClientInformation, (new StringMaker())->append(CommonSeps::getInstance()->UNDERSCORE)->append(this->getName())->append(this->RECORD_ID)->toString());;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto RecordStoreHighScores::addHighScore(HighScore* newHighScore) -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        {
        
        auto finallyFunction_N67757 = [&]() {
            
        try {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, this->commonStrings->ADD);
    
recordStore->closeRecordStore();
    

                                    }
                                

                //: 
} catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    
}


        };
        
        struct FinallyGuard_N67757 { decltype(finallyFunction_N67757)& function; ~FinallyGuard_N67757() { function(); } } finallyGuard_N67757{finallyFunction_N67757};
        
        try {
            this->logUtil->putF((new StringMaker())->append("Adding HighScore: ")->appendlong(newHighScore->getScore())->toString(), this, this->commonStrings->ADD);
    

                        if(this->isTooManyHighScores())
                        
                                    {
                                    this->logUtil->putF("Removing Lowest Score", this, this->commonStrings->ADD);
    
this->removeLowestHighScore();
    

                                    }
                                
recordStore= RecordStore::openRecordStore(this->getRecordId(this->abeClientInformation), true);
    

    std::vector<int8_t> highScoreBytes = newHighScore->getAsBytes();;
    

    int32_t recordId = recordStore->addRecord(highScoreBytes, 0, highScoreBytes.size());;
    
this->load();
    

                //: 
} catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    
}

                //: 
 catch(IOException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    
}

        }

}


    auto RecordStoreHighScores::removeLowestHighScore() -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        {
        
        auto finallyFunction_N68839 = [&]() {
            
        try {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put("Closing RecordStore", this, "removeLowestHighScore");
    
recordStore->closeRecordStore();
    

                                    }
                                

                //: 
} catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "removeLowestHighScore", &e);
    
}


        };
        
        struct FinallyGuard_N68839 { decltype(finallyFunction_N68839)& function; ~FinallyGuard_N68839() { function(); } } finallyGuard_N68839{finallyFunction_N68839};
        
        try {
            recordStore= RecordStore::openRecordStore(this->getRecordId(this->abeClientInformation), true);
    

    RecordEnumeration* recordEnum = recordStore->enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    ScoreComparator* scoreComparator = (dynamic_cast<ScoreComparator*>(this->recordComparatorInterface));;
    

    HighScore* bestHighScore = new HighScore( -1, "none", GameInfo::NONE, scoreComparator->getBestScore());;
    

    std::vector<int8_t> recordAsBytes;;
    

    ByteArrayInputStream* byteArrayInputStream;;
    

    DataInputStream* inputStream;;
    

        while(recordEnum->hasNextElement())
        {

    int32_t id = recordEnum->nextRecordId();;
    
recordAsBytes= this->tsUtil->getRecord(recordStore, id);
    

                        if(!recordAsBytes.empty())
                        
                                    {
                                    byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    

    std::string name = inputStream->readUTF();;
    

    int64_t nextScore = inputStream->readLong();;
    

    HighScore* nextCurrentHighScore = new HighScore(id, name, GameInfo::NONE, nextScore);;
    

                        if(this->recordComparatorInterface->compare(nextCurrentHighScore->getAsBytes(), bestHighScore->getAsBytes()) == RecordComparator::FOLLOWS)
                        
                                    {
                                    bestHighScore= nextCurrentHighScore;
    

                                    }
                                

                                    }
                                
}


                        if(bestHighScore->getId() !=  -1)
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Removing Lowest HighScore: ")->appendlong(bestHighScore->getScore())->toString(), this, this->commonStrings->LOAD);
    
recordStore->deleteRecord(bestHighScore->getId());
    

                                    }
                                

                //: 
} catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "removeLowestHighScore", &e);
    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "removeLowestHighScore", &e);
    
}

        }

}


    auto RecordStoreHighScores::load() -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        {
        
        auto finallyFunction_N70402 = [&]() {
            
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


        };
        
        struct FinallyGuard_N70402 { decltype(finallyFunction_N70402)& function; ~FinallyGuard_N70402() { function(); } } finallyGuard_N70402{finallyFunction_N70402};
        
        try {
            recordStore= RecordStore::openRecordStore(this->getRecordId(this->abeClientInformation), true);
    
this->setList(new BasicArrayListD());
    

    RecordEnumeration* recordEnum = recordStore->enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    std::vector<int8_t> recordAsBytes;;
    

    ByteArrayInputStream* byteArrayInputStream;;
    

    DataInputStream* inputStream;;
    

        while(recordEnum->hasNextElement())
        {

    int32_t id = recordEnum->nextRecordId();;
    
recordAsBytes= this->tsUtil->getRecord(recordStore, id);
    

                        if(!recordAsBytes.empty())
                        
                                    {
                                    byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    

        try {
            
    std::string name = inputStream->readUTF();;
    

    int64_t score = inputStream->readLong();;
    

    HighScore* newHighScore = new HighScore(id, name, GameInfo::NONE, score);;
    

    BasicArrayList* list = this->getList();;
    

    int32_t size = list->size();;
    

    int32_t lastIndex = size;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HighScore* highScore = dynamic_cast<HighScore*>(list->objectArray[index]);;
    

                        if(this->recordComparatorInterface->compare(newHighScore->getAsBytes(), highScore->getAsBytes()) == RecordComparator::PRECEDES)
                        
                                    {
                                    lastIndex= index;
    
break;

                    

                                    }
                                
}

list->addAt(lastIndex, newHighScore);
    

                //: 
} catch(EOFException& e) 
            {
this->logUtil->put("EOF", this, this->commonStrings->LOAD, &e);
    



                            throw e;
                    
}


                                    }
                                
}


                //: 
} catch(RecordStoreNotFoundException& e) 
            {
this->logUtil->put("No High Scores", this, this->commonStrings->LOAD, &e);
    
}

                //: 
 catch(RecordStoreException& e) 
            {
this->logUtil->put(this->commonStrings->UNKNOWN, this, this->commonStrings->LOAD, &e);
    
}

                //: 
 catch(IOException& e) 
            {
this->logUtil->put(this->commonStrings->UNKNOWN, this, this->commonStrings->LOAD, &e);
    
}

                //: 
 catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->UNKNOWN, this, this->commonStrings->LOAD, &e);
    
}

        }

}


    auto RecordStoreHighScores::isTooManyHighScores() -> bool{

                        if(this->getList() != 
                                    nullptr
                                 && this->getList()->size() < this->MAXHIGHSCORES)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            this->logUtil->putF((new StringMaker())->append("HighScores RecordStore Max Reached: ")->appendint(this->MAXHIGHSCORES)->toString(), this, "isTooManyHighScores");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto RecordStoreHighScores::isBestScore(HighScore* newHighScore) -> bool{

        try {
            
                        if(!this->isTooManyHighScores())
                        
                                    {
                                    this->logUtil->putF("Slot Available for a High Score", this, "isBestScore");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
    BasicArrayList* list = this->getList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HighScore* highScore = dynamic_cast<HighScore*>(list->objectArray[index]);;
    

                        if(this->recordComparatorInterface->compare(newHighScore->getAsBytes(), highScore->getAsBytes()) == RecordComparator::FOLLOWS)
                        
                                    {
                                    this->logUtil->putF("Obtained a High Score", this, "isBestScore");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}


                        }
                            
this->logUtil->putF("Not a High Score", this, "isBestScore");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    



                            throw e;
                    
}

}


    auto RecordStoreHighScores::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(HighScores::toString());
    

    BasicArrayList* list = this->getList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HighScore* highScore = dynamic_cast<HighScore*>(list->objectArray[index]);;
    
stringBuffer->append(highScore->getScoreString());
    
stringBuffer->append(CommonSeps::getInstance()->COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_CPP
