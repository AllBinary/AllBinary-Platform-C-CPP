
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
        



            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryEventObject
            : public Object
         {

    public: static const AllBinaryEventObject NULL_EVENT = AllBinaryEventObject(NullUtil::getInstance().NULL_OBJECT);

    private: Object* source;

public: AllBinaryEventObject(Object* anyType){
this->source= anyType;
    
}


    public: Object* getSource(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->source;
    
}


    protected: void setSource(Object* source){
this->source= source;
    
}


};

            

