
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/remote/RemoteHighScoresProcessorFactory.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorFactory.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresData.h"

class RemoteHighScores: public HighScores {

    private: static inline ABHashtable<Object*, Object*>* hashTable = StdUtil::getInstance()->createHashtable();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstance(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool isAscending){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteHighScores::getInstancePreload(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, true);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstancePreload(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool isAscending, bool preload){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    HighScores* highScores = dynamic_cast<HighScores*>(RemoteHighScores::hashTable->get(gameInfo));;
    

                        if(highScores == 
                                    nullptr
                                )
                        
                                    {
                                    highScores= new RemoteHighScores(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, preload);
    
RemoteHighScores::hashTable->put(gameInfo, highScores);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, RemoteErrorHighScoresSingletonFactory::getInstance(), commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteErrorHighScoresSingletonFactory::getInstance();;
    
}

}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation;

    private: SoftwareInformation* softwareInformation;

    private: bool ascending;

    public: const std::string ASCENDING = "ASCENDING";

private: RemoteHighScores(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool ascending, bool preload) : HighScores(gameInfo->toString(), heading, columnTwoHeading){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->softwareInformation= softwareInformation;
    
this->setAscending(ascending);
    

                        if(preload)
                        
                                    {
                                    RemoteHighScoresProcessorFactory::getInstance()->process(this, this->abeClientInformation, gameInfo);
    

                                    }
                                
}


    public: void addHighScore(HighScore* newHighScore){
RemoteHighScoresSubmissionProcessorFactory::getInstance()->process(this, this->abeClientInformation, newHighScore);
    
}


    public: void update(ABHashtable<Object*, Object*>* hashtable){
this->getList()->clear();
    

    BasicArrayList* vector = dynamic_cast<BasicArrayList*>(hashtable->get(RemoteHighScoresData::getInstance()->HIGH_SCORES));;
    

                        if(vector != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicArrayList* highScoreVector = dynamic_cast<BasicArrayList*>(vector->get(index));;
    

    std::string displayName = highScoreVector->get(0);;
    

    std::string score = highScoreVector->get(1);;
    

    int64_t longScore = Long.parseLong(score);;
    

    HighScore* highScore = new HighScore( -1, displayName, 
                            nullptr, longScore);;
    
this->getList()->add(highScore);
    
}


                                    }
                                
                        else {
                            
    std::string NEXT_ELEMENT = (new StringMaker())->append(CommonLabels::getInstance()->NEXT)->append("Element: ")->toString();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    Enumeration<Object*>* enumeration = hashtable->elements();;
    

    Object* nextElement;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
nextElement= this->enumerationUtil->nextElement(enumeration);
    
this->logUtil->putF(NEXT_ELEMENT +nextElement, this, commonStrings->PROCESS);
    
}


                        }
                            
}


    private: void setAscending(bool ascending){
this->ascending= ascending;
    
}


    public: bool getAscending(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ascending;
    
}


    public: SoftwareInformation* getSoftwareInformation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->softwareInformation;
    
}


};

            

