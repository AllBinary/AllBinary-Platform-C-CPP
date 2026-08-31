
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreCommandsBaseFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const HIGH_SCORE_COMMANDS: std::vector<Command>;

protected constructor (std::vector<Command> HIGH_SCORE_COMMANDS){

            super();
        this.HIGH_SCORE_COMMANDS= HIGH_SCORE_COMMANDS;
    
}


    public bool isHighScoreCommand(Command command){




                        for (
    index: int32_t = this.HIGH_SCORE_COMMANDS.length -1;index >= 0; index--)
        {

                        if(command == this.HIGH_SCORE_COMMANDS[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public int32_t getIndex(Command command){




                        for (
    index: int32_t = this.HIGH_SCORE_COMMANDS.length -1;index >= 0; index--)
        {

                        if(command == this.HIGH_SCORE_COMMANDS[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                            throw new Exception("No Such Command");
                    
}


};

            

