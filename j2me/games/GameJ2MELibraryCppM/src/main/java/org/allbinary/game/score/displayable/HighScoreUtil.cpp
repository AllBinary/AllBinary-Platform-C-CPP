
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        
class HighScoreUtil
            : public Object
        : public HighScoresResultsListener {
        

    public static const SUBMIT_TEXTBOX_COMMAND: Command = new Command("Submit", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const highScoresFactoryInterface: HighScoresFactoryInterface;

    private: highScoresArray: std::vector<HighScores>;

    private: const highScore: HighScore;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const gameInfo: GameInfo;

    private: const highScoresHelper: HighScoresHelperBaseInterface;

    private: firstTime: bool = true;

public constructor (HighScoresFactoryInterface highScoresFactoryInterface, HighScoresHelperBaseInterface highScoresHelper, AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, CommandListener cmdListener, string name, HighScore highScore){

            super();
        this.highScoresFactoryInterface= highScoresFactoryInterface;
    
this.highScoresHelper= highScoresHelper;
    
this.highScoresArray= this.highScoresHelper!.getHighScoresArray();
    
this.highScore= highScore;
    
this.abeClientInformation= abeClientInformation;
    
this.gameInfo= gameInfo;
    
}


    public setHighScoresArray(std::vector<HighScores> highScoresArray){
this.highScoresArray= highScoresArray;
    
this.firstTime= false;
    
this.saveHighScore();
    
}


    public update(string name){
HighScoreNamePersistanceSingleton.getInstance()!.save(this.abeClientInformation, this.gameInfo, name);
    
this.highScore!.setName(name);
    
}


    public saveHighScore(){
this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.append(StringUtil.getInstance()!.toString(this.highScore))!.toString(), this, "saveHighScore");
    

    size: int32_t = this.highScoresArray!.length
                ;;
    

                        if(this.firstTime && size == 0)
                        
                                    {
                                    this.logUtil!.putF("Games canvas did not give us any HighScores", this, "saveHighScore");
    
this.highScoresFactoryInterface!.fetchHighScores(this.gameInfo, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    highScores: HighScores;;
    

    highScoresAsString: string;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
highScores= this.highScoresArray[index]!;
    
highScores!.addHighScore(this.highScore);
    
highScoresAsString= highScores!.toString();
    
this.logUtil!.putF(new StringMaker().append("Added/Adding Score: ")!.append(highScoresAsString)!.toString(), this, "saveHighScore");
    
}

this.highScoresHelper!.setHighScoresArray(this.highScoresArray);
    
}


    public submit(MyCanvas myCanvas){

    commandListener: CommandListener = myCanvas!.getCustomCommandListener()!;;
    
commandListener!.commandAction(HighScoreUtil.SUBMIT_TEXTBOX_COMMAND, myCanvas);
    
}


};

            

