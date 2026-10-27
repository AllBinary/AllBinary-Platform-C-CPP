
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABStack.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"

class CommandForm: public Form, public MyCommandInterface, public MenuListener {

    private: static inline Object* NULL_COMMAND_FORM = NullUtil::getInstance()->NULL_OBJECT;

    public: static CommandForm* getNullCommandForm(){

                        if(CommandForm::NULL_COMMAND_FORM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    CommandForm::NULL_COMMAND_FORM= new CommandForm(NullCommandListener::NULL_COMMAND_LISTENER, StringUtil::getInstance()->EMPTY_STRING, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<CommandForm*>(CommandForm::NULL_COMMAND_FORM);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: Processor* repaintProcessor = ScreenRepaintProcessorFactory::getInstance()->create(this);

    private: ABStack<Object*>* commandStack;

public: CommandForm(CommandListener* commandListener, std::string formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) : Form(formTitle){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->commandStack= StdUtil::getInstance()->createStack();
    

        try {
            this->repaintProcessor->process();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

}


    public: void initCommands(CommandListener* cmdListener){
}


    public: void open(){
this->logUtil->putF(this->commonStrings->START, this, "open");
    
}


    public: void close(){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CLOSE);
    
}


                //@Throws(Exception.constructor)
            
    public: void update(){
this->repaintProcessor->process();
    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void addCommand(Command* command){
this->commandStack->push(command);
    
super.addCommand(command);
    
}


    public: void removeAllCommands(){

    int32_t size = this->commandStack->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
super.removeCommand(dynamic_cast<Command*>(this->commandStack->pop()));
    
}

}


};

            

