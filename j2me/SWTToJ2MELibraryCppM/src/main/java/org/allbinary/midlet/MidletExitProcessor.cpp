
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <javax/microedition/midlet/MIDlet.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MidletExitProcessor: public Processor {

    private: MIDlet midlet;

public: MidletExitProcessor(MIDlet midlet){
this->midlet= midlet;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
System.exit(0);
    
}


};

            

