
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Stack.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Form.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/displayable/canvas/MenuListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScreenRepaintProcessorFactory.h"

class CommandForm: public Form: public MyCommandInterface, public MenuListener {
        

    private: static NULL_COMMAND_FORM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static CommandForm getNullCommandForm(){

                        if(CommandForm.NULL_COMMAND_FORM == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    CommandForm.NULL_COMMAND_FORM= new CommandForm(NullCommandListener.NULL_COMMAND_LISTENER, StringUtil.getInstance()!.EMPTY_STRING, BasicColorFactory.getInstance()!.BLACK, BasicColorFactory.getInstance()!.WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandForm.NULL_COMMAND_FORM as CommandForm;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const repaintProcessor: Processor = ScreenRepaintProcessorFactory.getInstance()!.create(this)!;

    private: commandStack: Stack<any>;

public constructor (CommandListener commandListener, string formTitle, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(formTitle);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.commandStack= new Stack<any>();
    

        try {
            this.repaintProcessor!.process();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    
}

}


    public initCommands(CommandListener cmdListener){
}


    public open(){
this.logUtil!.putF(this.commonStrings!.START, this, "open");
    
}


    public close(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CLOSE);
    
}


                //@Throws(Exception.constructor)
            
    public update(){
this.repaintProcessor!.process();
    
}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public addCommand(Command command){
this.commandStack!.push(command);
    
super.addCommand(command);
    
}


    public removeAllCommands(){

    size: int32_t = this.commandStack!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
super.removeCommand(this.commandStack!.pop() as Command);
    
}

}


};

            

