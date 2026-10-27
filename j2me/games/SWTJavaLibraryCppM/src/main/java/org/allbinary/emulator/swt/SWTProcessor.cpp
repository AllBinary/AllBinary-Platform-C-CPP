
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/thread/NullRunnable.h>

      
#include <org/eclipse/swt/widgets/Display.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SWTProcessor
            : public Object
         {

    private: static SWTProcessor* instance() { static std::unique_ptr<SWTProcessor> value(new SWTProcessor()); return value.get(); }

    public: static SWTProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SWTProcessor::instance();
    
}


protected: SWTProcessor(){
}


    public: Runnable* runnable = NullRunnable::getInstance();

    public: void process(Display* display){
display->sleep();
    
}


};

            

