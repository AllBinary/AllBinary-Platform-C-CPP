
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

        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/input/HtmlLengthInput.h"
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlInputData.h"

class HtmlPasswordInput: public HtmlLengthInput {

public: HtmlPasswordInput(std::string before, std::string name, std::string value, std::string after) : HtmlLengthInput(before, HtmlInputData::getInstance()->PASSWORD, name, value, after){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
setSize(int32_t(32));
    
setMaxLength(int32_t(128));
    
}


};

            

