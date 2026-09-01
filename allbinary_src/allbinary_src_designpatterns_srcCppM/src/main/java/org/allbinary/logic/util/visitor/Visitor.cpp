
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VisitorInterface.h"

class Visitor
            : public Object
        : public VisitorInterface {

    private: static Visitor instance() { return Visitor(); }

    public: static Visitor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Visitor::instance();
    
}


    protected: const NullUtil nullUtil = NullUtil::getInstance();

    public: Object* visit(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nullUtil.NULL_OBJECT;
    
}


};

            

