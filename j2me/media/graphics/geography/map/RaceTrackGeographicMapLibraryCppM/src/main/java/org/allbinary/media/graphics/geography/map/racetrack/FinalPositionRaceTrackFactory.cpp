
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
        
class FinalPositionRaceTrackFactory
            : public Object
         {

    public: static inline const int32_t FIRST_POSITION = 1;

    private: static inline int32_t index = FinalPositionRaceTrackFactory::FIRST_POSITION;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static int32_t getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FinalPositionRaceTrackFactory::index++;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void reset(){
FinalPositionRaceTrackFactory::index= FinalPositionRaceTrackFactory::FIRST_POSITION;
    
}


private: FinalPositionRaceTrackFactory(){
}


};

            

