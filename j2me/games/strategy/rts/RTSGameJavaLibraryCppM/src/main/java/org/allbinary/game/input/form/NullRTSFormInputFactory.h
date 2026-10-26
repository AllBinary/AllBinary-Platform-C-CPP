
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSFormInput.h"

class NullRTSFormInputFactory
            : public Object
         {

    private: static const RTSFormInput SINGLETON = RTSFormInput(BasicGroupFactory::getInstance().NONE_ARRAY);

    public: static RTSFormInput getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H
