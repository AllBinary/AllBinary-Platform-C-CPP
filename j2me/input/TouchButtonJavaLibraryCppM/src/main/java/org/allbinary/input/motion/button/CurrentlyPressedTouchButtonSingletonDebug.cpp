
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
        



#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CurrentlyPressedTouchButtonSingleton.h"
#include "TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingletonDebug: public CurrentlyPressedTouchButtonSingleton {
        

    private: static const instanceC: CurrentlyPressedTouchButtonSingletonDebug = new CurrentlyPressedTouchButtonSingletonDebug();

    public static CurrentlyPressedTouchButtonSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CurrentlyPressedTouchButtonSingletonDebug.instanceC;
    
}


    private: string: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: listString: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: append: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const PRESSED_AND_FIRED: string = "pressed & fired";

    private: const PRESSED_AND_NOT_FIRED: string = "pressed in button but not fired";

    private: const ASSOCIATED_RELEASED_AND_FIRED: string = "assoc. rel & fired";

    private: const RELEASED_AND_FIRED: string = "rel & fired 1";

    private: const RELEASED_AND_FIRED_2: string = "rel & fired 2";

    private: const RELEASED_AND_NOT_FIRED: string = "rel & not fired";

    appendTouchButtonInput(string append, TouchButtonInput touchButtonInput){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(touchButtonInput!.toString());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(append);
    
this.append= stringBuffer!.toString();
    
this.string= new StringMaker().append(this.listString)!.append(this.append)!.toString();
    
}


    append(string append){
this.append= new StringMaker().append(this.append)!.append(append)!.toString();
    
this.string= new StringMaker().append(this.listString)!.append(this.append)!.toString();
    
}


    public clearLog(int32_t x, int32_t y){
this.append= new StringMaker().append(GPoint.toStringStatic(x, y, 0))!.append(CommonSeps.getInstance()!.SPACE)!.toString();
    
this.string= new StringMaker().append(this.listString)!.append(this.append)!.toString();
    
}


    public releaseAndNotFired(){
this.append(this.RELEASED_AND_NOT_FIRED);
    
}


    public releaseAndFired(TouchButtonInput touchButtonInput){
this.appendTouchButtonInput(this.RELEASED_AND_FIRED, touchButtonInput);
    
}


    public releaseAndFired2(TouchButtonInput touchButtonInput){
this.appendTouchButtonInput(this.RELEASED_AND_FIRED_2, touchButtonInput);
    
}


    public releaseAndFiredAssociated(TouchButtonInput touchButtonInput){
this.appendTouchButtonInput(this.ASSOCIATED_RELEASED_AND_FIRED, touchButtonInput);
    
}


    public pressedAndFired(TouchButtonInput touchButtonInput){
this.appendTouchButtonInput(this.PRESSED_AND_FIRED, touchButtonInput);
    
}


    public pressedAndNotFired(TouchButtonInput touchButtonInput){
this.appendTouchButtonInput(this.PRESSED_AND_NOT_FIRED, touchButtonInput);
    
}


    public TouchButtonInput removeAt(int32_t index){

    touchButtonInput: TouchButtonInput = super.removeAt(index)!;;
    
this.listString= this.list.toString();
    
this.string= new StringMaker().append(this.listString)!.append(this.append)!.toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return touchButtonInput;
    
}


    public bool remove(TouchButtonInput touchButtonInput){

    isRemoved: bool = super.remove(touchButtonInput)!;;
    
this.listString= this.list.toString();
    
this.string= new StringMaker().append(this.listString)!.append(this.append)!.toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isRemoved;
    
}


    public add(TouchButtonInput touchButtonInput){
super.add(touchButtonInput);
    
this.listString= this.list.toString();
    
this.string= new StringMaker().append(this.listString)!.append(this.append)!.toString();
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.string;
    
}


};

            

