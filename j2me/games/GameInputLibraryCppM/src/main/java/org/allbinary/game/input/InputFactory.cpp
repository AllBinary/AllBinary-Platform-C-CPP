
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

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"

class InputFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static InputFactory getInstance(){

                        if(InputFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    InputFactory.instance= new InputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputFactory.instance as InputFactory;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const KEY_CODE_LABEL: string = "KeyCode: ";

    public const DEVICE_ID_LABEL: string = "DeviceId: ";

    public const MAX: int32_t = SmallIntegerSingletonFactory.getInstance()!.getMin()!;

    const inputIntegerArray: std::vector<Input> = new Array(this.MAX);

    public const NO_INPUT: Input = new Input(0, this.commonStrings!.UNKNOWN);

private constructor (){

            super();
        
    size: int32_t = this.inputIntegerArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.inputIntegerArray[index]= this.NO_INPUT;
    
}

}


    public add(int32_t id, Input input){
this.inputIntegerArray[id]= input;
    
}


    public Input getInstanceById(int32_t id){

                        if(id < 0)
                        
                                    {
                                    id=  -id;
    

                                    }
                                

                        if(id > this.inputIntegerArray!.length)
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("Warning id: ")!.appendint(id)!.toString(), this, this.commonStrings!.GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NO_INPUT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inputIntegerArray[id]!;
    
}


};

            

