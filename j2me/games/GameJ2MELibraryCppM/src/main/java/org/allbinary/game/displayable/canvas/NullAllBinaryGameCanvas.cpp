
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"

class NullAllBinaryGameCanvas
            : public Object
        , public AllBinaryGameCanvasInterface {

    public: static NullAllBinaryGameCanvas* NULL_ALLBINARY_GAME_CANVAS() { static std::unique_ptr<NullAllBinaryGameCanvas> value(new NullAllBinaryGameCanvas()); return value.get(); }

    public: AllBinaryGameLayerManager* getLayerManager(){



                            throw new RuntimeException();
                    
}


    public: void addCommand(Command* cmd){



                            throw new RuntimeException();
                    
}


    public: int32_t getHeight(){



                            throw new RuntimeException();
                    
}


    public: int32_t getWidth(){



                            throw new RuntimeException();
                    
}


    public: void removeCommand(Command* cmd){



                            throw new RuntimeException();
                    
}


    public: void setCommandListener(CommandListener* l){



                            throw new RuntimeException();
                    
}


};

            

