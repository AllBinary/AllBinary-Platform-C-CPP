
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CharArrayFactory
            : public Object
         {

    private: static CharArrayFactory* instance() { static std::unique_ptr<CharArrayFactory> value(new CharArrayFactory()); return value.get(); }

    public: static CharArrayFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CharArrayFactory::instance();
    
}


    private: const std::vector<char> zeroCharArray = std::vector<char>(0);

    public: std::vector<char> getZeroCharArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->zeroCharArray;
    
}


};

            

