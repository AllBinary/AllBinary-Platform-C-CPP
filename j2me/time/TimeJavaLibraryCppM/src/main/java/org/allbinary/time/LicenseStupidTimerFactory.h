
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
        



        #ifndef ORG_ALLBINARY_TIME_LICENSESTUPIDTIMERFACTORY_H
        #define ORG_ALLBINARY_TIME_LICENSESTUPIDTIMERFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/StupidTimer.h"

class LicenseStupidTimerFactory
            : public Object
         {

    private: static StupidTimer* instance() { static std::unique_ptr<StupidTimer> value(new StupidTimer()); return value.get(); }

    public: static StupidTimer* getInstance();

};

            


        #endif //ORG_ALLBINARY_TIME_LICENSESTUPIDTIMERFACTORY_H
