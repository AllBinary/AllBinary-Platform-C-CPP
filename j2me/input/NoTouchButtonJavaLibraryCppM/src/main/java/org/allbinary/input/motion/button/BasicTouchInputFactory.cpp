
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

    public const SPECIAL_BUTTON_SIX: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -30, "Button 6");

    public const SPECIAL_BUTTON_FIVE: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -31, "Button 5");

    public const SPECIAL_BUTTON_FOUR: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -32, "Button 4");

    public const SPECIAL_BUTTON_THREE: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -33, "Button 3");

    public const SPECIAL_BUTTON_TWO: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -34, "Button 2");

    public const SPECIAL_BUTTON_ONE: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -35, "Button 1");

    public const UP: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -36, "Up Button");

    public const LEFT: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -37, "Left Button");

    public const RIGHT: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -38, "Right Button");

    public const DOWN: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -39, "Down Button");

    public const NONE: TouchButtonInput = new TouchButtonInput(InputFactory.getInstance()!.MAX -40, "No Button");

    private: initialized: bool = false;

    private: const list: BasicArrayList = new BasicArrayListD();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public init(InputToGameKeyMapping inputToGameKeyMapping){

                        if(!this.initialized)
                        
                                    {
                                    this.initialized= true;
    
this.list.add(this.UP);
    
this.list.add(this.LEFT);
    
this.list.add(this.RIGHT);
    
this.list.add(this.DOWN);
    
this.list.add(SPECIAL_BUTTON_TWO);
    
this.list.add(SPECIAL_BUTTON_FOUR);
    
this.list.add(SPECIAL_BUTTON_THREE);
    
this.list.add(SPECIAL_BUTTON_ONE);
    
this.list.add(SPECIAL_BUTTON_FIVE);
    
this.list.add(SPECIAL_BUTTON_SIX);
    
this.updateAllList(this.list, inputToGameKeyMapping);
    

                                    }
                                
}


    public updateAll(InputToGameKeyMapping inputToGameKeyMapping){
this.updateAllList(this.getList(), inputToGameKeyMapping);
    
}


    public updateAllList(BasicArrayList list, InputToGameKeyMapping inputToGameKeyMapping){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START)!.appendint(list.size())!.toString(), this, "updateAll");
    




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    touchButtonInput: TouchButtonInput = list.get(index) as TouchButtonInput;;
    
touchButtonInput!.update(inputToGameKeyMapping);
    
}

}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


};

            

