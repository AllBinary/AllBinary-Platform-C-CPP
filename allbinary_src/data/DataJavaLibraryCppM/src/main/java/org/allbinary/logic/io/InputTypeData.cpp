
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
        
class InputTypeData
            : public Object
         {

    private: static InputTypeData* instance() { static std::unique_ptr<InputTypeData> value(new InputTypeData()); return value.get(); }

    public: static InputTypeData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputTypeData::instance();
    
}


private: InputTypeData(){
}


    public: const std::string NAME = "INPUT_TYPE_NAME";

};

            

