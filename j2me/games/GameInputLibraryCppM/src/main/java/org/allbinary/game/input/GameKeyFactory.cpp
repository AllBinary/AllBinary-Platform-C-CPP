
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
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameKeyFactory getInstance(){

                        if(GameKeyFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    GameKeyFactory.instance= new GameKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyFactory.instance as GameKeyFactory;
    
}


    public const NONE: GameKey = new GameKey(InputFactory.getInstance()!.MAX -1, "None");

    public const UP: GameKey = new GameKey(Canvas.UP, CommonPhoneStrings.getInstance()!.UP);

    public const DOWN: GameKey = new GameKey(Canvas.DOWN, CommonPhoneStrings.getInstance()!.DOWN);

    public const LEFT: GameKey = new GameKey(Canvas.LEFT, CommonPhoneStrings.getInstance()!.LEFT);

    public const RIGHT: GameKey = new GameKey(Canvas.RIGHT, CommonPhoneStrings.getInstance()!.RIGHT);

    public const KEY_POUND: GameKey = new GameKey(Canvas.KEY_POUND, "POUND");

    public const KEY_STAR: GameKey = new GameKey(Canvas.KEY_STAR, "STAR");

    public const KEY_NUM0: GameKey = new GameKey(Canvas.KEY_NUM0, CommonPhoneStrings.getInstance()!.ZERO);

    public const KEY_NUM1: GameKey = new GameKey(Canvas.KEY_NUM1, CommonPhoneStrings.getInstance()!.ONE);

    public const KEY_NUM2: GameKey = new GameKey(Canvas.KEY_NUM2, CommonPhoneStrings.getInstance()!.TWO);

    public const KEY_NUM3: GameKey = new GameKey(Canvas.KEY_NUM3, CommonPhoneStrings.getInstance()!.THREE);

    public const KEY_NUM4: GameKey = new GameKey(Canvas.KEY_NUM4, CommonPhoneStrings.getInstance()!.FOUR);

    public const KEY_NUM5: GameKey = new GameKey(Canvas.KEY_NUM5, CommonPhoneStrings.getInstance()!.FIVE);

    public const KEY_NUM6: GameKey = new GameKey(Canvas.KEY_NUM6, CommonPhoneStrings.getInstance()!.SIX);

    public const KEY_NUM7: GameKey = new GameKey(Canvas.KEY_NUM7, CommonPhoneStrings.getInstance()!.SEVEN);

    public const KEY_NUM8: GameKey = new GameKey(Canvas.KEY_NUM8, CommonPhoneStrings.getInstance()!.EIGHT);

    public const KEY_NUM9: GameKey = new GameKey(Canvas.KEY_NUM9, CommonPhoneStrings.getInstance()!.NINE);

    public const GAME_A: GameKey = new GameKey(Canvas.GAME_A, "Game A");

    public const GAME_B: GameKey = new GameKey(Canvas.GAME_B, "Game B");

    public const GAME_C: GameKey = new GameKey(Canvas.GAME_C, "Game C");

    public const GAME_D: GameKey = new GameKey(Canvas.GAME_D, "Game D");

    public const FIRE: GameKey = new GameKey(Canvas.FIRE, CommonPhoneStrings.getInstance()!.FIRE);

    public LEVEL_DOWN: GameKey = new GameKey(Canvas.KEY_NUM9 +1, "Cheat Level Up");

    public LEVEL_UP: GameKey = new GameKey(Canvas.KEY_NUM9 +2, "Cheat Level Down");

};

            

