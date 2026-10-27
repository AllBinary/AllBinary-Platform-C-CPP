
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
        



        #ifndef ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_H
        #define ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/AllBinarySensor.h"

class NoAllBinarySensor: public AllBinarySensor {

    private: static NoAllBinarySensor* instance() { static std::unique_ptr<NoAllBinarySensor> value(new NoAllBinarySensor()); return value.get(); }

    public: static NoAllBinarySensor* getInstance();

private: NoAllBinarySensor();

};

            


        #endif //ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_H
