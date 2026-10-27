
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeData
            : public Object
         {

    private: static TimeData* instance() { static std::unique_ptr<TimeData> value(new TimeData()); return value.get(); }

    public: static TimeData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeData::instance();
    
}


private: TimeData(){
}


    public: const std::string NAME = "TIME_NAME";

    public: const std::string START = "TIME_START";

    public: const std::string END = "TIME_END";

};

            

