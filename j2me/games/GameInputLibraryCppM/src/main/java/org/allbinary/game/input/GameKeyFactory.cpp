
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
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/InputFactory.h"

class GameKeyFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static GameKeyFactory* getInstance(){

                        if(GameKeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameKeyFactory::instance= new GameKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameKeyFactory*>(GameKeyFactory::instance);
    
}


    public: GameKey* NONE = new GameKey(InputFactory::getInstance()->MAX -1, "None");

    public: GameKey* UP = new GameKey(Canvas::UP, CommonPhoneStrings::getInstance()->UP);

    public: GameKey* DOWN = new GameKey(Canvas::DOWN, CommonPhoneStrings::getInstance()->DOWN);

    public: GameKey* LEFT = new GameKey(Canvas::LEFT, CommonPhoneStrings::getInstance()->LEFT);

    public: GameKey* RIGHT = new GameKey(Canvas::RIGHT, CommonPhoneStrings::getInstance()->RIGHT);

    public: GameKey* KEY_POUND = new GameKey(Canvas::KEY_POUND, "POUND");

    public: GameKey* KEY_STAR = new GameKey(Canvas::KEY_STAR, "STAR");

    public: GameKey* KEY_NUM0 = new GameKey(Canvas::KEY_NUM0, CommonPhoneStrings::getInstance()->ZERO);

    public: GameKey* KEY_NUM1 = new GameKey(Canvas::KEY_NUM1, CommonPhoneStrings::getInstance()->ONE);

    public: GameKey* KEY_NUM2 = new GameKey(Canvas::KEY_NUM2, CommonPhoneStrings::getInstance()->TWO);

    public: GameKey* KEY_NUM3 = new GameKey(Canvas::KEY_NUM3, CommonPhoneStrings::getInstance()->THREE);

    public: GameKey* KEY_NUM4 = new GameKey(Canvas::KEY_NUM4, CommonPhoneStrings::getInstance()->FOUR);

    public: GameKey* KEY_NUM5 = new GameKey(Canvas::KEY_NUM5, CommonPhoneStrings::getInstance()->FIVE);

    public: GameKey* KEY_NUM6 = new GameKey(Canvas::KEY_NUM6, CommonPhoneStrings::getInstance()->SIX);

    public: GameKey* KEY_NUM7 = new GameKey(Canvas::KEY_NUM7, CommonPhoneStrings::getInstance()->SEVEN);

    public: GameKey* KEY_NUM8 = new GameKey(Canvas::KEY_NUM8, CommonPhoneStrings::getInstance()->EIGHT);

    public: GameKey* KEY_NUM9 = new GameKey(Canvas::KEY_NUM9, CommonPhoneStrings::getInstance()->NINE);

    public: GameKey* GAME_A = new GameKey(Canvas::GAME_A, "Game A");

    public: GameKey* GAME_B = new GameKey(Canvas::GAME_B, "Game B");

    public: GameKey* GAME_C = new GameKey(Canvas::GAME_C, "Game C");

    public: GameKey* GAME_D = new GameKey(Canvas::GAME_D, "Game D");

    public: GameKey* FIRE = new GameKey(Canvas::FIRE, CommonPhoneStrings::getInstance()->FIRE);

    public: GameKey* LEVEL_DOWN = new GameKey(Canvas::KEY_NUM9 +1, "Cheat Level Up");

    public: GameKey* LEVEL_UP = new GameKey(Canvas::KEY_NUM9 +2, "Cheat Level Down");

};

            

