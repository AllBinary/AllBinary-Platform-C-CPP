
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/AppletUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomGameMenuUtil
            : public Object
         {

    public: static void add(MyCanvas canvas){

    GameCommandsFactory gameCommandsFactory = GameCommandsFactory::getInstance();;
    

                        if(AppletUtil::isAppletLoader(canvas))
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            canvas.addCommand(gameCommandsFactory.EXIT_COMMAND);
    

                        }
                            
}


};

            

