
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
        



#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/form/ScreenInfo.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LimitCommandsVisitor: public Visitor {

    private: bool isNotSmallDisplay;

public: LimitCommandsVisitor(){

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    
this->isNotSmallDisplay= (displayInfo.isPortrait() && displayInfo.getLastHeight() > ScreenInfo::getInstance().SMALL_WIDTH) || (!displayInfo.isPortrait() && displayInfo.getLastHeight() > ScreenInfo::getInstance().SMALL_HEIGHT);
    
}


    public: Object* visit(Object* anyType){

    Command command = *dynamic_cast<Command*>(anyType);;
    

    BooleanFactory booleanFactory = BooleanFactory::getInstance();;
    

                        if(this->isNotSmallDisplay || command.getPriority() == 1 || command == GameCommandsFactory::getInstance().EXIT_COMMAND || command == GameCommandsFactory::getInstance().EXIT_WITHOUT_PROGRESS_COMMAND)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return booleanFactory.TRUE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return booleanFactory.FALSE;
    

                        }
                            
}


};

            

