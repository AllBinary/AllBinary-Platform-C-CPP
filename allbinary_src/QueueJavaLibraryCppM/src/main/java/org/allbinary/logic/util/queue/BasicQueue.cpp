
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
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicQueue
            : public Object
         {

    protected: const Vector queueVector = Vector();

protected: BasicQueue(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: bool offer(Object* anyType){
this->queueVector.add(anyType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void remove(Object* anyType){
this->queueVector.remove(anyType);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: Object* removeLast(){

    Object* anyType = this->queueVector.lastElement();;
    
this->queueVector.remove(anyType);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    
}


};

            

