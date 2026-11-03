
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class QueueInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual bool offer(Object* anyType) = 0;
    public: bool offer(const std::string& anyType) { return offer(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool offer(BoxValue anyType) { return offer(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> bool offer(const std::vector<BoxElement>& anyType) { return offer(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: virtual void remove(Object* anyType) = 0;
    public: void remove(const std::string& anyType) { return remove(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void remove(BoxValue anyType) { return remove(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void remove(const std::vector<BoxElement>& anyType) { return remove(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: virtual Object* remove() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_QUEUE_QUEUEINTERFACE_H_COMPLETE
        
        #endif
    
