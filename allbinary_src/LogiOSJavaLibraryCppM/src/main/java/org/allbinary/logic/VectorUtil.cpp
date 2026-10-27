
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorUtil
            : public Object
         {

    private: static VectorUtil* instance() { static std::unique_ptr<VectorUtil> value(new VectorUtil()); return value.get(); }

    public: static VectorUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorUtil::instance();
    
}


    public: int32_t getSize(Object* anyType){

    Vector<Object*>* vector = dynamic_cast<Vector<Object*>*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector->size();;
    
}


    public: Object* elementAt(Object* anyType, int32_t index){

    Vector<Object*>* vector = dynamic_cast<Vector<Object*>*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector->elementAt(index);;
    
}


};

            

