
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicGroupFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RTSFormInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullRTSFormInputFactory
            : public virtual Object
         {

    private: static RTSFormInput* SINGLETON_owner();
    private: static RTSFormInput* SINGLETON;

    public: static RTSFormInput* getInstance();


            
    public: NullRTSFormInputFactory();
        
};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSFORMINPUTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/BasicGroupFactory.h>)
#include <org/allbinary/game/identification/BasicGroupFactory.h>
#endif
#if __has_include("org/allbinary/game/input/form/RTSFormInput.h")
#include "org/allbinary/game/input/form/RTSFormInput.h"
#endif

        #endif
    
