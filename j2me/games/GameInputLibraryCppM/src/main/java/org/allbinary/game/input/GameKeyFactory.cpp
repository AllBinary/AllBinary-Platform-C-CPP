
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKey.h"
#include "InputFactory.h"

class GameKeyFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameKeyFactory getInstance(){

                        if(GameKeyFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    GameKeyFactory::instance= GameKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyFactory::instance() as GameKeyFactory;
    
}


    public: const GameKey NONE = GameKey(InputFactory::getInstance().MAX -1, "None");

    public: const GameKey UP = GameKey(Canvas::UP, CommonPhoneStrings::getInstance().UP);

    public: const GameKey DOWN = GameKey(Canvas::DOWN, CommonPhoneStrings::getInstance().DOWN);

    public: const GameKey LEFT = GameKey(Canvas::LEFT, CommonPhoneStrings::getInstance().LEFT);

    public: const GameKey RIGHT = GameKey(Canvas::RIGHT, CommonPhoneStrings::getInstance().RIGHT);

    public: const GameKey KEY_POUND = GameKey(Canvas::KEY_POUND, "POUND");

    public: const GameKey KEY_STAR = GameKey(Canvas::KEY_STAR, "STAR");

    public: const GameKey KEY_NUM0 = GameKey(Canvas::KEY_NUM0, CommonPhoneStrings::getInstance().ZERO);

    public: const GameKey KEY_NUM1 = GameKey(Canvas::KEY_NUM1, CommonPhoneStrings::getInstance().ONE);

    public: const GameKey KEY_NUM2 = GameKey(Canvas::KEY_NUM2, CommonPhoneStrings::getInstance().TWO);

    public: const GameKey KEY_NUM3 = GameKey(Canvas::KEY_NUM3, CommonPhoneStrings::getInstance().THREE);

    public: const GameKey KEY_NUM4 = GameKey(Canvas::KEY_NUM4, CommonPhoneStrings::getInstance().FOUR);

    public: const GameKey KEY_NUM5 = GameKey(Canvas::KEY_NUM5, CommonPhoneStrings::getInstance().FIVE);

    public: const GameKey KEY_NUM6 = GameKey(Canvas::KEY_NUM6, CommonPhoneStrings::getInstance().SIX);

    public: const GameKey KEY_NUM7 = GameKey(Canvas::KEY_NUM7, CommonPhoneStrings::getInstance().SEVEN);

    public: const GameKey KEY_NUM8 = GameKey(Canvas::KEY_NUM8, CommonPhoneStrings::getInstance().EIGHT);

    public: const GameKey KEY_NUM9 = GameKey(Canvas::KEY_NUM9, CommonPhoneStrings::getInstance().NINE);

    public: const GameKey GAME_A = GameKey(Canvas::GAME_A, "Game A");

    public: const GameKey GAME_B = GameKey(Canvas::GAME_B, "Game B");

    public: const GameKey GAME_C = GameKey(Canvas::GAME_C, "Game C");

    public: const GameKey GAME_D = GameKey(Canvas::GAME_D, "Game D");

    public: const GameKey FIRE = GameKey(Canvas::FIRE, CommonPhoneStrings::getInstance().FIRE);

    public: GameKey LEVEL_DOWN = GameKey(Canvas::KEY_NUM9 +1, "Cheat Level Up");

    public: GameKey LEVEL_UP = GameKey(Canvas::KEY_NUM9 +2, "Cheat Level Down");

};

            

