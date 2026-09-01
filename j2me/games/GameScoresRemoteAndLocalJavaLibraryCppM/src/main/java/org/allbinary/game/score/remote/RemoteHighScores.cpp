
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RemoteHighScoresProcessorFactory.h"
#include "RemoteHighScoresSubmissionProcessorFactory.h"
#include "RemoteHighScoresData.h"

class RemoteHighScores: public HighScores {

    private: static const Hashtable<any, any> hashTable = Hashtable<any, any>();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores getInstance(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, std::string heading, std::string columnTwoHeading, Boolean isAscending){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteHighScores::getInstancePreload(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, true);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores getInstancePreload(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, std::string heading, std::string columnTwoHeading, Boolean isAscending, bool preload){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    HighScores highScores = RemoteHighScores::hashTable.get(gameInfo) as HighScores;;
    

                        if(highScores == 
                                    nullptr
                                )
                        
                                    {
                                    highScores= RemoteHighScores(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, preload);
    
RemoteHighScores::hashTable.put(gameInfo, highScores);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, RemoteErrorHighScoresSingletonFactory::getInstance(), commonStrings.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteErrorHighScoresSingletonFactory::getInstance();;
    
}

}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    private: AbeClientInformationInterface abeClientInformation;

    private: SoftwareInformation softwareInformation;

    private: Boolean ascending;

    public: const std::string ASCENDING = "ASCENDING";

private: RemoteHighScores(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, std::string heading, std::string columnTwoHeading, Boolean ascending, bool preload){
            super(gameInfo.toString(), heading, columnTwoHeading);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->softwareInformation= softwareInformation;
    
this->setAscending(ascending);
    

                        if(preload)
                        
                                    {
                                    RemoteHighScoresProcessorFactory::getInstance().process(this, this->abeClientInformation, gameInfo);
    

                                    }
                                
}


    public: void addHighScore(HighScore newHighScore){
RemoteHighScoresSubmissionProcessorFactory::getInstance().process(this, this->abeClientInformation, newHighScore);
    
}


    public: void update(Hashtable<any, any> hashtable){
this->getList().clear();
    

    Vector vector = hashtable.get(RemoteHighScoresData::getInstance().HIGH_SCORES) as Vector;;
    

                        if(vector != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t size = vector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Vector highScoreVector = vector.elementAt(index) as Vector;;
    

    std::string displayName = highScoreVector.elementAt(0) as string;;
    

    std::string score = highScoreVector.elementAt(1) as string;;
    

    int64_t longScore = Long::parseLong(score);;
    

    HighScore highScore = HighScore( -1, displayName, 
                            nullptr, longScore);;
    
this->getList().add(highScore);
    
}


                                    }
                                
                        else {
                            
    std::string NEXT_ELEMENT = "NextElement: ";;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    Enumeration<any> enumeration = hashtable.elements();;
    

    Object* nextElement;;
    

        while(this->enumerationUtil.hasMoreElements(enumeration))
        {
nextElement= this->enumerationUtil.nextElement(enumeration)!;
    
this->logUtil.putF(NEXT_ELEMENT +nextElement, this, commonStrings.PROCESS);
    
}


                        }
                            
}


    private: void setAscending(Boolean ascending){
this->ascending= ascending;
    
}


    public: Boolean getAscending(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ascending;
    
}


    public: SoftwareInformation getSoftwareInformation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->softwareInformation;
    
}


};

            

