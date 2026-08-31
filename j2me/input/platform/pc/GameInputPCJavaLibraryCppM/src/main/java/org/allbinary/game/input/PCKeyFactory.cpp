
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
        
#include <java/awt/event/KeyEvent.h>

      
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

    public static PCKeyFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory.SINGLETON;
    
}


    public const UNKNOWN: PCGameKey = new PCGameKey(KeyEvent.VK_UNDEFINED, "UNKNOWN");

    public const ENTER: PCGameKey = new PCGameKey(5, "Enter");

    public const _A: PCGameKey = new PCGameKey(KeyEvent.VK_A, "A");

    public const _B: PCGameKey = new PCGameKey(KeyEvent.VK_B, "B");

    public const _C: PCGameKey = new PCGameKey(KeyEvent.VK_C, "C");

    public const _D: PCGameKey = new PCGameKey(KeyEvent.VK_D, "D");

    public const _E: PCGameKey = new PCGameKey(KeyEvent.VK_E, "E");

    public const _F: PCGameKey = new PCGameKey(KeyEvent.VK_F, "F");

    public const _G: PCGameKey = new PCGameKey(KeyEvent.VK_G, "G");

    public const _H: PCGameKey = new PCGameKey(KeyEvent.VK_H, "H");

    public const _I: PCGameKey = new PCGameKey(KeyEvent.VK_I, "I");

    public const _J: PCGameKey = new PCGameKey(KeyEvent.VK_J, "J");

    public const _K: PCGameKey = new PCGameKey(KeyEvent.VK_K, "K");

    public const _L: PCGameKey = new PCGameKey(KeyEvent.VK_L, "L");

    public const _M: PCGameKey = new PCGameKey(KeyEvent.VK_M, "M");

    public const _N: PCGameKey = new PCGameKey(KeyEvent.VK_N, "N");

    public const _O: PCGameKey = new PCGameKey(KeyEvent.VK_O, "O");

    public const _P: PCGameKey = new PCGameKey(KeyEvent.VK_P, "P");

    public const _Q: PCGameKey = new PCGameKey(KeyEvent.VK_Q, "Q");

    public const _R: PCGameKey = new PCGameKey(KeyEvent.VK_R, "R");

    public const _S: PCGameKey = new PCGameKey(KeyEvent.VK_S, "S");

    public const _T: PCGameKey = new PCGameKey(KeyEvent.VK_T, "T");

    public const _U: PCGameKey = new PCGameKey(KeyEvent.VK_U, "U");

    public const _V: PCGameKey = new PCGameKey(KeyEvent.VK_V, "V");

    public const _W: PCGameKey = new PCGameKey(KeyEvent.VK_W, "W");

    public const _X: PCGameKey = new PCGameKey(KeyEvent.VK_X, "X");

    public const _Y: PCGameKey = new PCGameKey(KeyEvent.VK_Y, "Y");

    public const _Z: PCGameKey = new PCGameKey(KeyEvent.VK_Z, "Z");

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

    public const ZERO: PCGameKey = new PCGameKey(KeyEvent.VK_0, CommonPhoneStrings.getInstance()!.ZERO);

    public const ONE: PCGameKey = new PCGameKey(KeyEvent.VK_1, CommonPhoneStrings.getInstance()!.ONE);

    public const TWO: PCGameKey = new PCGameKey(KeyEvent.VK_2, CommonPhoneStrings.getInstance()!.TWO);

    public const THREE: PCGameKey = new PCGameKey(KeyEvent.VK_3, CommonPhoneStrings.getInstance()!.THREE);

    public const FOUR: PCGameKey = new PCGameKey(KeyEvent.VK_4, CommonPhoneStrings.getInstance()!.FOUR);

    public const FIVE: PCGameKey = new PCGameKey(KeyEvent.VK_5, CommonPhoneStrings.getInstance()!.FIVE);

    public const SIX: PCGameKey = new PCGameKey(KeyEvent.VK_6, CommonPhoneStrings.getInstance()!.SIX);

    public const SEVEN: PCGameKey = new PCGameKey(KeyEvent.VK_7, CommonPhoneStrings.getInstance()!.SEVEN);

    public const EIGHT: PCGameKey = new PCGameKey(KeyEvent.VK_8, CommonPhoneStrings.getInstance()!.EIGHT);

    public const NINE: PCGameKey = new PCGameKey(KeyEvent.VK_9, CommonPhoneStrings.getInstance()!.NINE);

    public const DPAD_UP: PCGameKey = new PCGameKey(KeyEvent.VK_UP, CommonPhoneStrings.getInstance()!.UP);

    public const DPAD_DOWN: PCGameKey = new PCGameKey(KeyEvent.VK_DOWN, CommonPhoneStrings.getInstance()!.DOWN);

    public const DPAD_LEFT: PCGameKey = new PCGameKey(KeyEvent.VK_LEFT, CommonPhoneStrings.getInstance()!.LEFT);

    public const DPAD_RIGHT: PCGameKey = new PCGameKey(KeyEvent.VK_RIGHT, CommonPhoneStrings.getInstance()!.RIGHT);

    public const DPAD_UP2: PCGameKey = this.DPAD_UP;

    public const DPAD_DOWN2: PCGameKey = this.DPAD_DOWN;

    public const DPAD_LEFT2: PCGameKey = this.DPAD_LEFT;

    public const DPAD_RIGHT2: PCGameKey = this.DPAD_RIGHT;

    public const COMMA: PCGameKey = new PCGameKey(KeyEvent.VK_COMMA, "COMMA");

    public const SPACE: PCGameKey = new PCGameKey(KeyEvent.VK_SPACE, "SPACE");

    public const DEL: PCGameKey = new PCGameKey(KeyEvent.VK_DELETE, "DEL");

    public const STAR: PCGameKey = new PCGameKey(42, CommonPhoneStrings.getInstance()!.STAR);

    public const QUESTION: PCGameKey = new PCGameKey(47, "?");

    public const PERIOD: PCGameKey = new PCGameKey(KeyEvent.VK_PERIOD, CommonSeps.getInstance()!.PERIOD);

    public const ESCAPE: PCGameKey = new PCGameKey(KeyEvent.VK_ESCAPE, "Esc");

    public const BACK_SPACE: PCGameKey = new PCGameKey(KeyEvent.VK_BACK_SPACE, "Backspace");

    public bool isSubmission(Input input){

                        if(input == this.ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDelete(Input input){

                        if(input == this.DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isBackSpace(Input input){

                        if(input == this.BACK_SPACE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isUp(Input input){

                        if(input == this.DPAD_UP || input == this.DPAD_UP2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDown(Input input){

                        if(input == this.DPAD_DOWN || input == this.DPAD_DOWN2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isLeft(Input input){

                        if(input == this.DPAD_LEFT || input == this.DPAD_LEFT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isRight(Input input){

                        if(input == this.DPAD_RIGHT || input == this.DPAD_RIGHT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isEnter(Input input){

                        if(input == this.ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

