
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
        
#include <javax/microedition/media/Control.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlayer.h"
#include "NullControl.h"

class NoPlayer: public BasicPlayer {

    public: static const NoPlayer NO_PLAYER = NoPlayer();

public: NoPlayer(){
}


    public: void close(){
}


    public: std::string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().NULL_STRING;
    
}


    public: Control getControl(std::string controlType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullControl();
    
}


    public: std::vector<Control> getControls(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


};

            

