
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"

class NullRTSFormInputFactory
            : public Object
         {

    private: static RTSFormInput* SINGLETON() { static std::unique_ptr<RTSFormInput> value(new RTSFormInput(BasicGroupFactory::getInstance()->NONE_ARRAY)); return value.get(); }

    public: static RTSFormInput* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H
