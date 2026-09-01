
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
        
            #include "../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseSoundsFactory.h"
#include "Sound.h"
#include "SelectSound.h"
#include "ErrorSound.h"

class EarlySoundsFactory: public BaseSoundsFactory {

    private: static EarlySoundsFactory instance() { return EarlySoundsFactory(); }

    public: static EarlySoundsFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EarlySoundsFactory::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<Sound> getSoundInterfaceArray(){

    std::vector<Sound> soundInterfaceArray = new Array(2);;
    

    int32_t index = 0;;
    
soundInterfaceArray[index++]= SelectSound::getInstance();
    
soundInterfaceArray[index++]= ErrorSound::getInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return soundInterfaceArray;
    
}


};

            

