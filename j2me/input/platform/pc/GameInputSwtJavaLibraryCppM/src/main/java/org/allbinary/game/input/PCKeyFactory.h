
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PCGameKey.h"
#include "Input.h"

class PCKeyFactory
            : public Object
         {
        

    private: static const SINGLETON: PCKeyFactory = new PCKeyFactory();

    public static PCKeyFactory getInstance();

    public const UNKNOWN: PCGameKey = new PCGameKey(254, "UNKNOWN");

    public const ENTER: PCGameKey = new PCGameKey(13, "Enter");

    public const _A: PCGameKey = new PCGameKey(65, "A");

    public const _B: PCGameKey = new PCGameKey(66, "B");

    public const _C: PCGameKey = new PCGameKey(67, "C");

    public const _D: PCGameKey = new PCGameKey(68, "D");

    public const _E: PCGameKey = new PCGameKey(69, "E");

    public const _F: PCGameKey = new PCGameKey(70, "F");

    public const _G: PCGameKey = new PCGameKey(71, "G");

    public const _H: PCGameKey = new PCGameKey(72, "H");

    public const _I: PCGameKey = new PCGameKey(73, "I");

    public const _J: PCGameKey = new PCGameKey(74, "J");

    public const _K: PCGameKey = new PCGameKey(75, "K");

    public const _L: PCGameKey = new PCGameKey(76, "L");

    public const _M: PCGameKey = new PCGameKey(77, "M");

    public const _N: PCGameKey = new PCGameKey(78, "N");

    public const _O: PCGameKey = new PCGameKey(79, "O");

    public const _P: PCGameKey = new PCGameKey(80, "P");

    public const _Q: PCGameKey = new PCGameKey(81, "Q");

    public const _R: PCGameKey = new PCGameKey(82, "R");

    public const _S: PCGameKey = new PCGameKey(83, "S");

    public const _T: PCGameKey = new PCGameKey(84, "T");

    public const _U: PCGameKey = new PCGameKey(85, "U");

    public const _V: PCGameKey = new PCGameKey(86, "V");

    public const _W: PCGameKey = new PCGameKey(87, "W");

    public const _X: PCGameKey = new PCGameKey(88, "X");

    public const _Y: PCGameKey = new PCGameKey(89, "Y");

    public const _Z: PCGameKey = new PCGameKey(90, "Z");

    public const a: PCGameKey = new PCGameKey(97, "a");

    public const b: PCGameKey = new PCGameKey(98, "b");

    public const c: PCGameKey = new PCGameKey(99, "c");

    public const d: PCGameKey = new PCGameKey(100, "d");

    public const e: PCGameKey = new PCGameKey(101, "e");

    public const f: PCGameKey = new PCGameKey(102, "f");

    public const g: PCGameKey = new PCGameKey(103, "g");

    public const h: PCGameKey = new PCGameKey(104, "h");

    public const i: PCGameKey = new PCGameKey(105, "i");

    public const j: PCGameKey = new PCGameKey(106, "j");

    public const k: PCGameKey = new PCGameKey(107, "k");

    public const l: PCGameKey = new PCGameKey(108, "l");

    public const m: PCGameKey = new PCGameKey(109, "m");

    public const n: PCGameKey = new PCGameKey(110, "n");

    public const o: PCGameKey = new PCGameKey(111, "o");

    public const p: PCGameKey = new PCGameKey(112, "p");

    public const q: PCGameKey = new PCGameKey(113, "q");

    public const r: PCGameKey = new PCGameKey(114, "r");

    public const s: PCGameKey = new PCGameKey(115, "s");

    public const t: PCGameKey = new PCGameKey(116, "t");

    public const u: PCGameKey = new PCGameKey(117, "u");

    public const v: PCGameKey = new PCGameKey(118, "v");

    public const w: PCGameKey = new PCGameKey(119, "w");

    public const x: PCGameKey = new PCGameKey(120, PositionStrings.getInstance()!.X);

    public const y: PCGameKey = new PCGameKey(121, PositionStrings.getInstance()!.Y);

    public const z: PCGameKey = new PCGameKey(122, "z");

    public const ZERO: PCGameKey = new PCGameKey(48, CommonPhoneStrings.getInstance()!.ZERO);

    public const ONE: PCGameKey = new PCGameKey(49, CommonPhoneStrings.getInstance()!.ONE);

    public const TWO: PCGameKey = new PCGameKey(50, CommonPhoneStrings.getInstance()!.TWO);

    public const THREE: PCGameKey = new PCGameKey(51, CommonPhoneStrings.getInstance()!.THREE);

    public const FOUR: PCGameKey = new PCGameKey(52, CommonPhoneStrings.getInstance()!.FOUR);

    public const FIVE: PCGameKey = new PCGameKey(53, CommonPhoneStrings.getInstance()!.FIVE);

    public const SIX: PCGameKey = new PCGameKey(54, CommonPhoneStrings.getInstance()!.SIX);

    public const SEVEN: PCGameKey = new PCGameKey(55, CommonPhoneStrings.getInstance()!.SEVEN);

    public const EIGHT: PCGameKey = new PCGameKey(56, CommonPhoneStrings.getInstance()!.EIGHT);

    public const NINE: PCGameKey = new PCGameKey(57, CommonPhoneStrings.getInstance()!.NINE);

    public const DPAD_UP: PCGameKey = new PCGameKey(38, CommonPhoneStrings.getInstance()!.UP);

    public const DPAD_DOWN: PCGameKey = new PCGameKey(40, CommonPhoneStrings.getInstance()!.DOWN);

    public const DPAD_LEFT: PCGameKey = new PCGameKey(37, CommonPhoneStrings.getInstance()!.LEFT);

    public const DPAD_RIGHT: PCGameKey = new PCGameKey(39, CommonPhoneStrings.getInstance()!.RIGHT);

    public const DPAD_UP2: PCGameKey = this.DPAD_UP;

    public const DPAD_DOWN2: PCGameKey = this.DPAD_DOWN;

    public const DPAD_LEFT2: PCGameKey = this.DPAD_LEFT;

    public const DPAD_RIGHT2: PCGameKey = this.DPAD_RIGHT;

    public const COMMA: PCGameKey = new PCGameKey(44, "COMMA");

    public const SPACE: PCGameKey = new PCGameKey(32, "SPACE");

    public const DEL: PCGameKey = new PCGameKey(46, "DEL");

    public const STAR: PCGameKey = new PCGameKey(42, CommonPhoneStrings.getInstance()!.STAR);

    public const QUESTION: PCGameKey = new PCGameKey(47, "?");

    public const PERIOD: PCGameKey = new PCGameKey(46, CommonSeps.getInstance()!.PERIOD);

    public const ESCAPE: PCGameKey = new PCGameKey(27, "Esc");

    public const BACK_SPACE: PCGameKey = new PCGameKey(8, "Backspace");

    public bool isSubmission(Input input);

    public bool isDelete(Input input);

    public bool isBackSpace(Input input);

    public bool isUp(Input input);

    public bool isDown(Input input);

    public bool isLeft(Input input);

    public bool isRight(Input input);

    public bool isEnter(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H
