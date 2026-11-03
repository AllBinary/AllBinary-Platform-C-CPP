
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
        #define ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullPriorityRunnable;
class PriorityRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThreadObjectUtil
            : public virtual Object
         {

    private: static ThreadObjectUtil* instance_owner();
    private: static ThreadObjectUtil* instance;

    public: static ThreadObjectUtil* getInstance();


            
    public: ThreadObjectUtil();
        
    public: PriorityRunnable* NULL_PRIORITY_RUNNABLE;

    public: void notifyObject(Object* anyType);
    public: void notifyObject(const std::string& anyType) { return notifyObject(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void notifyObject(BoxValue anyType) { return notifyObject(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void notifyObject(const std::vector<BoxElement>& anyType) { return notifyObject(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: void waitObject(Object* anyType);
    public: void waitObject(const std::string& anyType) { return waitObject(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void waitObject(BoxValue anyType) { return waitObject(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void waitObject(const std::vector<BoxElement>& anyType) { return waitObject(JavaBoxes::toObject(anyType)); }

                //@Throws(Exception.constructor)
            
    public: void waitObjectFor(Object* anyType, int64_t delay);
    public: void waitObjectFor(const std::string& anyType, int64_t delay) { return waitObjectFor(JavaString::box(anyType), delay); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void waitObjectFor(BoxValue anyType, int64_t delay) { return waitObjectFor(JavaBoxes::toObject(anyType), delay); }
    public: template<typename BoxElement> void waitObjectFor(const std::vector<BoxElement>& anyType, int64_t delay) { return waitObjectFor(JavaBoxes::toObject(anyType), delay); }

    public: void processThread(Runnable* runnable);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H_COMPLETE
        #if __has_include("org/allbinary/thread/NullPriorityRunnable.h")
#include "org/allbinary/thread/NullPriorityRunnable.h"
#endif
#if __has_include("org/allbinary/thread/PriorityRunnable.h")
#include "org/allbinary/thread/PriorityRunnable.h"
#endif

        #endif
    
