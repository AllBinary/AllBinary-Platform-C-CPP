
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
        



            #include <vector>
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: std::vector<Command> HIGH_SCORE_COMMANDS;

protected: HighScoreCommandsBaseFactory(std::vector<Command> HIGH_SCORE_COMMANDS){
this->HIGH_SCORE_COMMANDS= HIGH_SCORE_COMMANDS;
    
}


    public: bool isHighScoreCommand(Command command){




                        for (
    int32_t index = this->HIGH_SCORE_COMMANDS.size() -1;index >= 0; index--)
        {

                        if(command == this->HIGH_SCORE_COMMANDS[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getIndex(Command command){




                        for (
    int32_t index = this->HIGH_SCORE_COMMANDS.size() -1;index >= 0; index--)
        {

                        if(command == this->HIGH_SCORE_COMMANDS[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                            throw Exception("No Such Command");
                    
}


};

            

