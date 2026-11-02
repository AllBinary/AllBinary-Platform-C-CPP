
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicQueue
            : public virtual Object
         {

    /*protected*/ public: BasicArrayList* queueVector;

/*protected*/ public: BasicQueue();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: bool offer(Object* anyType);
    /*protected*/ public: bool offer(const std::string& anyType) { return offer(JavaString::box(anyType)); }
    /*protected*/ public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool offer(BoxValue anyType) { return offer(JavaBoxes::toObject(anyType)); }
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: void remove(Object* anyType);
    /*protected*/ public: void remove(const std::string& anyType) { return remove(JavaString::box(anyType)); }
    /*protected*/ public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void remove(BoxValue anyType) { return remove(JavaBoxes::toObject(anyType)); }
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: Object* removeLast();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_BASICQUEUE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
