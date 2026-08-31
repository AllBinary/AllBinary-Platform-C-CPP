
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
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class BasicTouchInputFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static BasicTouchInputFactory getInstance(){

                        if(BasicTouchInputFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    BasicTouchInputFactory.instance= new BasicTouchInputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicTouchInputFactory.instance as BasicTouchInputFactory;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const SPECIAL_BUTTON_SEVEN_TESTING_ONLY: TouchButtonInput;

    public const SPECIAL_BUTTON_EIGHT_TESTING_ONLY: TouchButtonInput;

    public const SPECIAL_BUTTON_SIX: TouchButtonInput;

    public const SPECIAL_BUTTON_FIVE: TouchButtonInput;

    public const SPECIAL_BUTTON_FOUR: TouchButtonInput;

    public const SPECIAL_BUTTON_THREE: TouchButtonInput;

    public const SPECIAL_BUTTON_TWO: TouchButtonInput;

    public const SPECIAL_BUTTON_ONE: TouchButtonInput;

    public const UP: TouchButtonInput;

    public const LEFT: TouchButtonInput;

    public const RIGHT: TouchButtonInput;

    public const DOWN: TouchButtonInput;

    public const NONE: TouchButtonInput;

    private: initialized: bool = false;

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        
    MAX: int32_t = InputFactory.getInstance()!.MAX;;
    
this.SPECIAL_BUTTON_SEVEN_TESTING_ONLY= new TouchButtonInput(MAX -41, "Button 7 - Testing Only May Cross Over Key Values");
    
this.SPECIAL_BUTTON_EIGHT_TESTING_ONLY= new TouchButtonInput(MAX -42, "Button 8 - Testing Only May Cross Over Key Values");
    
this.SPECIAL_BUTTON_SIX= new TouchButtonInput(MAX -30, "Button 6");
    
this.SPECIAL_BUTTON_FIVE= new TouchButtonInput(MAX -31, "Button 5");
    
this.SPECIAL_BUTTON_FOUR= new TouchButtonInput(MAX -32, "Button 4");
    
this.SPECIAL_BUTTON_THREE= new TouchButtonInput(MAX -33, "Button 3");
    
this.SPECIAL_BUTTON_TWO= new TouchButtonInput(MAX -34, "Button 2");
    
this.SPECIAL_BUTTON_ONE= new TouchButtonInput(MAX -35, "Button 1");
    
this.UP= new TouchButtonInput(MAX -36, "Up Button");
    
this.LEFT= new TouchButtonInput(MAX -37, "Left Button");
    
this.RIGHT= new TouchButtonInput(MAX -38, "Right Button");
    
this.DOWN= new TouchButtonInput(MAX -39, "Down Button");
    
this.NONE= new TouchButtonInput(MAX -40, "No Button");
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public init(InputToGameKeyMapping inputToGameKeyMapping){

                        if(!this.initialized)
                        
                                    {
                                    this.initialized= true;
    
this.list.add(this.UP);
    
this.list.add(this.LEFT);
    
this.list.add(this.RIGHT);
    
this.list.add(this.DOWN);
    
this.list.add(this.SPECIAL_BUTTON_TWO);
    
this.list.add(this.SPECIAL_BUTTON_FOUR);
    
this.list.add(this.SPECIAL_BUTTON_THREE);
    
this.list.add(this.SPECIAL_BUTTON_ONE);
    
this.list.add(this.SPECIAL_BUTTON_FIVE);
    
this.list.add(this.SPECIAL_BUTTON_SIX);
    
this.list.add(this.SPECIAL_BUTTON_SIX);
    
this.list.add(this.SPECIAL_BUTTON_SEVEN_TESTING_ONLY);
    
this.list.add(this.SPECIAL_BUTTON_EIGHT_TESTING_ONLY);
    
this.updateAllFromList(this.list, inputToGameKeyMapping);
    

                                    }
                                
}


    public updateAll(InputToGameKeyMapping inputToGameKeyMapping){
this.updateAllFromList(this.list, inputToGameKeyMapping);
    
}


    public updateAllFromList(BasicArrayList list, InputToGameKeyMapping inputToGameKeyMapping){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.appendint(list.size())!.toString(), this, "updateAll");
    

    touchButtonInput: TouchButtonInput;;
    




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {
touchButtonInput= list.objectArray[index]! as TouchButtonInput;
    
touchButtonInput!.update(inputToGameKeyMapping);
    
}

}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


};

            

