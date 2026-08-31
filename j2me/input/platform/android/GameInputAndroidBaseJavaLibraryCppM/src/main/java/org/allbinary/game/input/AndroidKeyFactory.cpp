
        /* Generated Code Do Not Modify */
        



#include <android/view/KeyEvent.h>

      
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidGameKey.h"
#include "Input.h"

class AndroidKeyFactory: public ActivityFractureUtil {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const UNKNOWN: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_UNKNOWN, "UNKNOWN");

    public KEYCODE_BUTTON_L1: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_R1: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_THUMBR: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_THUMBL: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_START: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_MODE: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_B: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_A: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_X: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_Y: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_L2: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_R2: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_SELECT: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_C: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_Z: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_1: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_10: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_11: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_12: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_13: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_14: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_15: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_16: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_2: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_3: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_4: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_5: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_6: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_7: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_8: AndroidGameKey = this.UNKNOWN;

    public KEYCODE_BUTTON_9: AndroidGameKey = this.UNKNOWN;

    public const SOFT_LEFT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SOFT_LEFT, "SOFT_LEFT");

    public const SOFT_RIGHT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SOFT_RIGHT, "SOFT_RIGHT");

    public const HOME: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_HOME, "HOME");

    public const BACK: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_BACK, "BACK");

    public const CALL: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_CALL, "CALL");

    public const ENDCALL: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_ENDCALL, "ENDCALL");

    public const ZERO: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_0, CommonPhoneStrings.getInstance()!.ZERO);

    public const ONE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_1, CommonPhoneStrings.getInstance()!.ONE);

    public const TWO: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_2, CommonPhoneStrings.getInstance()!.TWO);

    public const THREE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_3, CommonPhoneStrings.getInstance()!.THREE);

    public const FOUR: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_4, CommonPhoneStrings.getInstance()!.FOUR);

    public const FIVE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_5, CommonPhoneStrings.getInstance()!.FIVE);

    public const SIX: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_6, CommonPhoneStrings.getInstance()!.SIX);

    public const SEVEN: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_7, CommonPhoneStrings.getInstance()!.SEVEN);

    public const EIGHT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_8, CommonPhoneStrings.getInstance()!.EIGHT);

    public const NINE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_9, CommonPhoneStrings.getInstance()!.NINE);

    public const STAR: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_STAR, CommonPhoneStrings.getInstance()!.STAR);

    public const POUND: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_POUND, CommonPhoneStrings.getInstance()!.POUND);

    public const DPAD_UP: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_DPAD_UP, "UP");

    public const DPAD_DOWN: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_DPAD_DOWN, "DOWN");

    public const DPAD_LEFT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_DPAD_LEFT, "LEFT");

    public const DPAD_RIGHT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_DPAD_RIGHT, "RIGHT");

    public const DPAD_CENTER: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_DPAD_CENTER, "CENTER");

    public const VOLUME_UP: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_VOLUME_UP, "VOLUME_UP");

    public const VOLUME_DOWN: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_VOLUME_DOWN, "VOLUME_DOWN");

    public const POWER: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_POWER, "POWER");

    public const CAMERA: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_CAMERA, "CAMERA");

    public const CLEAR: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_CLEAR, "CLEAR");

    public const A: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_A, "A");

    public const B: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_B, "B");

    public const C: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_C, "C");

    public const D: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_D, "D");

    public const E: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_E, "E");

    public const F: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_F, "F");

    public const G: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_G, "G");

    public const H: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_H, "H");

    public const I: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_I, "I");

    public const J: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_J, "J");

    public const K: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_K, "K");

    public const L: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_L, "L");

    public const M: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_M, "M");

    public const N: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_N, "N");

    public const O: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_O, "O");

    public const P: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_P, "P");

    public const Q: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_Q, "Q");

    public const R: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_R, "R");

    public const S: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_S, "S");

    public const T: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_T, "T");

    public const U: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_U, "U");

    public const V: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_V, "V");

    public const W: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_W, "W");

    public const X: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_X, "X");

    public const Y: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_Y, "Y");

    public const Z: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_Z, "Z");

    public const COMMA: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_COMMA, "COMMA");

    public const PERIOD: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_PERIOD, AbPathData.getInstance()!.EXTENSION_SEP);

    public const ALT_LEFT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_ALT_LEFT, "ALT_LEFT");

    public const ALT_RIGHT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_ALT_RIGHT, "ALT_RIGHT");

    public const SHIFT_LEFT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SHIFT_LEFT, "SHIFT_LEFT");

    public const SHIFT_RIGHT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SHIFT_RIGHT, "SHIFT_RIGHT");

    public const TAB: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_TAB, "TAB");

    public const SPACE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SPACE, "SPACE");

    public const SYM: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SYM, "SYM");

    public const EXPLORER: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_EXPLORER, "EXPLORER");

    public const ENVELOPE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_ENVELOPE, "ENVELOPE");

    public const ENTER: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_ENTER, "ENTER");

    public const DEL: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_DEL, "DEL");

    public const GRAVE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_GRAVE, "GRAVE");

    public const MINUS: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_MINUS, "MINUS");

    public const EQUALS: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_EQUALS, "EQUALS");

    public const LEFT_BRACKET: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_LEFT_BRACKET, "LEFT_BRACKET");

    public const RIGHT_BRACKET: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_RIGHT_BRACKET, "RIGHT_BRACKET");

    public const BACKSLASH: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_BACKSLASH, "BACKSLASH");

    public const SEMICOLON: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SEMICOLON, "SEMICOLON");

    public const APOSTROPHE: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_APOSTROPHE, "APOSTROPHE");

    public const SLASH: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SLASH, "SLASH");

    public const AT: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_AT, "AT");

    public const NUM: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_NUM, "NUM");

    public const HEADSETHOOK: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_HEADSETHOOK, "HEADSETHOOK");

    public const FOCUS: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_FOCUS, "FOCUS");

    public const PLUS: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_PLUS, "PLUS");

    public const MENU: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_MENU, "MENU");

    public const NOTIFICATION: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_NOTIFICATION, "NOTIFICATION");

    public const SEARCH: AndroidGameKey = new AndroidGameKey(KeyEvent.KEYCODE_SEARCH, "SEARCH");

    public init(){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF("Start/End", this, commonStrings!.INIT);
    
}


    public bool isSubmission(Input input){

                        if(input == this.ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(input == this.DPAD_CENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDelete(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isBackSpace(Input input){

                        if(input == this.DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isLeft(Input input){

                        if(input == this.DPAD_LEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isRight(Input input){

                        if(input == this.DPAD_RIGHT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isUp(Input input){

                        if(input == this.DPAD_UP)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDown(Input input){

                        if(input == this.DPAD_DOWN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isEnter(Input input){

                        if(input == this.DPAD_CENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(input == this.ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(input == this.CALL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

