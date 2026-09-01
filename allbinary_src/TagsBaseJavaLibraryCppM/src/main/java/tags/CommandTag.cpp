
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTagSupport.h"
#include "TagStrings.h"

class CommandTag: public CustomTagSupport {

    protected: const TagStrings tagStrings = TagStrings::getInstance();

    private: std::string command;

public: CommandTag(){
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: std::string getCommand(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->command;
    
}


};

            

