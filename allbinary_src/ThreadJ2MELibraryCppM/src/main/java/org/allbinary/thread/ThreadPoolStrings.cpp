
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThreadPoolStrings
            : public Object
         {

    private: static ThreadPoolStrings instance() { return ThreadPoolStrings(); }

    public: static ThreadPoolStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreadPoolStrings::instance();
    
}


    public: const std::string ADD_TASK = "addTask";

    public: const std::string START_TASK = "Started Task: ";

    public: const std::string COMPLETE_TASK = "Completed Task: ";

};

            

