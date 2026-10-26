
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONVISITOR_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONVISITOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class TouchButtonVisitor
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: void process(TouchButtonInput touchButtonInput, std::string string);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONVISITOR_H
