
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameTypeFactory.h"
#include "GameMode.h"
#include "PlayerTypesFactory.h"
#include "GameInfoData.h"
#include "GameType.h"
#include "PlayerType.h"

class GameInfo
            : public Object
         {
        

    public static const NONE: GameInfo = new GameInfo(GameTypeFactory.getInstance()!.NONE, GameMode.NONE, PlayerTypesFactory.getInstance()!.PLAYER_TYPE_ONE,  -1,  -1);

    public static const LEVEL_NAME: string = "LEVEL";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const gameInfoData: GameInfoData = GameInfoData.getInstance()!;

    private: const gameType: GameType;

    private: const gameMode: GameMode;

    private: const playerType: PlayerType;

    private: highestLevel: int32_t= 0;

    private: currentLevel: int32_t;

public constructor (GameType gameType, GameMode gameMode, PlayerType playerType, int32_t highestLevel, int32_t currentLevel){

            super();
        this.gameType= gameType;
    
this.gameMode= gameMode;
    
this.setHighestLevel(highestLevel);
    
this.currentLevel= currentLevel;
    
this.playerType= playerType;
    
}


    public GameType getGameType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameType;
    
}


    public GameMode getGameMode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameMode;
    
}


    public PlayerType getPlayerType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playerType;
    
}


    public int32_t getHighestLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.highestLevel;
    
}


    public setHighestLevel(int32_t highestLevel){
this.highestLevel= highestLevel;
    
}


    public int32_t getCurrentLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentLevel;
    
}


    private: const NEW_LEVEL: string = "New Level: ";

    private: const SET_CURRENT_LEVEL: string = "setCurrentLevel";

    public setCurrentLevel(int32_t currentLevel){
this.currentLevel= currentLevel;
    
this.logUtil!.putF(new StringMaker().append(this.NEW_LEVEL)!.appendint(this.getCurrentLevel())!.toString(), this, this.SET_CURRENT_LEVEL);
    
}


    private: const NEXT: string = "Next ";

    private: const NEXT_GAME_LEVEL: string = "nextGameLevel";

    public nextGameLevel(){

                        if(this.getCurrentLevel() < this.getHighestLevel())
                        
                                    {
                                    this.currentLevel++;
    

                                    }
                                
this.logUtil!.putF(new StringMaker().append(this.NEXT)!.append(this.NEW_LEVEL)!.appendint(this.getCurrentLevel())!.toString(), this, this.NEXT_GAME_LEVEL);
    
}


    public previousGameLevel(){

                        if(this.getCurrentLevel() > 1)
                        this.currentLevel--
}


    public bool isLastLevel(){

                        if(this.getCurrentLevel() >= this.getHighestLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public Hashtable<any, any> toHashtable(){

    hashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    
hashtable.put(this.gameInfoData!.GAME_TYPE, this.getGameType()!.toString());
    
hashtable.put(this.gameInfoData!.GAME_MODE, this.gameMode!.toString());
    
hashtable.put(this.gameInfoData!.PLAYER_TYPE, this.playerType!.toString());
    
hashtable.put(this.gameInfoData!.HIGHEST_LEVEL, Integer.toString(this.getHighestLevel()));
    
hashtable.put(this.gameInfoData!.CURRENT_LEVEL, this.currentLevel.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    
stringBuffer!.append(this.gameInfoData!.GAME_TYPE);
    
stringBuffer!.append(commonSeps!.EQUALS);
    
stringBuffer!.append(this.getGameType()!.toString());
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
stringBuffer!.append(this.gameInfoData!.GAME_MODE);
    
stringBuffer!.append(commonSeps!.EQUALS);
    
stringBuffer!.append(this.gameMode!.toString());
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
stringBuffer!.append(this.gameInfoData!.PLAYER_TYPE);
    
stringBuffer!.append(commonSeps!.EQUALS);
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.playerType));
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
stringBuffer!.append(this.gameInfoData!.HIGHEST_LEVEL);
    
stringBuffer!.append(commonSeps!.EQUALS);
    
stringBuffer!.appendint(this.getHighestLevel());
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
stringBuffer!.append(this.gameInfoData!.CURRENT_LEVEL);
    
stringBuffer!.append(commonSeps!.EQUALS);
    
stringBuffer!.appendint(this.currentLevel);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

