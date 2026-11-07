
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_CPP
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/displayable/HighScoreUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScoreNamePersistanceSingleton.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>

      
#include <org/allbinary/game/score/HighScoresResultsListener.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HighScoreUtil::SUBMIT_TEXTBOX_COMMAND_owner() -> Command* { static std::unique_ptr<Command> value(new Command("Submit", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }
Command* HighScoreUtil::SUBMIT_TEXTBOX_COMMAND = HighScoreUtil::SUBMIT_TEXTBOX_COMMAND_owner();

HighScoreUtil::HighScoreUtil(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, std::string name, HighScore* highScore) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->highScoresFactoryInterface= highScoresFactoryInterface;
    
this->highScoresHelper= highScoresHelper;
    
this->highScoresArray= this->highScoresHelper->getHighScoresArray();
    
this->highScore= highScore;
    
this->abeClientInformation= abeClientInformation;
    
this->gameInfo= gameInfo;
    
}


    auto HighScoreUtil::setHighScoresArray(std::vector<HighScores*> highScoresArray) -> void{
this->highScoresArray= highScoresArray;
    
this->firstTime= false;
    
this->saveHighScore();
    
}


    auto HighScoreUtil::update(std::string name) -> void{
HighScoreNamePersistanceSingleton::getInstance()->save(this->abeClientInformation, this->gameInfo, name);
    
this->highScore->setName(name);
    
}


    auto HighScoreUtil::saveHighScore() -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->commonStrings->START)->append(StringUtil::getInstance()->toString(this->highScore))), this, "saveHighScore");
    

    int32_t size = this->highScoresArray.size();;
    

                        if(this->firstTime && size == 0)
                        
                                    {
                                    this->logUtil->putF("Games canvas did not give us any HighScores", this, "saveHighScore");
    
this->highScoresFactoryInterface->fetchHighScores(this->gameInfo, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

    HighScores* highScores;;
    

    std::string highScoresAsString;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
highScores= this->highScoresArray[index];
    
highScores->addHighScore(this->highScore);
    
highScoresAsString= JavaString::valueOf(highScores);
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Added/Adding Score: ")->append(highScoresAsString)), this, "saveHighScore");
    
}

this->highScoresHelper->setHighScoresArray(this->highScoresArray);
    
}


    auto HighScoreUtil::submit(MyCanvas* myCanvas) -> void{

    CommandListener* commandListener = myCanvas->getCustomCommandListener();;
    
commandListener->commandAction(HighScoreUtil::SUBMIT_TEXTBOX_COMMAND, myCanvas);
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_CPP
