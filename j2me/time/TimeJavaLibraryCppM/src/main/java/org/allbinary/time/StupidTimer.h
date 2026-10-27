
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_STUPIDTIMER_H
        #define ORG_ALLBINARY_TIME_STUPIDTIMER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class NullUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class Visitor;
class CommonStrings;
class ThreadObjectUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TimeDelayHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StupidTimer
            : public virtual Object
         {


            
    public: StupidTimer();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: NullUtil* nullUtil;

    private: ThreadObjectUtil* threadObjectUtil;

    private: bool visitBool(Visitor* visitorInterface);

                //@Throws(Exception.constructor)
            
    public: void visit(Visitor* visitorInterface, TimeDelayHelper* timeDelayHelper);

                //@Throws(Exception.constructor)
            
    public: void stopWaiting();

};

            


        #endif //ORG_ALLBINARY_TIME_STUPIDTIMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_STUPIDTIMER_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_STUPIDTIMER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadObjectUtil.h>)
#include <org/allbinary/thread/ThreadObjectUtil.h>
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

        #endif
    
