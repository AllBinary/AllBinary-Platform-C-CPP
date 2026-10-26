
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
        



            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScreenRepaintProcessor.h"

class ScreenRepaintProcessorFactory
            : public Object
         {

    private: static ScreenRepaintProcessorFactory instance() { return ScreenRepaintProcessorFactory(); }

    public: static ScreenRepaintProcessorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenRepaintProcessorFactory::instance();
    
}


private: ScreenRepaintProcessorFactory(){
}


    public: Processor create(Displayable displayable){

                        if(!J2MEUtil::isJ2ME())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenRepaintProcessor(displayable);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Processor::getInstance();;
    

                        }
                            
}


};

            

